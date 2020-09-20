#include "Arduino.h"
#include "Main.h"
#include <ESP32Ping.h>
//#include "WiFi_Setup.h"

//WiFiMulti wifiMulti;


WiFiClient client;
const IPAddress remote_ip(192, 168, 1, 254);
IPAddress local_IP(192, 168, 1, 208);
IPAddress gateway(192, 168, 1, 254);    // Set your network Gateway usually your Router base address
IPAddress subnet(255, 255, 255, 0); 
IPAddress dns(192,168,1,254);           // Set your network DNS usually your Router base address
const char ssid_1[]     = "BTHub6-C5H2";
const char password_1[] = "YuqWCHMn9UGM";

int sensor_num=0;
const unsigned long UpdateInterval1 = 30 * 1000;
const char* ServerHost1 ="192.168.1.200";
String UploadData="";
//##################################################################################################
void Web_Listen(){
Pin16_Flip();
server.handleClient();
Pin16_Flip();
}
/////////////////////////////////  HTML BUTTON PRESSED  /////////////////////////////////////////////

//################################  handleNotFound  #################################################
void handleNotFound(){
  String message = "File Not Found\n\n";
  message += "URI: ";
  message += server.uri();
  message += "\nMethod: ";
  message += (server.method() == HTTP_GET)?"GET":"POST";
  message += "\nArguments: ";
  message += server.args();
  message += "\n";
  for (uint8_t i=0; i<server.args(); i++){
    message += " " + server.argName(i) + ": " + server.arg(i) + "\n";
  }
  server.send(404, "text/plain", message);
  Serial.println(message);
}
//################################  WiFi_Setup #############################################################
void WiFi_ON(){
   if (!WiFi.config(local_IP, gateway, subnet, dns)) { 
    Serial.println(F("WiFi STATION Failed to configure Correctly")); 
  }

  Serial.print(F("Connecting to "));
  Serial.println(ssid_1);
  WiFi.begin(ssid_1, password_1);
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.print(F("Trying to connect to Wifi Network"));
  }
  Serial.println(F(""));
  Serial.println(F("Successfully connected to WiFi network"));
  Serial.println(F("IP address: "));
  Serial.println(WiFi.localIP());
  server.begin();

  ////////////////////  My setup onwards   /////////////////////////////////
  server.on("/", ALL);
  server.on("/sensor", HandleSensors);
  server.on("/test", []() { server.send(200, "text/plain", "Server status is OK"); }); // Simple server test by providing a status response
  //server.on("/homepage", homepagePL);
  server.on("/page1", Page_Display1);
  server.on("/page2", Page_Display2);
  server.on("/page3", Page_Display3);
  server.on("/page4", Page_Display4);
  server.on("/page5", Page_Display5);
  server.on("/page6", Page_Display6);
  server.on("/page7", Page_Display7);
  server.on("/page8", Page_Display8);
  server.on("/ALL", ALL);
  server.on("/homepage", ALL);
  server.on("/LOWD", SD_LOW_Delete);
  server.on("/HIGHD", SD_HIGH_Delete);
  server.on("/PVD", SD_PV_Delete);
  server.on("/ALLD", SD_ALL_Delete);
  //server.on("/reset", ReSet);

  server.onNotFound(handleNotFound); // When a client requests an unknown URI for example something other than "/")
 
  server.begin();
  Serial.println(F("HTTP server started"));
}
void WebPage(){
  ALL();
}
void WiFi_Check(){
  Serial.println();
  Serial.print(F("WiFi connected with ip "));  
  Serial.println(WiFi.localIP());
  watchdog();
  Serial.print F("Pinging ip ");
  Serial.println(remote_ip);

  if(Ping.ping(remote_ip)) {
    Serial.println(F("Success!!"));
  } else {
    Serial.println(F("Error :("));
    
    esp_sleep_enable_timer_wakeup(UpdateInterval1);
    Serial.println(F("Starting deep-sleep period..."));
    esp_deep_sleep_start(); // Sleep for e.g. 30 minutes
  }
}
//##########################################################################
void Heating_On(){
  if (!client.connect(ServerHost1,80, 2000)) {
    Serial.println("");
    Serial.println("Server Host1 not open");
    Serial.println("");
    return;
  }
    watchdog();
    if(Board_8.Temperature >=22.00){
      UploadData="ROFF";
      client.println("GET /"+UploadData+" HTTP/1.1\r\nConnection: close\r\n\r\n");
      client.println("Host: "+String(ServerHost1));
      delay(250); // Essential delay for ESP32 500
      Serial.print("...Information to be uploaded: "+String(ServerHost1));
      Serial.println(UploadData);
      Serial.println("");
      Serial.println("Turn Relay Off");
      client.println("Connection: close");
      Serial.println(""); 
      client.stop();
    }
    else{
      if(Board_8.Temperature<=20.00){
        UploadData="RON";
        client.println("GET /"+UploadData+" HTTP/1.1\r\nConnection: close\r\n\r\n");
        client.println("Host: "+String(ServerHost1));
        delay(250); // Essential delay for ESP32 500
        Serial.print("...Information to be uploaded: "+String(ServerHost1));
        Serial.println(UploadData);
        Serial.println("");
        Serial.println("Turn Relay On");
        client.println("Connection: close"); 
        Serial.println("");
        client.stop();
      }
    }  
}

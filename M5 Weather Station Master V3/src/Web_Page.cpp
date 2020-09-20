#include "Arduino.h"
#include "Main.h"

String ServerVersion  = "M5 ESP32 V2";
String siteheading    = "M5 ESP32 ";         // Site's Main Title
String subheading     = "Sensor Readings";      // Sub-heading for all pages
String sitetitle      = "M5 ESP32 V2";         // Appears on the tabe of a Web Browser
String yourfootnote   = "Bare Webserver";       // A foot note e.g. "My Web Site"
String siteversion    = "V2.0";                 // Version of your Website
String  theme = "darkly";
String webpage="";

void ALL(){
    homepage_tiny ();
    ALL_Page();
   
    SendHTML_Content(); // Send footer
    SendHTML_Stop();
    webpage="";  
}
void ALL_Page(){
  webpage +=F("<html charset=UTF-8><head><meta http-equiv='refresh' content='60' name='viewport' content='width=device-width, initial-scale=1'/>");
  webpage +=F("<script src='https://ajax.googleapis.com/ajax/libs/jquery/3.2.1/jquery.min.js'></script><script src='https://maxcdn.bootstrapcdn.com/bootstrap/3.3.7/js/bootstrap.min.js'></script>");

  webpage +=F("<link href='https://maxcdn.bootstrapcdn.com/bootswatch/3.3.7/");
  webpage +=(theme);
  webpage +=F("/bootstrap.min.css' rel='stylesheet'>");
  //webpage +=F("<title>ESP8266 Demo </title></head><body>");
  webpage +=F("<div class='container-fluid'>");
  webpage +=F("<div class='row'>");
  webpage +=F("<div class='col-md-12'>");
  

    webpage += F("<h3>Current Sensor Readings</h3>");
    webpage += F("<div style='overflow-x:auto;'>");  // Add horizontal scrolling if number of fields exceeds page width
    webpage += "<table style='width:100%'>";

    //webpage += F("<tr><th> </th>");
    //webpage += F("<tr><th> </th>");
    //webpage += F("<th>Location</th>");
    webpage += F("<th><th>Conservatory</th>");
    webpage += F("<th>Bedroom 1</th>");
    webpage += F("<th>Work Room</th>");
    webpage += F("<th>Bedroom 2</th>");


    webpage += F("<tr><td>Type</td>");
    webpage += F("<th>DHT22/BMP208</th>");
    webpage += F("<th>DHT22/BMP208</th>");
    webpage += F("<th>DHT22/BMP208</th>");
    webpage += F("<th>DHT22/BMP208</th>");

    webpage +=F("<tr>");
    webpage +=F("<th>");


    webpage += F("<tr><td>Temperature</td>");
    webpage += F("<th>");
    webpage +=(Board_1.Temperature );
    webpage +=F("</th>");
    webpage +=F("<th>");
    webpage +=(Board_2.Temperature );
    webpage +=F("</th>");
    webpage +=F("<th>");
    webpage +=(Board_3.Temperature);
    webpage +=F("</th>");
    webpage +=F("<th>");
    webpage +=(Board_4.Temperature);
    webpage +=F("</th>");
    webpage +=F("<th>");
    webpage +=F("</th></tr>");
    webpage +=F("<tr>");

    webpage += F("<tr><td>Humidity</td>");
    webpage +=F("<th>");
    webpage +=(Board_1.Humidity );
    webpage +=F("</th>");
    webpage +=F("<th>");
    webpage +=(Board_2.Humidity);
    webpage +=F("</th>");
    webpage +=F("<th>");
    webpage +=(Board_3.Humidity);
    webpage +=F("</th>");
    webpage +=F("<th>");
    webpage +=(Board_4.Humidity);
    webpage +=F("</th>");
    webpage +=F("<th>");

    webpage +=F("</th></tr>");

    SendHTML_Content();

    webpage += F("<tr><td>BMP Temperature</td>");
    webpage +=F("<th>");
    webpage +=(Board_1.BMP_Temperature);
    webpage +=F("</th>");
    webpage +=F("<th>");
    webpage +=(Board_2.BMP_Temperature);
    webpage +=F("</th>");
    webpage +=F("<th>");
    webpage +=(Board_3.BMP_Temperature);
    webpage +=F("</th>");
    webpage +=F("<th>");
    webpage +=(Board_4.BMP_Temperature);
    webpage +=F("</th>");
    webpage +=F("<th>");

    webpage += F("<tr><td>Pressure</td>");
    webpage +=F("<th>");
    webpage +=(Board_1.BMP_Pressure );
    webpage +=F("</th>");
    webpage +=F("<th>");
    webpage +=(Board_2.BMP_Pressure);
    webpage +=F("</th>");
    webpage +=F("<th>");
    webpage +=(Board_3.BMP_Pressure);
    webpage +=F("</th>");
    webpage +=F("<th>");
    webpage +=(Board_4.BMP_Pressure);
    webpage +=F("</th>");
    webpage +=F("<th>");

    webpage += F("<tr><td>Photoresistor</td>");
    webpage +=F("<th>");
    webpage +=(Board_1.Light );
    webpage +=F("</th>");
    webpage +=F("<th>");
    webpage +=(Board_2.Light);
    webpage +=F("</th>");
    webpage +=F("<th>");
    webpage +=(Board_3.Light);
    webpage +=F("</th>");
    webpage +=F("<th>");
    webpage +=(Board_4.Light);
    webpage +=F("</th>");
    webpage +=F("<th>");

    SendHTML_Content();

    webpage += F("<tr><td>Updated</td>");
    webpage +=F("<th>");
    webpage +=(Board_1.Time );
    webpage +=F("</th>");
    webpage +=F("<th>");
    webpage +=(Board_2.Time);
    webpage +=F("</th>");
    webpage +=F("<th>");
    webpage +=(Board_3.Time);
    webpage +=F("</th>");
    webpage +=F("<th>");
    webpage +=(Board_4.Time);
    webpage +=F("</th>");
    webpage +=F("<th><th><td>");

    SendHTML_Content();
    webpage += F("<tr><th><td> </th>");
    webpage += F("<tr><th>. </th>");
    webpage += F("<tr><th>. </th>");
    webpage += F("<th>Outside</th>");
    webpage += F("<th>Utility</th>");
    webpage += F("<th>Kitchen</th>");
    webpage += F("<th>Craft Room</th></tr>");
    
    webpage +=F("<tr>");
    webpage +=F("<th>");
    webpage +=F("<td>");
    webpage +=F("<td>");
    webpage +=F("<td>");

    webpage += F("<tr><td>Type</td>");
    webpage += F("<th>DHT22/BMP208</th>");
    webpage += F("<th>DHT22/BMP208</th>");
    webpage += F("<th>DHT22/BMP208</th>");
    webpage += F("<th>DHT22/BMP208</th>");

    webpage += F("<tr><td>Temperature</td>");
    webpage +=F("<th>");
    webpage +=(Board_5.Temperature );
    webpage +=F("</th>");
    webpage +=F("<th>");
    webpage +=(Board_6.Temperature);
    webpage +=F("</th>");
    webpage +=F("<th>"); 
    webpage +=(Board_7.Temperature);
    webpage +=F("</th>");
    webpage +=F("<th>");   
    webpage +=(Board_8.Temperature);
    webpage +=F("</th></tr>"); 

    webpage += F("<tr><td>Humidity</td>");
    webpage +=F("<th>");    
    webpage +=(Board_5.Humidity );
    webpage +=F("</th>");
    webpage +=F("<th>");
    webpage +=(Board_6.Humidity);
    webpage +=F("</th>");
    webpage +=F("<th>");
    webpage +=(Board_7.Humidity);
    webpage +=F("</th>");
    webpage +=F("<th>");    
    webpage +=(Board_8.Humidity);
    webpage +=F("</th></tr>");
    
    webpage += F("<tr><td>BMP Temperature</td>");
    webpage +=F("<th>");
    webpage +=(Board_5.BMP_Temperature );
    webpage +=F("</th>");
    webpage +=F("<th>");
    webpage +=(Board_6.BMP_Temperature);
    webpage +=F("</th>");
    webpage +=F("<th>");
    webpage +=(Board_7.BMP_Temperature);
    webpage +=F("</th>");
    webpage +=F("<th>");    
    webpage +=(Board_8.BMP_Temperature);
    webpage +=F("</th></tr>");
    SendHTML_Content();

    webpage += F("<tr><td>Pressure</td>");
    webpage +=F("<th>");
    webpage +=(Board_5.BMP_Pressure);
    webpage +=F("</th>");
    webpage +=F("<th>");
    webpage +=(Board_6.BMP_Pressure);
    webpage +=F("</th>");
    webpage +=F("<th>");
    webpage +=(Board_7.BMP_Pressure);
    webpage +=F("</th>");
    webpage +=F("<th>");
    webpage +=(Board_8.BMP_Pressure);
    webpage +=F("</th></tr>");

    webpage += F("<tr><td>Photoresistor</td>");
    webpage +=F("<th>");
    webpage +=(Board_5.Light);
    webpage +=F("</th>");
    webpage +=F("<th>");
    webpage +=(Board_6.Light);
    webpage +=F("</th>");
    webpage +=F("<th>");
    webpage +=(Board_7.Light);
    webpage +=F("</th>");
    webpage +=F("<th>");
    webpage +=(Board_8.Light);
    webpage +=F("</th></tr>");

    webpage += F("<tr><td>Updated</td>");
    webpage +=F("<th>");
    webpage +=(Board_5.Time);
    webpage +=F("</th>");
    webpage +=F("<th>");
    webpage +=(Board_6.Time);
    webpage +=F("</th>");
    webpage +=F("<th>");
    webpage +=(Board_7.Time);
    webpage +=F("</th>");
    webpage +=F("<th>");     
    webpage +=(Board_8.Time);
    //webpage +=("<i class="arrow left>");
    webpage +=F("</th></tr>");

    SendHTML_Content();
}

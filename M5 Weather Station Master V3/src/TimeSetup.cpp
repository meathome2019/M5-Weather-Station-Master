#include <Arduino.h>
#include "TimeSetup.h"
#include "Main.h"

String Stime="";
String Timet="";
int BST_Offset=3600;
int Sec;
RTC_DATA_ATTR int Min;
RTC_DATA_ATTR int Hour;
RTC_DATA_ATTR int Day; 
int16_t THour;
int16_t TMin;
int16_t TSec;
int Time_Count=1801;
int Time_Add=0;
int x=0;


//##########################################################################################
void Setup_Time(){
    configTime(0 * 3600, 0, "pool.ntp.org", "time.nist.gov");
    Serial.println("\nWaiting for time");
    while (!time(nullptr))
  {
    Serial.print(".");
    delay(500);
  }
    Serial.println("\nTime Server Connected");
}
//#######################################################################################
void CallTime(){
  Stime="";
  
  for (int i = 0; i <= 2; i++)
  { //Day
    Stime = Stime + Timet[i];
  }
  Stime = Stime + "/"; //Month
  for (int i = 4; i <= 6; i++)
  {
    Stime = Stime + Timet[i];
  }
  Stime = Stime + "/";

  for (int i = 8; i <= 10; i++)
  { //Date
    Stime = Stime + Timet[i];
  }

  for (int i = 11; i <= 18; i++)
  {
    Stime = Stime + Timet[i];
  }

}
///////////////////////////////////////////////////////////////////
void homepage_uptime()
{
  //webpage += "<P class='style2'></p>";
  webpage += "<p class='style2'>";
  webpage += "<p>This page was displayed on : " + String(Timet) + " Hr</p>";
  String Uptime = (String(millis() / 1000 / 60 / 60)) + ":";
  Uptime += (((millis() / 1000 / 60 % 60) < 10) ? "0" + String(millis() / 1000 / 60 % 60) : String(millis() / 1000 / 60 % 60)) + ":";
  Uptime += ((millis() / 1000 % 60) < 10) ? "0" + String(millis() / 1000 % 60) : String(millis() / 1000 % 60);
  webpage += "<p>Uptime: " + Uptime + "</p>";
  if (Room_name == "Conservatory"){
    //Page_Time1="";
    webpage += "<p>Refreshed: " + Board_1.Time + "</p>";
  }
  if (Room_name =="Bedroom Master"){
    //Page_Time2="";
    webpage += "<p>Refreshed: " + Board_2.Time + "</p>";
  }
  if (Room_name =="Work Room"){
    //Page_Time3="";
    webpage += "<p>Refreshed: " + Board_3.Time + "</p>";
  }
  if (Room_name == "Lydia's Room"){
    //Page_Time4="";
    webpage += "<p>Refreshed: " + Board_4.Time + "</p>";
  }
  if (Room_name == "Outside"){
    //Page_Time5="";
    webpage += "<p>Refreshed: " + Board_5.Time + "</p>";
  }
  if (Room_name == "Utility Room"){
    //Page_Time6="";
    webpage += "<p>Refreshed: " + Board_6.Time + "</p>";
  }
  if (Room_name == "Kitchen"){
    //Page_Time7="";
    webpage += "<p>Refreshed: " + Board_7.Time + "</p>";
  }
  if (Room_name == "Craft Room"){
    //Page_Time8="";
    webpage += "<p>Refreshed: " + Board_8.Time + "</p>";
  }
}

//################################################################################################# 
void Time_Clock_Display(){
  x++;
  M5.Lcd.fillScreen(DARKGREEN);
  M5.Lcd.setCursor(50, 10);
  M5.Lcd.setTextColor(WHITE);
  M5.Lcd.setTextSize(3);
  M5.Lcd.println("Waiting for ");
  M5.Lcd.setCursor(50, 40);
  M5.Lcd.println("Time Clock");
  M5.Lcd.setCursor(150, 70);
  M5.Lcd.println(x);

  M5.update();
}
/////////////////////////////////  RUN TIME  ////////////////////////////////////////////////////
void Run_Time(){
  String TDump;  
  if(Time_Count>=900){
    //Serial.println(Time_Add);
    Time_Count=0;
    time_t now = time(nullptr);
    now = now + BST_Offset;
    Timet = ctime(&now);
    Time_Add =now;
    while(now<=1597167360){
       now = time(nullptr);
       now = now + BST_Offset;
       Timet = ctime(&now);
       delay(3000);
       Serial.print(".");
       Time_Clock_Display();
       watchdog();
       Time_Add =now;
       yield();
    }
     M5_Display1_Enab();
  }
  else{
    Time_Add++;
    time_t now = Time_Add;
    Time_Count++;
    Timet = ctime(&now);
  } 

  TDump=TDump+Timet[11];
  TDump=TDump+Timet[12];
  THour= atol (TDump.c_str()) ;

  TDump=Timet[14];
  TDump=TDump+Timet[15];
  TMin=atol (TDump.c_str()) ;

  TDump=Timet[17];
  TDump=TDump+Timet[18];
  TSec=atol (TDump.c_str()) ;

//  Serial.println(THour);
//  Serial.println(TMin);
//  Serial.println(Timet);
//  Serial.println(Time_Count);

 // if((THour>=12 || THour<=06) && (TMin>=0 && TMin<=4)){
 //   Serial.print("Back in a 16 Min ");
 //   delay(150);
 //   begin_sleep();
 // }
 
  if(Sec>=60){
    Sec=0;
    Min++;
  }  
  if (Min>=60){
    Min=0;
    Hour++;
  }
  if(Hour>=23){
    Hour=0;
    Day++;
  } 
  Sec++; 
}
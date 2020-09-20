#include <Arduino.h>
#include <TaskScheduler.h>
#include "Main.h"


const int loopTimeCtl = 0;
hw_timer_t *timer = NULL;

WebServer server(80);
Scheduler ts;

Task Web_Listen1(110,TASK_FOREVER , &Web_Listen,&ts,true);
Task Run_Time1(1000, TASK_FOREVER,&Run_Time,&ts,true);
Task watchdog1(220, TASK_FOREVER, &watchdog,&ts,true);
Task M5_Display1(3030, TASK_FOREVER,&M5_Room_Display,&ts,true);
Task OTA1(3040, TASK_FOREVER,&OTA,&ts,true);
Task WiFi_Check1(4*TASK_MINUTE, TASK_FOREVER,&WiFi_Check,&ts,true);

const int GPIO_PIN_NUMBER_16 = 16;
const int GPIO_PIN_NUMBER_17 = 17;

struct Board1 Board_1;
struct Board2 Board_2;
struct Board3 Board_3;
struct Board4 Board_4;
struct Board5 Board_5;
struct Board6 Board_6;
struct Board7 Board_7;
struct Board8 Board_8;

struct Board1PV Board_1PV;
struct Board2PV Board_2PV;
struct Board3PV Board_3PV;
struct Board4PV Board_4PV;
struct Board5PV Board_5PV;
struct Board6PV Board_6PV;
struct Board7PV Board_7PV;
struct Board8PV Board_8PV;

struct Board1LOW Board_1LOW;
struct Board2LOW Board_2LOW;
struct Board3LOW Board_3LOW;
struct Board4LOW Board_4LOW;
struct Board5LOW Board_5LOW;
struct Board6LOW Board_6LOW;
struct Board7LOW Board_7LOW;
struct Board8LOW Board_8LOW;

struct Board1HIGH Board_1HIGH;
struct Board2HIGH Board_2HIGH;
struct Board3HIGH Board_3HIGH;
struct Board4HIGH Board_4HIGH;
struct Board5HIGH Board_5HIGH;
struct Board6HIGH Board_6HIGH;
struct Board7HIGH Board_7HIGH;
struct Board8HIGH Board_8HIGH;
///////////////////////////////// Int for Watchdog    //////////////////////////

void IRAM_ATTR resetModule(){
    ets_printf("reboot\n");
    ESP.restart();
}


//##############################################################################

void M5_Display1_Enab(){
  M5_Display1.enableDelayed();
}
//###############################  Setup #######################################
void setup() {
  Serial.begin(115200);
  SD_Setup();
  SD_Check(); 
  M5.begin();
  WiFi_ON();
  OTA_Setup();
  Setup_Time();
 
  
  Web_Listen1.enableDelayed();
  //Run_Time1.enableDelayed();
  //watchdog1.enableDelayed();
  OTA1.enableDelayed();
  WiFi_Check1.enableDelayed();
  
  #ifdef speek
  ThingSpeak.begin(client);
  
  #endif
  M5.Lcd.fillScreen(DARKGREEN);
  M5.Lcd.setCursor(10, 10);
  M5.Lcd.setTextColor(WHITE);
  M5.Lcd.setTextSize(3);
  M5.Lcd.println("Starting!");
  M5.update();
  pinMode(GPIO_PIN_NUMBER_16, OUTPUT);
  digitalWrite(GPIO_PIN_NUMBER_16, LOW);
  pinMode(GPIO_PIN_NUMBER_17, OUTPUT);
  digitalWrite(GPIO_PIN_NUMBER_17, LOW);
  
  
  timer = timerBegin(0, 80, true); //timer 0, div 80
  timerAttachInterrupt(timer, &resetModule, true);
  timerAlarmWrite(timer, 15000000, false); //set time in us  15sec
  timerAlarmEnable(timer); //enable interrupt
 
 }

void loop() {
  ts.execute();
  }
//##############################################################################
void Pin16_Flip(){

  if(digitalRead(GPIO_PIN_NUMBER_16)==0){
  digitalWrite(GPIO_PIN_NUMBER_16,HIGH);
  }
  else{
    digitalWrite(GPIO_PIN_NUMBER_16,LOW);
  }
}
//##############################################################################
void Pin17_Flip(){
  if(digitalRead(GPIO_PIN_NUMBER_17)==0){
  digitalWrite(GPIO_PIN_NUMBER_17,HIGH);
  }
  else{
    digitalWrite(GPIO_PIN_NUMBER_17,LOW);
  }
}
//##############################################################################
void watchdog(){
  timerWrite(timer, 0);
}
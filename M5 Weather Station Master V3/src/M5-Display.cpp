#include <Arduino.h>
#include "Main.h"

void PD_main();

String room="";
String Time="";
float Temp=0;
float TempPV=0;
int Light=0;
int PD=1;

void M5_Room_Display(){
    M5_Room_Display1();
    PD++;
    if(PD==9){
        PD=1;
    }
}


void M5_Room_Display1(){
    if (PD==1){
        room = "Conservatory";
        Time=Board_1.Time;
        Temp=Board_1.Temperature;
        TempPV=Board_1PV.Temperature;
        Light=Board_1.Light;
        PD_main();
    }
    if (PD==2){
        room = "Bed Room";
        Time=Board_2.Time;
        Temp=Board_2.Temperature;
        TempPV=Board_2PV.Temperature;
        Light=Board_2.Light;
        PD_main();
    }
    if (PD==3){
        room = "Work Room";
        Time=Board_3.Time;
        Temp=Board_3.Temperature;
        TempPV=Board_3PV.Temperature;
        Light=Board_3.Light;
        PD_main();
    }
    if (PD==4){
        room = "Lydia's Room";
        Time=Board_4.Time;
        Temp=Board_4.Temperature;
        TempPV=Board_4PV.Temperature;
        Light=Board_4.Light;
        PD_main();
    }
    if (PD==5){
        room = "Outside";
        Time=Board_5.Time;
        Temp=Board_5.Temperature;
        TempPV=Board_5PV.Temperature;
        Light=Board_5.Light;
        PD_main();
    }
    if (PD==6){
        room = "Utility";
        Time=Board_6.Time;
        Temp=Board_6.Temperature;
        TempPV=Board_6PV.Temperature;
        Light=Board_6.Light;
        PD_main();
    }
    if (PD==7){
        room = "Kitchen";
        Time=Board_7.Time;
        Temp=Board_7.Temperature;
        TempPV=Board_7PV.Temperature;
        Light=Board_7.Light;
        PD_main();
    }    
    if (PD==8){
        room = "Craft Room";
        Time=Board_8.Time;
        Temp=Board_8.Temperature;
        TempPV=Board_8PV.Temperature;
        Light=Board_8.Light;
        PD_main(); 
    }
          
}
void PD_main()
{
    M5.Lcd.clear();
    M5.Lcd.fillScreen(DARKCYAN);
    M5.Lcd.setTextColor(WHITE);
    M5.Lcd.setCursor(5, 10);
    M5.Lcd.setTextSize(4);
    M5.Lcd.print(room);

    M5.Lcd.setCursor(5, 60);
    M5.Lcd.print(Time);
    M5.Lcd.setCursor(245, 60);
    M5.Lcd.print("B");
    M5.Lcd.print(PD);
    M5.Lcd.setTextSize(6);
    M5.Lcd.setCursor(5, 120);
    M5.Lcd.print(Temp);
    M5.Lcd.setTextSize(1);
    M5.Lcd.print(" ");
    M5.Lcd.setTextSize(6);
    M5.Lcd.print("C");

    //M5.Lcd.setTextSize(1);
    //M5.Lcd.setCursor(190, 160);
    //M5.Lcd.print(".");
    M5.Lcd.setTextSize(6);
    M5.Lcd.setCursor(5, 190);
    M5.Lcd.print(Light);

    M5.Lcd.setTextSize(1);
    //M5.Lcd.setCursor(195, 190);
    M5.Lcd.print(" ");
    M5.Lcd.setTextSize(6);
    M5.Lcd.print("%");

    if (Temp >= TempPV)
    {
        M5.Lcd.fillTriangle(275, 160, 295, 130, 315, 160, 0x07e0);
    }
    else
    {
        M5.Lcd.fillTriangle(275, 130, 295, 160, 315, 130, 0xf800);
    }

    if (Temp < 20.00)
    {
        M5.Lcd.fillCircle(250, 145, 20, 0xf800);
    }
    else
    {
        M5.Lcd.fillCircle(250, 145, 20, 0x07e0);
    }
    M5.update();
}

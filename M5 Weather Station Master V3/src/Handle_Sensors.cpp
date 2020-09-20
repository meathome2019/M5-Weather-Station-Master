#include <Arduino.h>
#include "Main.h"

    bool SD1LOW=false;
    bool SD2LOW=false;
    bool SD3LOW=false;
    bool SD4LOW=false;
    bool SD5LOW=false;
    bool SD6LOW=false;
    bool SD7LOW=false;
    bool SD8LOW=false;
    
    bool SD1HIGH=false;
    bool SD2HIGH=false;
    bool SD3HIGH=false;
    bool SD4HIGH=false;
    bool SD5HIGH=false;
    bool SD6HIGH=false;
    bool SD7HIGH=false;
    bool SD8HIGH=false;


//##############################################################################
void HandleSensors(){

    if(server.arg(1) != 0 && server.arg(2) != 0 && server.arg(3) != 0 && server.arg(4) != 0 && server.arg(5) != 0){
        CallTime();
        Stime.remove(0,11);
        Stime.remove(8);

        Serial.println(server.arg(0));
        sensor_num = server.arg(0).toInt();
        if( sensor_num == 1 ){
            Board1PV_Load();
            Board_1.sensornumber = server.arg(0).toInt();
            Board_1.Time=Stime;
            Board_1.Temperature= server.arg(1).toFloat();
            Board_1.Humidity=server.arg(2).toFloat();
            Board_1.BMP_Temperature=server.arg(3).toFloat();
            Board_1.BMP_Pressure=server.arg(4).toFloat();
            Board_1.Light=server.arg(5).toInt();
            SD1();
        }
        if(sensor_num==2){
            Board2PV_Load();
            Board_2.sensornumber = server.arg(0).toInt();
            Board_2.Time=Stime;
            Board_2.Temperature= server.arg(1).toFloat();
            Board_2.Humidity=server.arg(2).toFloat();
            Board_2.BMP_Temperature=server.arg(3).toFloat();
            Board_2.BMP_Pressure=server.arg(4).toFloat();
            Board_2.Light=server.arg(5).toInt();
            SD2();
        }
            if(sensor_num==3){
            Board3PV_Load();
            Board_3.sensornumber = server.arg(0).toInt();
            Board_3.Time=Stime;
            Board_3.Temperature= server.arg(1).toFloat();
            Board_3.Humidity=server.arg(2).toFloat();
            Board_3.BMP_Temperature=server.arg(3).toFloat();
            Board_3.BMP_Pressure=server.arg(4).toFloat();
            Board_3.Light=server.arg(5).toInt();
            SD3();
        }
            if(sensor_num==4){
            Board4PV_Load();  
            Board_4.sensornumber = server.arg(0).toInt();
            Board_4.Time=Stime;
            Board_4.Temperature= server.arg(1).toFloat();
            Board_4.Humidity=server.arg(2).toFloat();
            Board_4.BMP_Temperature=server.arg(3).toFloat();
            Board_4.BMP_Pressure=server.arg(4).toFloat();
            Board_4.Light=server.arg(5).toInt();
            SD4();
        }
            if(sensor_num==5){
            Board5PV_Load();
            Board_5.sensornumber = server.arg(0).toInt();
            Board_5.Time=Stime;
            Board_5.Temperature= server.arg(1).toFloat();
            Board_5.Humidity=server.arg(2).toFloat();
            Board_5.BMP_Temperature=server.arg(3).toFloat();
            Board_5.BMP_Pressure=server.arg(4).toFloat();
            Board_5.Light=server.arg(5).toInt();
            SD5();
        }
            if(sensor_num==6){
            Board6PV_Load();
            Board_6.sensornumber = server.arg(0).toInt();
            Board_6.Time=Stime;
            Board_6.Temperature= server.arg(1).toFloat();
            Board_6.Humidity=server.arg(2).toFloat();
            Board_6.BMP_Temperature=server.arg(3).toFloat();
            Board_6.BMP_Pressure=server.arg(4).toFloat();
            Board_6.Light=server.arg(5).toInt();
            SD6();
        }
            if(sensor_num==7){
            Board7PV_Load();
            Board_7.sensornumber = server.arg(0).toInt();
            Board_7.Time=Stime;
            Board_7.Temperature= server.arg(1).toFloat();
            Board_7.Humidity=server.arg(2).toFloat();
            Board_7.BMP_Temperature=server.arg(3).toFloat();
            Board_7.BMP_Pressure=server.arg(4).toFloat();
            Board_7.Light=server.arg(5).toInt();
            SD7();
        }
            if(sensor_num==8){
            Board8PV_Load();
            Board_8.sensornumber = server.arg(0).toInt();
            Board_8.Time=Stime;
            Board_8.Temperature= server.arg(1).toFloat();
            Board_8.Humidity=server.arg(2).toFloat();
            Board_8.BMP_Temperature=server.arg(3).toFloat();
            Board_8.BMP_Pressure=server.arg(4).toFloat();
            Board_8.Light=server.arg(5).toInt();
            SD8();
        }
        /*
        Serial.println(sensor_num);
        Serial.println(server.arg(1));
        Serial.println(server.arg(2));
        Serial.println(server.arg(3));
        Serial.println(server.arg(4));
        Serial.println(server.arg(5));
        Serial.println(server.arg(6));
        Serial.println("");
        server.sendContent("");
        server.client().stop();
        
        M5.Lcd.clear();
        M5.Lcd.fillScreen(DARKCYAN);
        M5.Lcd.setTextColor(WHITE);
        M5.Lcd.setCursor(5, 10);
        M5.Lcd.setTextSize(3);
        M5.Lcd.print("Board ");
        M5.Lcd.println(server.arg(0).toInt());

        M5.Lcd.setCursor(150, 10);
        M5.Lcd.print(Stime);
        
        M5.Lcd.setCursor(5, 40);
        M5.Lcd.print(server.arg(1).toFloat());
        M5.Lcd.print(" C");
        M5.Lcd.setCursor(150, 40);
        M5.Lcd.print(server.arg(2).toFloat());
        M5.Lcd.print(" H");

        M5.Lcd.setCursor(5, 70);
        M5.Lcd.print(server.arg(3).toFloat());
        M5.Lcd.print(" C");
        M5.Lcd.setCursor(150, 70);
        M5.Lcd.print(server.arg(4).toFloat());
        M5.Lcd.print(" P");

        M5.Lcd.setCursor(5, 100);
        M5.Lcd.print(server.arg(5).toInt());
        M5.Lcd.print(" L");
        M5.Lcd.setCursor(150, 100);
        //M5.Lcd.print(server.arg(6));

        M5.update();
        */
    }  
}
void Board1PV_Load(){
  if(Board_1PV.sensornumber >=1){
  Board_1PV.sensornumber=Board_1.sensornumber;
  Board_1PV.Time=Board_1.Time;
  Board_1PV.Temperature=Board_1.Temperature;
  Board_1PV.Humidity=Board_1.Humidity;
  Board_1PV.BMP_Temperature=Board_1.BMP_Temperature;
  Board_1PV.BMP_Pressure=Board_1.BMP_Pressure;
  Board_1PV.Light=Board_1.Light;
  SD1_PV();
  }
  else{
    Board_1PV.sensornumber=server.arg(0).toInt();
    Board_1PV.Time=Stime;
    Board_1PV.Temperature=server.arg(1).toFloat();
    Board_1PV.Humidity=server.arg(2).toFloat();
    Board_1PV.BMP_Temperature=server.arg(3).toFloat();
    Board_1PV.BMP_Pressure=server.arg(4).toFloat();
    Board_1PV.Light=server.arg(5).toInt();

    Board_1LOW.sensornumber=server.arg(0).toInt();
    Board_1LOW.Time=Stime;
    Board_1LOW.Temperature=server.arg(1).toFloat();
    Board_1LOW.Humidity=server.arg(2).toFloat();
    Board_1LOW.BMP_Temperature=server.arg(3).toFloat();
    Board_1LOW.BMP_Pressure=server.arg(4).toFloat();
    Board_1LOW.Light=server.arg(5).toInt();

    Board_1HIGH.sensornumber=server.arg(0).toInt();
    Board_1HIGH.Time=Stime;
    Board_1HIGH.Temperature=server.arg(1).toFloat();
    Board_1HIGH.Humidity=server.arg(2).toFloat();
    Board_1HIGH.BMP_Temperature=server.arg(3).toFloat();
    Board_1HIGH.BMP_Pressure=server.arg(4).toFloat();
    Board_1HIGH.Light=server.arg(5).toInt();
  }
  //#######
  if(Board_1LOW.Temperature >= server.arg(1).toFloat()){
      Board_1LOW.Temperature=server.arg(1).toFloat();
      SD1LOW=true;
  }
  if(Board_1LOW.Humidity >= server.arg(2).toFloat()){
      Board_1LOW.Humidity = server.arg(2).toFloat();
      SD1LOW=true;
  }
  if(Board_1LOW.BMP_Temperature >= server.arg(3).toFloat()){
      Board_1LOW.BMP_Temperature = server.arg(3).toFloat();
      SD1LOW=true;
  }
  if(Board_1LOW.BMP_Pressure >= server.arg(4).toFloat()){
      Board_1LOW.BMP_Pressure = server.arg(4).toFloat();
      SD1LOW=true;
  }
  if(Board_1LOW.Light >= server.arg(5).toInt()){
      Board_1LOW.Light = server.arg(5).toInt();
      SD1LOW=true;
  }
  if (SD1LOW==true){
      SD1LOW=false;
      SD1_LOW();
  }
  //#########
    if(Board_1HIGH.Temperature <= server.arg(1).toFloat()){
      Board_1HIGH.Temperature=server.arg(1).toFloat();
      SD1HIGH=true;
  }
  if(Board_1HIGH.Humidity <= server.arg(2).toFloat()){
      Board_1HIGH.Humidity = server.arg(2).toFloat();
      SD1HIGH=true;
  }
  if(Board_1HIGH.BMP_Temperature <= server.arg(3).toFloat()){
      Board_1HIGH.BMP_Temperature = server.arg(3).toFloat();
      SD1HIGH=true;
  }
  if(Board_1HIGH.BMP_Pressure <= server.arg(4).toFloat()){
      Board_1HIGH.BMP_Pressure = server.arg(4).toFloat();
      SD1HIGH=true;
  }
  if(Board_1HIGH.Light <= server.arg(5).toInt()){
      Board_1HIGH.Light = server.arg(5).toInt();
      SD1HIGH=true;
  }
  if (SD1HIGH==true){
    SD1HIGH=false;
    SD1_HIGH();
  }
}
//########
void Board2PV_Load(){
  if(Board_2PV.sensornumber >=1){
  Board_2PV.sensornumber=Board_2.sensornumber;
  Board_2PV.Time =Board_2.Time;
  Board_2PV.Temperature=Board_2.Temperature;
  Board_2PV.Humidity=Board_2.Humidity;
  Board_2PV.BMP_Temperature=Board_2.BMP_Temperature;
  Board_2PV.BMP_Pressure=Board_2.BMP_Pressure;
  Board_2PV.Light=Board_2.Light;
  SD2_PV();
  }
  else{
    Board_2PV.sensornumber=server.arg(0).toInt();
    Board_2PV.Time=Stime;
    Board_2PV.Temperature=server.arg(1).toFloat();
    Board_2PV.Humidity=server.arg(2).toFloat();
    Board_2PV.BMP_Temperature=server.arg(3).toFloat();
    Board_2PV.BMP_Pressure=server.arg(4).toFloat();
    Board_2PV.Light=server.arg(5).toInt();
    
    Board_2LOW.sensornumber=server.arg(0).toInt();
    Board_2LOW.Time=Stime;
    Board_2LOW.Temperature=server.arg(1).toFloat();
    Board_2LOW.Humidity=server.arg(2).toFloat();
    Board_2LOW.BMP_Temperature=server.arg(3).toFloat();
    Board_2LOW.BMP_Pressure=server.arg(4).toFloat();
    Board_2LOW.Light=server.arg(5).toInt();

    Board_2HIGH.sensornumber=server.arg(0).toInt();
    Board_2HIGH.Time=Stime;
    Board_2HIGH.Temperature=server.arg(1).toFloat();
    Board_2HIGH.Humidity=server.arg(2).toFloat();
    Board_2HIGH.BMP_Temperature=server.arg(3).toFloat();
    Board_2HIGH.BMP_Pressure=server.arg(4).toFloat();
    Board_2HIGH.Light=server.arg(5).toInt();
  }
  //#######
  if(Board_2LOW.Temperature >= server.arg(1).toFloat()){
      Board_2LOW.Temperature=server.arg(1).toFloat();
      SD2LOW=true;
  }
  if(Board_2LOW.Humidity >= server.arg(2).toFloat()){
      Board_2LOW.Humidity = server.arg(2).toFloat();
      SD2LOW=true;
  }
  if(Board_2LOW.BMP_Temperature >= server.arg(3).toFloat()){
      Board_2LOW.BMP_Temperature = server.arg(3).toFloat();
      SD2LOW=true;
  }
  if(Board_2LOW.BMP_Pressure >= server.arg(4).toFloat()){
      Board_2LOW.BMP_Pressure = server.arg(4).toFloat();
      SD2LOW=true;
  }
  if(Board_2LOW.Light >= server.arg(5).toInt()){
      Board_2LOW.Light = server.arg(5).toInt();
      SD2LOW=true;
  }
  //#########
    if(Board_2HIGH.Temperature <= server.arg(1).toFloat()){
      Board_2HIGH.Temperature=server.arg(1).toFloat();
      SD2HIGH=true;
  }
  if(Board_2HIGH.Humidity <= server.arg(2).toFloat()){
      Board_2HIGH.Humidity = server.arg(2).toFloat();
      SD2HIGH=true;
  }
  if(Board_2HIGH.BMP_Temperature <= server.arg(3).toFloat()){
      Board_2HIGH.BMP_Temperature = server.arg(3).toFloat();
      SD2HIGH=true;
  }
  if(Board_2HIGH.BMP_Pressure <= server.arg(4).toFloat()){
      Board_2HIGH.BMP_Pressure = server.arg(4).toFloat();
      SD2HIGH=true;
  }
  if(Board_2HIGH.Light <= server.arg(5).toInt()){
      Board_2HIGH.Light = server.arg(5).toInt();
      SD2HIGH=true;
  }

    if (SD2LOW==true){
        SD2LOW=false;
        SD2_LOW();
    }
    if (SD2HIGH==true){
        SD2HIGH=false;
        SD2_HIGH();
    }
}
//########
void Board3PV_Load(){
  if(Board_3PV.sensornumber >=1){
  Board_3PV.sensornumber=Board_3.sensornumber;
  Board_3PV.Time =Board_3.Time;
  Board_3PV.Temperature=Board_3.Temperature;
  Board_3PV.Humidity=Board_3.Humidity;
  Board_3PV.BMP_Temperature=Board_3.BMP_Temperature;
  Board_3PV.BMP_Pressure=Board_3.BMP_Pressure;
  Board_3PV.Light=Board_3.Light;
  SD3_PV();
  }
  else{
    Board_3PV.sensornumber=server.arg(0).toInt();
    Board_3PV.Time=Stime;
    Board_3PV.Temperature=server.arg(1).toFloat();
    Board_3PV.Humidity=server.arg(2).toFloat();
    Board_3PV.BMP_Temperature=server.arg(3).toFloat();
    Board_3PV.BMP_Pressure=server.arg(4).toFloat();
    Board_3PV.Light=server.arg(5).toInt();
  
    Board_3LOW.sensornumber=server.arg(0).toInt();
    Board_3LOW.Time=Stime;
    Board_3LOW.Temperature=server.arg(1).toFloat();
    Board_3LOW.Humidity=server.arg(2).toFloat();
    Board_3LOW.BMP_Temperature=server.arg(3).toFloat();
    Board_3LOW.BMP_Pressure=server.arg(4).toFloat();
    Board_3LOW.Light=server.arg(5).toInt();

    Board_3HIGH.sensornumber=server.arg(0).toInt();
    Board_3HIGH.Time=Stime;
    Board_3HIGH.Temperature=server.arg(1).toFloat();
    Board_3HIGH.Humidity=server.arg(2).toFloat();
    Board_3HIGH.BMP_Temperature=server.arg(3).toFloat();
    Board_3HIGH.BMP_Pressure=server.arg(4).toFloat();
    Board_3HIGH.Light=server.arg(5).toInt();
  }
  //#######
  if(Board_3LOW.Temperature >= server.arg(1).toFloat()){
      Board_3LOW.Temperature=server.arg(1).toFloat();
       SD3LOW=true;
  }
  if(Board_3LOW.Humidity >= server.arg(2).toFloat()){
      Board_3LOW.Humidity = server.arg(2).toFloat();
       SD3LOW=true;
  }
  if(Board_3LOW.BMP_Temperature >= server.arg(3).toFloat()){
      Board_3LOW.BMP_Temperature = server.arg(3).toFloat();
       SD3LOW=true;
  }
  if(Board_3LOW.BMP_Pressure >= server.arg(4).toFloat()){
      Board_3LOW.BMP_Pressure = server.arg(4).toFloat();
       SD3LOW=true;
  }
  if(Board_3LOW.Light >= server.arg(5).toInt()){
      Board_3LOW.Light = server.arg(5).toInt();
       SD3LOW=true;
  }
  //#########
    if(Board_3HIGH.Temperature <= server.arg(1).toFloat()){
      Board_3HIGH.Temperature=server.arg(1).toFloat();
      SD3HIGH=true;
  }
  if(Board_3HIGH.Humidity <= server.arg(2).toFloat()){
      Board_3HIGH.Humidity = server.arg(2).toFloat();
      SD3HIGH=true;
  }
  if(Board_3HIGH.BMP_Temperature <= server.arg(3).toFloat()){
      Board_3HIGH.BMP_Temperature = server.arg(3).toFloat();
      SD3HIGH=true;
  }
  if(Board_3HIGH.BMP_Pressure <= server.arg(4).toFloat()){
      Board_3HIGH.BMP_Pressure = server.arg(4).toFloat();
      SD3HIGH=true;
  }
  if(Board_3HIGH.Light <= server.arg(5).toInt()){
      Board_3HIGH.Light = server.arg(5).toInt();
      SD3HIGH=true;
  }

    if (SD3LOW==true){
        SD3LOW=false;
        SD3_LOW();
    }
    if (SD3HIGH==true){
        SD3HIGH=false;
        SD3_HIGH();
    }
}
//########
void Board4PV_Load(){
  if(Board_4PV.sensornumber >=1){
  Board_4PV.sensornumber=Board_4.sensornumber;
  Board_4PV.Time =Board_4.Time;
  Board_4PV.Temperature=Board_4.Temperature;
  Board_4PV.Humidity=Board_4.Humidity;
  Board_4PV.BMP_Temperature=Board_4.BMP_Temperature;
  Board_4PV.BMP_Pressure=Board_4.BMP_Pressure;
  Board_4PV.Light=Board_4.Light;
  SD4_PV();
  }
  else{
    Board_4PV.sensornumber=server.arg(0).toInt();
    Board_4PV.Time=Stime;
    Board_4PV.Temperature=server.arg(1).toFloat();
    Board_4PV.Humidity=server.arg(2).toFloat();
    Board_4PV.BMP_Temperature=server.arg(3).toFloat();
    Board_4PV.BMP_Pressure=server.arg(4).toFloat();
    Board_4PV.Light=server.arg(5).toInt();

    Board_4LOW.sensornumber=server.arg(0).toInt();
    Board_4LOW.Time=Stime;
    Board_4LOW.Temperature=server.arg(1).toFloat();
    Board_4LOW.Humidity=server.arg(2).toFloat();
    Board_4LOW.BMP_Temperature=server.arg(3).toFloat();
    Board_4LOW.BMP_Pressure=server.arg(4).toFloat();
    Board_4LOW.Light=server.arg(5).toInt();

    Board_4HIGH.sensornumber=server.arg(0).toInt();
    Board_4HIGH.Time=Stime;
    Board_4HIGH.Temperature=server.arg(1).toFloat();
    Board_4HIGH.Humidity=server.arg(2).toFloat();
    Board_4HIGH.BMP_Temperature=server.arg(3).toFloat();
    Board_4HIGH.BMP_Pressure=server.arg(4).toFloat();
    Board_4HIGH.Light=server.arg(5).toInt();
  }
  //#######
  if(Board_4LOW.Temperature >= server.arg(1).toFloat()){
      Board_4LOW.Temperature=server.arg(1).toFloat();
      SD4LOW=true;
  }
  if(Board_4LOW.Humidity >= server.arg(2).toFloat()){
      Board_4LOW.Humidity = server.arg(2).toFloat();
      SD4LOW=true;
  }
  if(Board_4LOW.BMP_Temperature >= server.arg(3).toFloat()){
      Board_4LOW.BMP_Temperature = server.arg(3).toFloat();
      SD4LOW=true;
  }
  if(Board_4LOW.BMP_Pressure >= server.arg(4).toFloat()){
      Board_4LOW.BMP_Pressure = server.arg(4).toFloat();
      SD4LOW=true;
  }
  if(Board_4LOW.Light >= server.arg(5).toInt()){
      Board_4LOW.Light = server.arg(5).toInt();
      SD4LOW=true;
  }
  //#########
    if(Board_4HIGH.Temperature <= server.arg(1).toFloat()){
      Board_4HIGH.Temperature=server.arg(1).toFloat();
      SD4HIGH=true;
  }
  if(Board_4HIGH.Humidity <= server.arg(2).toFloat()){
      Board_4HIGH.Humidity = server.arg(2).toFloat();
      SD4HIGH=true;
  }
  if(Board_4HIGH.BMP_Temperature <= server.arg(3).toFloat()){
      Board_4HIGH.BMP_Temperature = server.arg(3).toFloat();
      SD4HIGH=true;
  }
  if(Board_4HIGH.BMP_Pressure <= server.arg(4).toFloat()){
      Board_4HIGH.BMP_Pressure = server.arg(4).toFloat();
      SD4HIGH=true;
  }
  if(Board_4HIGH.Light <= server.arg(5).toInt()){
      Board_4HIGH.Light = server.arg(5).toInt();
      SD4HIGH=true;
  }

    if (SD4LOW==true){
        SD4LOW=false;
        SD4_LOW();
    }
    if (SD4HIGH==true){
        SD4HIGH=false;
        SD4_HIGH();
    }
}
//########
void Board5PV_Load(){
  if(Board_5PV.sensornumber >=1){
  Board_5PV.sensornumber=Board_5.sensornumber;
  Board_5PV.Time =Board_5.Time;
  Board_5PV.Temperature=Board_5.Temperature;
  Board_5PV.Humidity=Board_5.Humidity;
  Board_5PV.BMP_Temperature=Board_5.BMP_Temperature;
  Board_5PV.BMP_Pressure=Board_5.BMP_Pressure;
  Board_5PV.Light=Board_5.Light;
  SD5_PV();
  }
  else{
    Board_5PV.sensornumber=server.arg(0).toInt();
    Board_5PV.Time=Stime;
    Board_5PV.Temperature=server.arg(1).toFloat();
    Board_5PV.Humidity=server.arg(2).toFloat();
    Board_5PV.BMP_Temperature=server.arg(3).toFloat();
    Board_5PV.BMP_Pressure=server.arg(4).toFloat();
    Board_5PV.Light=server.arg(5).toInt();

    Board_5LOW.sensornumber=server.arg(0).toInt();
    Board_5LOW.Time=Stime;
    Board_5LOW.Temperature=server.arg(1).toFloat();
    Board_5LOW.Humidity=server.arg(2).toFloat();
    Board_5LOW.BMP_Temperature=server.arg(3).toFloat();
    Board_5LOW.BMP_Pressure=server.arg(4).toFloat();
    Board_5LOW.Light=server.arg(5).toInt();

    Board_5HIGH.sensornumber=server.arg(0).toInt();
    Board_5HIGH.Time=Stime;
    Board_5HIGH.Temperature=server.arg(1).toFloat();
    Board_5HIGH.Humidity=server.arg(2).toFloat();
    Board_5HIGH.BMP_Temperature=server.arg(3).toFloat();
    Board_5HIGH.BMP_Pressure=server.arg(4).toFloat();
    Board_5HIGH.Light=server.arg(5).toInt();
  }
  //#######
  if(Board_5LOW.Temperature >= server.arg(1).toFloat()){
      Board_5LOW.Temperature=server.arg(1).toFloat();
      SD5LOW=true;
  }
  if(Board_5LOW.Humidity >= server.arg(2).toFloat()){
      Board_5LOW.Humidity = server.arg(2).toFloat();
      SD5LOW=true;
  }
  if(Board_5LOW.BMP_Temperature >= server.arg(3).toFloat()){
      Board_5LOW.BMP_Temperature = server.arg(3).toFloat();
      SD5LOW=true;
  }
  if(Board_5LOW.BMP_Pressure >= server.arg(4).toFloat()){
      Board_5LOW.BMP_Pressure = server.arg(4).toFloat();
      SD5LOW=true;
  }
  if(Board_5LOW.Light >= server.arg(5).toInt()){
      Board_5LOW.Light = server.arg(5).toInt();
      SD5LOW=true;
  }
  //#########
    if(Board_5HIGH.Temperature <= server.arg(1).toFloat()){
      Board_5HIGH.Temperature=server.arg(1).toFloat();
      SD5HIGH=true;
  }
  if(Board_5HIGH.Humidity <= server.arg(2).toFloat()){
      Board_5HIGH.Humidity = server.arg(2).toFloat();
      SD5HIGH=true;
  }
  if(Board_5HIGH.BMP_Temperature <= server.arg(3).toFloat()){
      Board_5HIGH.BMP_Temperature = server.arg(3).toFloat();
      SD5HIGH=true;
  }
  if(Board_5HIGH.BMP_Pressure <= server.arg(4).toFloat()){
      Board_5HIGH.BMP_Pressure = server.arg(4).toFloat();
      SD5HIGH=true;
  }
  if(Board_5HIGH.Light <= server.arg(5).toInt()){
      Board_5HIGH.Light = server.arg(5).toInt();
      SD5HIGH=true;
  }

    if (SD5LOW==true){
        SD5LOW=false;
        SD5_LOW();
    }
    if (SD5HIGH==true){
        SD5HIGH=false;
        SD5_HIGH();
    }
}
//########
void Board6PV_Load(){
  if(Board_6PV.sensornumber >=1){
  Board_6PV.sensornumber=Board_6.sensornumber;
  Board_6PV.Time =Board_6.Time;
  Board_6PV.Temperature=Board_6.Temperature;
  Board_6PV.Humidity=Board_6.Humidity;
  Board_6PV.BMP_Temperature=Board_6.BMP_Temperature;
  Board_6PV.BMP_Pressure=Board_6.BMP_Pressure;
  Board_6PV.Light=Board_6.Light;
  SD6_PV();
  }
  else{
    Board_6PV.sensornumber=server.arg(0).toInt();
    Board_6PV.Time=Stime;
    Board_6PV.Temperature=server.arg(1).toFloat();
    Board_6PV.Humidity=server.arg(2).toFloat();
    Board_6PV.BMP_Temperature=server.arg(3).toFloat();
    Board_6PV.BMP_Pressure=server.arg(4).toFloat();
    Board_6PV.Light=server.arg(5).toInt();

    Board_6LOW.sensornumber=server.arg(0).toInt();
    Board_6LOW.Time=Stime;
    Board_6LOW.Temperature=server.arg(1).toFloat();
    Board_6LOW.Humidity=server.arg(2).toFloat();
    Board_6LOW.BMP_Temperature=server.arg(3).toFloat();
    Board_6LOW.BMP_Pressure=server.arg(4).toFloat();
    Board_6LOW.Light=server.arg(5).toInt();

    Board_6HIGH.sensornumber=server.arg(0).toInt();
    Board_6HIGH.Time=Stime;
    Board_6HIGH.Temperature=server.arg(1).toFloat();
    Board_6HIGH.Humidity=server.arg(2).toFloat();
    Board_6HIGH.BMP_Temperature=server.arg(3).toFloat();
    Board_6HIGH.BMP_Pressure=server.arg(4).toFloat();
    Board_6HIGH.Light=server.arg(5).toInt();
  }
  //#######
  if(Board_6LOW.Temperature >= server.arg(1).toFloat()){
      Board_6LOW.Temperature=server.arg(1).toFloat();
      SD6LOW=true;
  }
  if(Board_6LOW.Humidity >= server.arg(2).toFloat()){
      Board_6LOW.Humidity = server.arg(2).toFloat();
      SD6LOW=true;
  }
  if(Board_6LOW.BMP_Temperature >= server.arg(3).toFloat()){
      Board_6LOW.BMP_Temperature = server.arg(3).toFloat();
      SD6LOW=true;
  }
  if(Board_6LOW.BMP_Pressure >= server.arg(4).toFloat()){
      Board_6LOW.BMP_Pressure = server.arg(4).toFloat();
      SD6LOW=true;
  }
  if(Board_6LOW.Light >= server.arg(5).toInt()){
      Board_6LOW.Light = server.arg(5).toInt();
      SD6LOW=true;
  }
  //#########
    if(Board_6HIGH.Temperature <= server.arg(1).toFloat()){
      Board_6HIGH.Temperature=server.arg(1).toFloat();
      SD6HIGH=true;
  }
  if(Board_6HIGH.Humidity <= server.arg(2).toFloat()){
      Board_6HIGH.Humidity = server.arg(2).toFloat();
      SD6HIGH=true;
  }
  if(Board_6HIGH.BMP_Temperature <= server.arg(3).toFloat()){
      Board_6HIGH.BMP_Temperature = server.arg(3).toFloat();
      SD6HIGH=true;
  }
  if(Board_6HIGH.BMP_Pressure <= server.arg(4).toFloat()){
      Board_6HIGH.BMP_Pressure = server.arg(4).toFloat();
      SD6HIGH=true;
  }
  if(Board_6HIGH.Light <= server.arg(5).toInt()){
      Board_6HIGH.Light = server.arg(5).toInt();
      SD6HIGH=true;
  }

    if (SD6LOW==true){
        SD6LOW=false;
        SD6_LOW();
    }
    if (SD6HIGH==true){
        SD6HIGH=false;
        SD6_HIGH();
    }
}
//########
void Board7PV_Load(){
  if(Board_7PV.sensornumber >=1){
  Board_7PV.sensornumber=Board_7.sensornumber;
  Board_7PV.Time =Board_7.Time;
  Board_7PV.Temperature=Board_7.Temperature;
  Board_7PV.Humidity=Board_7.Humidity;
  Board_7PV.BMP_Temperature=Board_7.BMP_Temperature;
  Board_7PV.BMP_Pressure=Board_7.BMP_Pressure;
  Board_7PV.Light=Board_7.Light;
  SD7_PV();
  }
  else{
    Board_7PV.sensornumber=server.arg(0).toInt();
    Board_7PV.Time=Stime;
    Board_7PV.Temperature=server.arg(1).toFloat();
    Board_7PV.Humidity=server.arg(2).toFloat();
    Board_7PV.BMP_Temperature=server.arg(3).toFloat();
    Board_7PV.BMP_Pressure=server.arg(4).toFloat();
    Board_7PV.Light=server.arg(5).toInt();

    Board_7LOW.sensornumber=server.arg(0).toInt();
    Board_7LOW.Time=Stime;
    Board_7LOW.Temperature=server.arg(1).toFloat();
    Board_7LOW.Humidity=server.arg(2).toFloat();
    Board_7LOW.BMP_Temperature=server.arg(3).toFloat();
    Board_7LOW.BMP_Pressure=server.arg(4).toFloat();
    Board_7LOW.Light=server.arg(5).toInt();

    Board_7HIGH.sensornumber=server.arg(0).toInt();
    Board_7HIGH.Time=Stime;
    Board_7HIGH.Temperature=server.arg(1).toFloat();
    Board_7HIGH.Humidity=server.arg(2).toFloat();
    Board_7HIGH.BMP_Temperature=server.arg(3).toFloat();
    Board_7HIGH.BMP_Pressure=server.arg(4).toFloat();
    Board_7HIGH.Light=server.arg(5).toInt();
  }
  //#######
  if(Board_7LOW.Temperature >= server.arg(1).toFloat()){
      Board_7LOW.Temperature=server.arg(1).toFloat();
      SD7LOW=true;
  }
  if(Board_7LOW.Humidity >= server.arg(2).toFloat()){
      Board_7LOW.Humidity = server.arg(2).toFloat();
      SD7LOW=true;
  }
  if(Board_7LOW.BMP_Temperature >= server.arg(3).toFloat()){
      Board_7LOW.BMP_Temperature = server.arg(3).toFloat();
      SD7LOW=true;
  }
  if(Board_7LOW.BMP_Pressure >= server.arg(4).toFloat()){
      Board_7LOW.BMP_Pressure = server.arg(4).toFloat();
      SD7LOW=true;
  }
  if(Board_7LOW.Light >= server.arg(5).toInt()){
      Board_7LOW.Light = server.arg(5).toInt();
      SD7LOW=true;
  }
  //#########
    if(Board_7HIGH.Temperature <= server.arg(1).toFloat()){
      Board_7HIGH.Temperature=server.arg(1).toFloat();
      SD7HIGH=true;
  }
  if(Board_7HIGH.Humidity <= server.arg(2).toFloat()){
      Board_7HIGH.Humidity = server.arg(2).toFloat();
      SD7HIGH=true;
  }
  if(Board_7HIGH.BMP_Temperature <= server.arg(3).toFloat()){
      Board_7HIGH.BMP_Temperature = server.arg(3).toFloat();
      SD7HIGH=true;
  }
  if(Board_7HIGH.BMP_Pressure <= server.arg(4).toFloat()){
      Board_7HIGH.BMP_Pressure = server.arg(4).toFloat();
      SD7HIGH=true;
  }
  if(Board_7HIGH.Light <= server.arg(5).toInt()){
      Board_7HIGH.Light = server.arg(5).toInt();
      SD7HIGH=true;
  }

    if (SD7LOW==true){
        SD7LOW=false;
        SD7_LOW();
    }
    if (SD7HIGH==true){
        SD7HIGH=false;
        SD7_HIGH();
    }
}

//########
void Board8PV_Load(){
  if(Board_8PV.sensornumber >=1){
  Board_8PV.sensornumber=Board_8.sensornumber;
  Board_8PV.Time =Board_8.Time;
  Board_8PV.Temperature=Board_8.Temperature;
  Board_8PV.Humidity=Board_8.Humidity;
  Board_8PV.BMP_Temperature=Board_8.BMP_Temperature;
  Board_8PV.BMP_Pressure=Board_8.BMP_Pressure;
  Board_8PV.Light=Board_8.Light;
  SD8_PV();
  }
  else{
    Board_8PV.sensornumber=server.arg(0).toInt();
    Board_8PV.Time=Stime;
    Board_8PV.Temperature=server.arg(1).toFloat();
    Board_8PV.Humidity=server.arg(2).toFloat();
    Board_8PV.BMP_Temperature=server.arg(3).toFloat();
    Board_8PV.BMP_Pressure=server.arg(4).toFloat();
    Board_8PV.Light=server.arg(5).toInt();
    
    Board_8LOW.sensornumber=server.arg(0).toInt();
    Board_8LOW.Time=Stime;
    Board_8LOW.Temperature=server.arg(1).toFloat();
    Board_8LOW.Humidity=server.arg(2).toFloat();
    Board_8LOW.BMP_Temperature=server.arg(3).toFloat();
    Board_8LOW.BMP_Pressure=server.arg(4).toFloat();
    Board_8LOW.Light=server.arg(5).toInt();

    Board_8HIGH.sensornumber=server.arg(0).toInt();
    Board_8HIGH.Time=Stime;
    Board_8HIGH.Temperature=server.arg(1).toFloat();
    Board_8HIGH.Humidity=server.arg(2).toFloat();
    Board_8HIGH.BMP_Temperature=server.arg(3).toFloat();
    Board_8HIGH.BMP_Pressure=server.arg(4).toFloat();
    Board_8HIGH.Light=server.arg(5).toInt();
  }
  //#######
  if(Board_8LOW.Temperature >= server.arg(1).toFloat()){
      Board_8LOW.Temperature=server.arg(1).toFloat();
      SD8LOW=true;
  }
  if(Board_8LOW.Humidity >= server.arg(2).toFloat()){
      Board_8LOW.Humidity = server.arg(2).toFloat();
      SD8LOW=true;
  }
  if(Board_8LOW.BMP_Temperature >= server.arg(3).toFloat()){
      Board_8LOW.BMP_Temperature = server.arg(3).toFloat();
      SD8LOW=true;
  }
  if(Board_8LOW.BMP_Pressure >= server.arg(4).toFloat()){
      Board_8LOW.BMP_Pressure = server.arg(4).toFloat();
      SD8LOW=true;
  }
  if(Board_8LOW.Light >= server.arg(5).toInt()){
      Board_8LOW.Light = server.arg(5).toInt();
      SD8LOW=true;
  }
  //#########
    if(Board_8HIGH.Temperature <= server.arg(1).toFloat()){
      Board_8HIGH.Temperature=server.arg(1).toFloat();
      SD8HIGH=true;
  }
  if(Board_8HIGH.Humidity <= server.arg(2).toFloat()){
      Board_8HIGH.Humidity = server.arg(2).toFloat();
      SD8HIGH=true;
  }
  if(Board_8HIGH.BMP_Temperature <= server.arg(3).toFloat()){
      Board_8HIGH.BMP_Temperature = server.arg(3).toFloat();
      SD8HIGH=true;
  }
  if(Board_8HIGH.BMP_Pressure <= server.arg(4).toFloat()){
      Board_8HIGH.BMP_Pressure = server.arg(4).toFloat();
      SD8HIGH=true;
  }
  if(Board_8HIGH.Light <= server.arg(5).toInt()){
      Board_8HIGH.Light = server.arg(5).toInt();
      SD8HIGH=true;
  }

    if (SD8LOW==true){
        SD8LOW=false;
        SD8_LOW();
    }
    if (SD8HIGH==true){
        SD8HIGH=false;
        SD8_HIGH();
    }
}

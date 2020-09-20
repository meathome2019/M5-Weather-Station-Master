#ifndef Main_H
    #define Main_H
    #include "Arduino.h"
    #include <M5Stack.h>
    #include "WiFi_Setup.h"
    #include "OTA.h"
    #include "TimeSetup.h"
    #include "Web_Page.h"
    
    void HandleSensors();
    void Pin16_Flip();
    void Pin17_Flip();
    void SD_Setup();
    void watchdog();

    void M5_Room_Display();
    void M5_Room_Display1();
    
    void MK_dir();
    void SD1();
    void SD2();
    void SD3();
    void SD4();
    void SD5();
    void SD6();
    void SD7();
    void SD8();
    
    void SD1_PV();
    void SD2_PV();
    void SD3_PV();
    void SD4_PV();
    void SD5_PV();
    void SD6_PV();
    void SD7_PV();
    void SD8_PV();

    void SD1_LOW();
    void SD2_LOW();
    void SD3_LOW();
    void SD4_LOW();
    void SD5_LOW();
    void SD6_LOW();
    void SD7_LOW();
    void SD8_LOW();
    
    void SD1_HIGH();
    void SD2_HIGH();
    void SD3_HIGH();
    void SD4_HIGH();
    void SD5_HIGH();
    void SD6_HIGH();
    void SD7_HIGH();
    void SD8_HIGH();
    

    void SD1_R();
    void SD1_PV_R();
    void SD1_LOW_R();
    void SD1_HIGH_R();

    void SD2_R();
    void SD2_PV_R();
    void SD2_LOW_R();
    void SD2_HIGH_R();
    
    void SD3_R();
    void SD3_PV_R();
    void SD3_LOW_R();
    void SD3_HIGH_R();
    
    void SD4_R();
    void SD4_PV_R();
    void SD4_LOW_R();
    void SD4_HIGH_R();
        
    void SD5_R();    
    void SD5_PV_R();
    void SD5_LOW_R();
    void SD5_HIGH_R();

    void SD6_R();    
    void SD6_PV_R();
    void SD6_LOW_R();
    void SD6_HIGH_R();

    void SD7_R();
    void SD7_PV_R();
    void SD7_LOW_R();
    void SD7_HIGH_R();

    void SD8_R();
    void SD8_PV_R();
    void SD8_LOW_R();
    void SD8_HIGH_R();

    void SD_Check();

    extern File myFile;

    extern String Room_name;

    #endif
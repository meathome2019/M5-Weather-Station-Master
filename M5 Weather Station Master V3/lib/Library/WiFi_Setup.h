#ifndef Wifi_Setup_H
    #define Wifi_Setup_H

    #include <Arduino.h>
    #include <WiFi.h>      // Built-in
    //#include <WiFiMulti.h> // Built-in
    #include "WebServer.h"
    //#include <WiFiMulti.h> // Built-in
    #include <ArduinoOTA.h>
    
    #include "Main.h"



    extern WebServer server;
    //extern WiFiServer server(80);
    extern WiFiClient client;

    extern IPAddress ip;
    extern IPAddress gateway;    // Set your network Gateway usually your Router base address
    extern IPAddress subnet; 
    extern IPAddress dns;           // Set your network DNS usually your Router base address

    extern String webpage;
    extern String UploadData;

    extern int  lightpin;
    extern int lightv;
    extern int sensor_num;

    void WiFi_ON();
    void WiFi_OFF();
    void WiFi_Bounce();
    void CollectUploadData();
    void SendHttpPOST();
    void Web_Listen();
    void WebPage();
    void WiFi_Check();
    void SD_HIGH_Delete();
    void SD_LOW_Delete();
    void SD_PV_Delete();
    void SD_ALL_Delete();
    void SD_ALLD_Delete();

    void Heating_On();

    //void HandleSensors();

    #endif
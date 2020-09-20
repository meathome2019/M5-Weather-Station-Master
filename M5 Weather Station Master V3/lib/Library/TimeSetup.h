#ifndef TimeSetup_H
    #define TimeSetup_H

    #include <Arduino.h>
    

    extern int BST_Offset;        //Add 3600 for BST time
    extern String Stime;
    extern String Timet;

    extern int Sec;
    extern RTC_DATA_ATTR int Min;
    extern RTC_DATA_ATTR int Hour;
    extern RTC_DATA_ATTR int Day; 
    
    extern int TDay;
    extern int16_t THour;
    extern int16_t TMin;
    extern int16_t TSec;
    extern int Time_Count;
    extern int Time_Add;
    

    void CallTime();
    void Run_Time();
    void Setup_Time();
    void Time_Clock_Display();
    void homepage_uptime();
    void M5_Display1_Enab();
    #endif

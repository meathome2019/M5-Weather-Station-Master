#ifndef Web_Page_H
    #define Web_Page_H

    #include <Arduino.h>
    #include "Main.h"

    #define sitewidth  1024
    void SendHTML_Content();
    void Site_Navbar();
    void homepagePL();
    void SendHTML_Stop();
    void homepage();
    
    void ALL_Page();
    void ALL();
    void Page_Display1();
    void Page_Display2();
    void Page_Display3();
    void Page_Display4();
    void Page_Display5();
    void Page_Display6();
    void Page_Display7();
    void Page_Display8();
    void homepage_small();
    void homepage_tiny();
    void homepage_update();
    void Site_Navbar1(); 

    void Get_Page1();
    void Get_Page2();
    void Get_Page3();
    void Get_Page4();
    void Get_Page5();
    void Get_Page6();
    void Get_Page7();
    void Get_Page8();
    void Page_Display1();
    void Page_Display2();
    void Page_Display3();
    void Page_Display4();
    void Page_Display5();
    void Page_Display6();
    void Page_Display7();
    void Page_Display8();

    void Board1PV_Load();
    void Board2PV_Load();
    void Board3PV_Load();
    void Board4PV_Load();
    void Board5PV_Load();
    void Board6PV_Load();
    void Board7PV_Load();
    void Board8PV_Load();



    extern String ServerVersion;
    extern String siteheading;         // Site's Main Title
    extern String subheading;      // Sub-heading for all pages
    extern String sitetitle;         // Appears on the tabe of a Web Browser
    extern String yourfootnote;       // A foot note e.g. "My Web Site"
    extern String siteversion;                 // Version of your Website
    extern String  theme;
    extern String webpage;

    //extern String Room_name;

  typedef struct Board1 { 
        byte   sensornumber;        // Sensor number provided by e.g. Sensor=3
        String Time;                //Time
        float  Temperature;         // DHT Temperature
        float  Humidity;            // DHT Humidity
        float  BMP_Temperature;     // BMP Temperature
        float  BMP_Pressure;        // Bmp Pressure
        int Light;                  // Light 
    } Board1;

    typedef struct Board2 { 
        byte   sensornumber;        // Sensor number provided by e.g. Sensor=3
        String Time;                //Time
        float  Temperature;         // DHT Temperature
        float  Humidity;            // DHT Humidity
        float  BMP_Temperature;     // BMP Temperature
        float  BMP_Pressure;        // Bmp Pressure
        int Light;                  // Light 
    } Board2;

    typedef struct Board3 { 
        byte   sensornumber;        // Sensor number provided by e.g. Sensor=3
        String Time;                //Time
        float  Temperature;         // DHT Temperature
        float  Humidity;            // DHT Humidity
        float  BMP_Temperature;     // BMP Temperature
        float  BMP_Pressure;        // Bmp Pressure
        int Light;                  // Light 
    } Board3;
    
    typedef struct Board4 { 
        byte   sensornumber;        // Sensor number provided by e.g. Sensor=3
        String Time;                //Time
        float  Temperature;         // DHT Temperature
        float  Humidity;            // DHT Humidity
        float  BMP_Temperature;     // BMP Temperature
        float  BMP_Pressure;        // Bmp Pressure
        int Light;                  // Light 
    } Board4;
    
    typedef struct Board5 { 
        byte   sensornumber;        // Sensor number provided by e.g. Sensor=3
        String Time;                //Time
        float  Temperature;         // DHT Temperature
        float  Humidity;            // DHT Humidity
        float  BMP_Temperature;     // BMP Temperature
        float  BMP_Pressure;        // Bmp Pressure
        int Light;                  // Light 
    } Board5;
    
    typedef struct Board6 { 
        byte   sensornumber;        // Sensor number provided by e.g. Sensor=3
        String Time;                //Time
        float  Temperature;         // DHT Temperature
        float  Humidity;            // DHT Humidity
        float  BMP_Temperature;     // BMP Temperature
        float  BMP_Pressure;        // Bmp Pressure
        int Light;                  // Light 
    } Board6;
    
    typedef struct Board7 { 
        byte   sensornumber;        // Sensor number provided by e.g. Sensor=3
        String Time;                //Time
        float  Temperature;         // DHT Temperature
        float  Humidity;            // DHT Humidity
        float  BMP_Temperature;     // BMP Temperature
        float  BMP_Pressure;        // Bmp Pressure
        int Light;                  // Light 
    } Board7;
    
    typedef struct Board8 { 
        byte   sensornumber;        // Sensor number provided by e.g. Sensor=3
        String Time;                //Time
        float  Temperature;         // DHT Temperature
        float  Humidity;            // DHT Humidity
        float  BMP_Temperature;     // BMP Temperature
        float  BMP_Pressure;        // Bmp Pressure
        int Light;                  // Light 
    } Board8;

    typedef struct Board1PV { 
        byte   sensornumber;        // Sensor number provided by e.g. Sensor=3
        String Time;                //Time
        float  Temperature;         // DHT Temperature
        float  Humidity;            // DHT Humidity
        float  BMP_Temperature;     // BMP Temperature
        float  BMP_Pressure;        // Bmp Pressure
        int Light;                  // Light 
    } Board1PV;

    typedef struct Board2PV { 
        byte   sensornumber;        // Sensor number provided by e.g. Sensor=3
        String Time;                //Time
        float  Temperature;         // DHT Temperature
        float  Humidity;            // DHT Humidity
        float  BMP_Temperature;     // BMP Temperature
        float  BMP_Pressure;        // Bmp Pressure
        int Light;                  // Light 
    } Board2PV;

    typedef struct Board3PV { 
        byte   sensornumber;        // Sensor number provided by e.g. Sensor=3
        String Time;                //Time
        float  Temperature;         // DHT Temperature
        float  Humidity;            // DHT Humidity
        float  BMP_Temperature;     // BMP Temperature
        float  BMP_Pressure;        // Bmp Pressure
        int Light;                  // Light 
    } Board3PV;
    
    typedef struct Board4PV { 
        byte   sensornumber;        // Sensor number provided by e.g. Sensor=3
        String Time;                //Time
        float  Temperature;         // DHT Temperature
        float  Humidity;            // DHT Humidity
        float  BMP_Temperature;     // BMP Temperature
        float  BMP_Pressure;        // Bmp Pressure
        int Light;                  // Light 
    } Board4PV;
    
    typedef struct Board5PV { 
        byte   sensornumber;        // Sensor number provided by e.g. Sensor=3
        String Time;                //Time
        float  Temperature;         // DHT Temperature
        float  Humidity;            // DHT Humidity
        float  BMP_Temperature;     // BMP Temperature
        float  BMP_Pressure;        // Bmp Pressure
        int Light;                  // Light 
    } Board5PV;
    
    typedef struct Board6PV { 
        byte   sensornumber;        // Sensor number provided by e.g. Sensor=3
        String Time;                //Time
        float  Temperature;         // DHT Temperature
        float  Humidity;            // DHT Humidity
        float  BMP_Temperature;     // BMP Temperature
        float  BMP_Pressure;        // Bmp Pressure
        int Light;                  // Light 
    } Board6PV;
    
    typedef struct Board7PV { 
        byte   sensornumber;        // Sensor number provided by e.g. Sensor=3
        String Time;                //Time
        float  Temperature;         // DHT Temperature
        float  Humidity;            // DHT Humidity
        float  BMP_Temperature;     // BMP Temperature
        float  BMP_Pressure;        // Bmp Pressure
        int Light;                  // Light 
    } Board7PV;
    
    typedef struct Board8PV { 
        byte   sensornumber;        // Sensor number provided by e.g. Sensor=3
        String Time;                //Time
        float  Temperature;         // DHT Temperature
        float  Humidity;            // DHT Humidity
        float  BMP_Temperature;     // BMP Temperature
        float  BMP_Pressure;        // Bmp Pressure
        int Light;                  // Light 
    } Board8PV;

        typedef struct Board1LOW { 
        byte   sensornumber;        // Sensor number provided by e.g. Sensor=3
        String Time;                //Time
        float  Temperature;         // DHT Temperature
        float  Humidity;            // DHT Humidity
        float  BMP_Temperature;     // BMP Temperature
        float  BMP_Pressure;        // Bmp Pressure
        int Light;                  // Light 
    } Board1LOW;

    typedef struct Board2LOW { 
        byte   sensornumber;        // Sensor number provided by e.g. Sensor=3
        String Time;                //Time
        float  Temperature;         // DHT Temperature
        float  Humidity;            // DHT Humidity
        float  BMP_Temperature;     // BMP Temperature
        float  BMP_Pressure;        // Bmp Pressure
        int Light;                  // Light 
    } Board2LOW;

    typedef struct Board3LOW { 
        byte   sensornumber;        // Sensor number provided by e.g. Sensor=3
        String Time;                //Time
        float  Temperature;         // DHT Temperature
        float  Humidity;            // DHT Humidity
        float  BMP_Temperature;     // BMP Temperature
        float  BMP_Pressure;        // Bmp Pressure
        int Light;                  // Light 
    } Board3LOW;
    
    typedef struct Board4LOW { 
        byte   sensornumber;        // Sensor number provided by e.g. Sensor=3
        String Time;                //Time
        float  Temperature;         // DHT Temperature
        float  Humidity;            // DHT Humidity
        float  BMP_Temperature;     // BMP Temperature
        float  BMP_Pressure;        // Bmp Pressure
        int Light;                  // Light 
    } Board4LOW;
    
    typedef struct Board5LOW { 
        byte   sensornumber;        // Sensor number provided by e.g. Sensor=3
        String Time;                //Time
        float  Temperature;         // DHT Temperature
        float  Humidity;            // DHT Humidity
        float  BMP_Temperature;     // BMP Temperature
        float  BMP_Pressure;        // Bmp Pressure
        int Light;                  // Light 
    } Board5LOW;
    
    typedef struct Board6LOW { 
        byte   sensornumber;        // Sensor number provided by e.g. Sensor=3
        String Time;                //Time
        float  Temperature;         // DHT Temperature
        float  Humidity;            // DHT Humidity
        float  BMP_Temperature;     // BMP Temperature
        float  BMP_Pressure;        // Bmp Pressure
        int Light;                  // Light 
    } Board6LOW;
    
    typedef struct Board7LOW { 
        byte   sensornumber;        // Sensor number provided by e.g. Sensor=3
        String Time;                //Time
        float  Temperature;         // DHT Temperature
        float  Humidity;            // DHT Humidity
        float  BMP_Temperature;     // BMP Temperature
        float  BMP_Pressure;        // Bmp Pressure
        int Light;                  // Light 
    } Board7LOW;
    
    typedef struct Board8LOW { 
        byte   sensornumber;        // Sensor number provided by e.g. Sensor=3
        String Time;                //Time
        float  Temperature;         // DHT Temperature
        float  Humidity;            // DHT Humidity
        float  BMP_Temperature;     // BMP Temperature
        float  BMP_Pressure;        // Bmp Pressure
        int Light;                  // Light 
    } Board8LOW;

    typedef struct Board1HIGH { 
        byte   sensornumber;        // Sensor number provided by e.g. Sensor=3
        String Time;                //Time
        float  Temperature;         // DHT Temperature
        float  Humidity;            // DHT Humidity
        float  BMP_Temperature;     // BMP Temperature
        float  BMP_Pressure;        // Bmp Pressure
        int Light;                  // Light 
    } Board1HIGH;

    typedef struct Board2HIGH { 
        byte   sensornumber;        // Sensor number provided by e.g. Sensor=3
        String Time;                //Time
        float  Temperature;         // DHT Temperature
        float  Humidity;            // DHT Humidity
        float  BMP_Temperature;     // BMP Temperature
        float  BMP_Pressure;        // Bmp Pressure
        int Light;                  // Light 
    } Board2HIGH;

    typedef struct Board3HIGH { 
        byte   sensornumber;        // Sensor number provided by e.g. Sensor=3
        String Time;                //Time
        float  Temperature;         // DHT Temperature
        float  Humidity;            // DHT Humidity
        float  BMP_Temperature;     // BMP Temperature
        float  BMP_Pressure;        // Bmp Pressure
        int Light;                  // Light 
    } Board3HIGH;
    
    typedef struct Board4HIGH { 
        byte   sensornumber;        // Sensor number provided by e.g. Sensor=3
        String Time;                //Time
        float  Temperature;         // DHT Temperature
        float  Humidity;            // DHT Humidity
        float  BMP_Temperature;     // BMP Temperature
        float  BMP_Pressure;        // Bmp Pressure
        int Light;                  // Light 
    } Board4HIGH;
    
    typedef struct Board5HIGH { 
        byte   sensornumber;        // Sensor number provided by e.g. Sensor=3
        String Time;                //Time
        float  Temperature;         // DHT Temperature
        float  Humidity;            // DHT Humidity
        float  BMP_Temperature;     // BMP Temperature
        float  BMP_Pressure;        // Bmp Pressure
        int Light;                  // Light 
    } Board5HIGH;
    
    typedef struct Board6HIGH { 
        byte   sensornumber;        // Sensor number provided by e.g. Sensor=3
        String Time;                //Time
        float  Temperature;         // DHT Temperature
        float  Humidity;            // DHT Humidity
        float  BMP_Temperature;     // BMP Temperature
        float  BMP_Pressure;        // Bmp Pressure
        int Light;                  // Light 
    } Board6HIGH;
    
    typedef struct Board7HIGH { 
        byte   sensornumber;        // Sensor number provided by e.g. Sensor=3
        String Time;                //Time
        float  Temperature;         // DHT Temperature
        float  Humidity;            // DHT Humidity
        float  BMP_Temperature;     // BMP Temperature
        float  BMP_Pressure;        // Bmp Pressure
        int Light;                  // Light 
    } Board7HIGH;
    
    typedef struct Board8HIGH { 
        byte   sensornumber;        // Sensor number provided by e.g. Sensor=3
        String Time;                //Time
        float  Temperature;         // DHT Temperature
        float  Humidity;            // DHT Humidity
        float  BMP_Temperature;     // BMP Temperature
        float  BMP_Pressure;        // Bmp Pressure
        int Light;                  // Light 
    } Board8HIGH;
    
    extern struct Board1 Board_1;
    extern struct Board2 Board_2;
    extern struct Board3 Board_3;
    extern struct Board4 Board_4;
    extern struct Board5 Board_5;
    extern struct Board6 Board_6;
    extern struct Board7 Board_7;
    extern struct Board8 Board_8;

    extern struct Board1PV Board_1PV;
    extern struct Board2PV Board_2PV;
    extern struct Board3PV Board_3PV;
    extern struct Board4PV Board_4PV;
    extern struct Board5PV Board_5PV;
    extern struct Board6PV Board_6PV;
    extern struct Board7PV Board_7PV;
    extern struct Board8PV Board_8PV;

    extern struct Board1LOW Board_1LOW;
    extern struct Board2LOW Board_2LOW;
    extern struct Board3LOW Board_3LOW;
    extern struct Board4LOW Board_4LOW;
    extern struct Board5LOW Board_5LOW;
    extern struct Board6LOW Board_6LOW;
    extern struct Board7LOW Board_7LOW;
    extern struct Board8LOW Board_8LOW;

    extern struct Board1HIGH Board_1HIGH;
    extern struct Board2HIGH Board_2HIGH;
    extern struct Board2HIGH Board_2HIGH;
    extern struct Board3HIGH Board_3HIGH;
    extern struct Board4HIGH Board_4HIGH;
    extern struct Board5HIGH Board_5HIGH;
    extern struct Board6HIGH Board_6HIGH;
    extern struct Board7HIGH Board_7HIGH;
    extern struct Board8HIGH Board_8HIGH;
    
    #endif
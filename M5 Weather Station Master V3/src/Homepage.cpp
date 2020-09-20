#include <Arduino.h>
#include "Main.h"


void homepage_update(){
  webpage +=F("");
  webpage +=F("<!DOCTYPE html><html><head>");
  webpage +=F("<meta http-equiv='refresh' content='60'>"); // 5-min refresh time, test needed to prevent auto updates repeating some commands
  
  webpage +=F("<html charset=UTF-8>");

  webpage +=F("<head><meta http-equiv='refresh' content='60' name='viewport' content='width=device-width, initial-scale=1'/>");
  webpage +=F("<script src='https://ajax.googleapis.com/ajax/libs/jquery/3.5.1/jquery.min.js'></script><script src='https://maxcdn.bootstrapcdn.com/bootstrap/3.4.1/js/bootstrap.min.js'></script>");

  webpage +=F("<link href='https://maxcdn.bootstrapcdn.com/bootswatch/3.4.1/");
  webpage += (theme);
  webpage +=F("/bootstrap.min.css' rel='stylesheet'>");
  webpage +=F("</head><body>");

  //webpage +=F("<title>ESP8266 Demo </title></head><body>");
  webpage +=F("<nav class='navbar navbar-default'>");
  webpage +=F("<div class='container-fluid'>");
  webpage +=F("<div class='row'>");
  webpage +=F("<div class='col-md-12'>");
  

/*



  webpage +=F("<html charset=UTF-8><head><meta http-equiv='refresh' content='60'>"); 

  webpage +=("<meta name='viewport' content='width=device-width, initial-scale=1'>");

  webpage +=F("link rel='stylesheet'");
  
webpage +=F("<href='https://maxcdn.bootstrapcdn.com/bootstrap/4.5.2/css/bootstrap.min.css'>");

  webpage +=F("<script src='https://ajax.googleapis.com/ajax/libs/jquery/3.5.1/jquery.min.js'></script>");
  
  webpage +=F("<script src='https://cdnjs.cloudflare.com/ajax/libs/popper.js/1.16.0/umd/popper.min.js'></script>");

  webpage +=F("<script src='https://maxcdn.bootstrapcdn.com/bootstrap/4.5.2/js/bootstrap.min.js'></script>");
   

    webpage +=F("</head><body>");

 // webpage += (theme);
  webpage +=F("/bootstrap.min.css' rel='stylesheet'>");
  //webpage +=F("<title>ESP8266 Demo </title></head><body>");
  webpage +=F("<div class='container-fluid'>");
  webpage +=F("<div class='row'>");
  webpage +=F("<div class='col-md-12'>");
  */
  
  Site_Navbar();

}

// For each new page you add or remove, make sure there is a menu item to call it or remove it when not used
void Site_Navbar(){  
  
  webpage +=F("<a href='/homepage'>Home</a>");
  webpage +=F("<a href='/page1'>Page1</a>");
  webpage +=F("<a href='/page2'>Page2</a>");
  webpage +=F("<a href='/page3'>Page3</a>");
  webpage +=F("<a href='/page4'>Page4</a>");
  webpage +=F("<a href='/page5'>Page5</a>");
  webpage +=F("<a href='/page6'>Page6</a>");
  webpage +=F("<a href='/page7'>Page7</a>");
  webpage +=F("<a href='/page8'>Page8</a>");
  webpage +=F("<a href='/ALL'>ALL</a>");

  //webpage +=F(" <a href='/chart'>Chart</a>");
  //webpage +=F(" <a href='/Gauge'>Gauge</a>");
  //webpage += F(" <a href='/dht'>DHT Reading</a>");
  webpage +=F("</div>");
}
void Site_Navbar1(){  
  
  webpage +=F("<li><a href='/homepage'>Home</a></li>");
  webpage +=F("<li><a href='/page1'>Page1</a></li>");
  webpage +=F("<li><a href='/page2'>Page2</a></li>");
  webpage +=F("<li><a href='/page3'>Page3</a></li>");
  webpage +=F("<li><a href='/page4'>Page4</a></li>");
  webpage +=F("<li><a href='/page5'>Page5</a></li>");
  webpage +=F("<li><a href='/page6'>Page6</a></li>");
  webpage +=F("<li><a href='/page7'>Page7</a></li>");
  webpage +=F("<li><a href='/page8'>Page8</a></li>");
  webpage +=F("<li><a href='/ALL'>ALL</a></li>");

  //webpage +=F(" <a href='/chart'>Chart</a>");
  //webpage +=F(" <a href='/Gauge'>Gauge</a>");
  //webpage += F(" <a href='/dht'>DHT Reading</a>");
  webpage +=F("</div>");
}
///////////////////////////////////////////////////////////////////////////////
void SendHTML_Content(){
  server.sendContent(webpage);
  webpage = "";
}
///////////////////////////////////////////////////////////////////////////////
void SendHTML_Stop(){
  server.sendContent("");
  server.client().stop(); // Stop is needed because no content length was sent
}


void homepagePL(){
    CallTime();
    homepage();
    //homepage_uptime();
    SendHTML_Content(); // Send footer
    SendHTML_Stop();
    webpage="";
//   webpage += "</p>This is the server home page<br>";
}
void homepage(){
  webpage +=F("");
  webpage +=F("<!DOCTYPE html><html><head>");
  webpage +=F("<meta http-equiv='refresh' content='60'>"); // 5-min refresh time, test needed to prevent auto updates repeating some commands
  webpage +=F("<style>");
  webpage +=("body {width:"+String(sitewidth)+"px;margin:0 auto;font-family:arial;font-size:14px;text-align:center;color:blue;background-color:#F7F2Fd;}");
  webpage +=F( "h1 {background-color:#ffc66e;margin:16px 30px;}"); // Orange background
  webpage +=F("h3 {color:#9370DB;font-size:24px;width:auto;}");
  webpage +=(".navbar{overflow:hidden;background-color:#558ED5;position:fixed;top:0;width:"+String(sitewidth)+"px;margin-left:30px;}");
  webpage +=F(".navbar a {float:left;display:block;color:yellow;text-align:center;padding:10px 12px;text-decoration: none;font-size:17px;}");
  webpage +=(".main{padding:0px;margin:16px 30px;height:1000px;width:"+String(sitewidth)+"px;}");
  webpage +=F(".style1{text-align:center;font-size:16px;background-color:#FFE4B5;}");
  webpage +=F(".style2{text-align:left;font-size:16px;background-color:#F7F2Fd;width:auto;margin:0 auto;}");
  // Note: You cannot include (table, tr, td, or th) styles if you want Google Charts to work!
  webpage +=F("</style>");
  webpage +=F("</head><body>");
  webpage +=F("<div class='navbar'>");
  Site_Navbar();

  webpage +=("<br><title>"+sitetitle+"</title><br>");
  webpage +=("<div class='main'><h1>"+siteheading+" "+ siteversion + "</h1>");
}
//##############################################################################################
void homepage_small(){
  webpage +=F("");
  webpage +=F("<!DOCTYPE html><html><head>");
  webpage +=F("<meta http-equiv='refresh' content='60'>"); // 5-min refresh time, test needed to prevent auto updates repeating some commands
  webpage +=F("<style>");
  webpage +=("body {width:"+String(sitewidth)+"px;margin:0 auto;font-family:arial;font-size:14px;text-align:center;color:blue;background-color:#F7F2Fd;}");
  webpage +=F( "h1 {background-color:#ffc66e;margin:16px 30px;}"); // Orange background
  webpage +=F("h3 {color:#9370DB;font-size:24px;width:auto;}");
  webpage +=(".navbar{overflow:hidden;background-color:#558ED5;position:fixed;top:0;width:"+String(sitewidth)+"px;margin-left:30px;}");
  webpage +=F(".navbar a {float:left;display:block;color:yellow;text-align:center;padding:10px 12px;text-decoration: none;font-size:17px;}");
  webpage +=(".main{padding:0px;margin:16px 30px;height:1000px;width:"+String(sitewidth)+"px;}");
  webpage +=F(".style1{text-align:center;font-size:16px;background-color:#FFE4B5;}");
  webpage +=F(".style2{text-align:left;font-size:16px;background-color:#F7F2Fd;width:auto;margin:0 auto;}");
  // Note: You cannot include (table, tr, td, or th) styles if you want Google Charts to work!
  webpage +=F("</style>");
  webpage +=F("</head><body>");
  //webpage +=F("<div class='navbar'>");
  //Site_Navbar();
}
//##############################################################################################
void homepage_tiny(){
  webpage +=F("");
  webpage +=F("<!DOCTYPE html><html><head>");
  webpage +=F("<meta http-equiv='refresh' content='60'>"); // 5-min refresh time, test needed to prevent auto updates repeating some commands
  webpage +=F("<style>");
  webpage +=("body {width:"+String(sitewidth)+"px;margin:0 auto;font-family:arial;font-size:14px;text-align:center;color:blue;background-color:#F7F2Fd;}");
  webpage +=F( "h1 {background-color:#ffc66e;margin:16px 30px;}"); // Orange background
  webpage +=F("h3 {color:#9370DB;font-size:24px;width:auto;}");
  webpage +=(".navbar{overflow:hidden;background-color:#558ED5;position:fixed;top: 0;width:"+String(sitewidth)+"px;margin-left:30px;}");
  webpage +=F(".navbar a {float:left;display:block;color:yellow;text-align:center;padding:20px 12px;text-decoration: none;font-size:17px;}");
  webpage +=(".main{padding:0px;margin:16px 30px;height:1000px;width:"+String(sitewidth)+"px;}");
  webpage +=F(".style1{text-align:center;font-size:16px;background-color:#FFE4B5;}");
  webpage +=F(".style2{text-align:left;font-size:16px;background-color:#F7F2Fd;width:auto;margin:0 auto;}");
  // Note: You cannot include (table, tr, td, or th) styles if you want Google Charts to work!
  webpage +=F("</style>");
  webpage +=F("</head><body>");
  webpage +=F("<h4><div class='navbar'>");
  webpage +=F("<div class='container-fluid'>");
  webpage +=F("<div class='navbar-header'>");
  webpage +=F("<ul class='nav navbar-nav'>");
  Site_Navbar1();
  webpage +=F("</h4>");
}
#include <Arduino.h>
#include "Main.h"
#include "Web_Page.h"


void Page_Display8(){
  Room_name="Craft Room";
  CallTime();
  homepage_tiny();
  Get_Page8();
  
  homepage_uptime();
  SendHTML_Content();
  SendHTML_Stop();
  webpage="";
}

  
void Get_Page8(){
  
 // Return a string containing the HTML code of the page
  webpage +=F("<html charset=UTF-8><head><meta http-equiv='refresh' content='60' name='viewport' content='width=device-width, initial-scale=1'/>");
  webpage +=F("<script src='https://ajax.googleapis.com/ajax/libs/jquery/3.2.1/jquery.min.js'></script><script src='https://maxcdn.bootstrapcdn.com/bootstrap/3.3.7/js/bootstrap.min.js'></script>");

  webpage +=F("<link href='https://maxcdn.bootstrapcdn.com/bootswatch/3.3.7/");
  webpage += (theme);
  webpage +=F("/bootstrap.min.css' rel='stylesheet'>");
  //webpage +=F("<title>ESP8266 Demo </title></head><body>");
  webpage +=F("<div class='container-fluid'>");
  webpage +=F("<div class='row'>");
  webpage +=F("<div class='col-md-12'>");

  webpage += "<h3><th>"+Room_name+"</title></h3>";
  SendHTML_Content();
  
  webpage +=F("<ul class='nav nav-pills'>");
  webpage +=F("<li class='active'>");
  webpage +=F("<a href='#'> <span class='badge pull-right'>");
  webpage +=(Board_8.Temperature); 

 
  webpage +=F("</span> Temperature</a>");
  webpage +=F("<li class='active'>");
  webpage +=F("</li><li>");
  webpage +=F("<li class='active'>");
  webpage +=F("<a href='#'> <span class='badge pull-right'>");
  webpage +=(Board_8.Humidity);
  webpage +=F("</span> Humidity</a>");
  webpage +=F("</li><li>");
  webpage +=F("<li class='active'>");
  webpage +=F("<a href='#'> <span class='badge pull-right'>");
  webpage +=(Board_8.BMP_Temperature);
  webpage +=F("</span> Atmospheric Pressure</a>");
  
  webpage +=F("</li><li>");
  webpage +=F("<li class='active'>");
  webpage +=F("<a href='#'> <span class='badge pull-right'>");
  webpage +=(Board_8.Light);
  webpage +=F("</span> Light Value</a></li>");
  webpage +=F("</ul>");
  webpage +=F("<table class='table'>");  // Chart of readings
  webpage +=F("<thead><tr class='active'><th>Sensor<th>Measurement<th>Value<th>PV<th>Low<th>High</tr></thead>");
  webpage +=F("<tbody>");  // Table content
  webpage +=F("<tr><td>DHT22</td><td>Temperature</td><td>"); // First line : temperature
  
  
  webpage +=(Board_8.Temperature);
  webpage +=F("&deg;C</td><td>");
  webpage +=(Board_8PV.Temperature);
  webpage +=F("<td>");
  webpage +=(Board_8LOW.Temperature);
  webpage +=F("<td>");
  webpage +=(Board_8HIGH.Temperature);
  webpage +=F("</td></td>");
  webpage +=F("<tr><td>DHT22</td><td>Humidity</td><td>"); // 2nd line : humidity *************************<tr class='active'>
  webpage +=(Board_8.Humidity);
  webpage +=F("%</td><td>");
  webpage +=(Board_8PV.Humidity);
  webpage +=F("<td>");
  webpage +=(Board_8LOW.Humidity);
  webpage +=F("<td>");
  webpage +=(Board_8HIGH.Humidity);
  SendHTML_Content();
  
  webpage +=F("</td></tr>");
  webpage +=F("<tr><td>BMP280</td><td>Temperature</td><td>"); // 3th line : atmospheric pressure
  webpage +=(Board_8.BMP_Temperature);
  webpage +=F("&deg;C</td><td>");
  webpage +=(Board_8PV.BMP_Temperature);
  webpage +=F("<td>");
  webpage +=(Board_8LOW.BMP_Temperature);
  webpage +=F("<td>");
  webpage +=(Board_8HIGH.BMP_Temperature);

  webpage +=F("</td></tr>");
  webpage +=F("<tr><td>BMP280</td><td>Atmospheric Pressure</td><td>"); // 3th line : atmospheric pressure
  webpage +=(Board_8.BMP_Pressure);
  webpage +=F("mbar</td><td>");
  webpage +=(Board_8PV.BMP_Pressure);
  webpage +=F("<td>");
  webpage +=(Board_8LOW.BMP_Pressure);
  webpage +=F("<td>");
  webpage +=(Board_8HIGH.BMP_Pressure);

  
  webpage +=F("</td></tr>");
  webpage +=F("<tr><td>Photoresistor</td><td>Light </td><td>"); // 4th line : Light
  webpage +=(Board_8.Light);
  webpage +=F("%<td>"); 
  webpage +=(Board_8PV.Light);
  webpage +=F(" %<td>");
  webpage +=(Board_8LOW.Light);
  webpage +=F(" %<td>");
  webpage +=(Board_8HIGH.Light);

  webpage +=F(" %</td><td>");
  webpage +=F("</tbody></table></div></div>");
  webpage +=F("<div class='row'>");

  webpage +=F("<div class='container'>");
  webpage +=F("</body></html>");
 SendHTML_Content();
  /*
  webpage +=F("<form action='/' method='POST'><button type='button submit'name='0' value='HOME' class='btn btn-default'><span class='badge'>");
  webpage +=(etatGpio[0]);
  webpage +=F("</span></button>");
  webpage +=F("<form action='/' method='POST'><button type='button submit'name='1' value='Page1' class='btn btn-info'><span class='badge'>");
  webpage +=(etatGpio[1]);
  webpage +=F("</span></button>");  
  webpage +=F("<form action='/' method='POST'><button type='button submit'name='2' value='Page2' class='btn btn-primary'> <span class='badge'>");
  webpage +=(etatGpio[2]);
  webpage +=F("</span></button>");
  webpage +=F("<form action='/' method='POST'><button type='button submit'name='3' value='Page3' class='btn btn-success'><span class='badge'>");
  webpage +=(etatGpio[3]);
  webpage +=F("</span></button>"); 
  webpage +=F("<form action='/' method='POST'><button type='button submit'name='4' value='Page4' class='btn btn-warning'><span class='badge'>");
  webpage +=(etatGpio[4]);
  webpage +=F("</span></button>"); 
  webpage +=F("<form action='/' method='POST'><button type='button submit'name='5' value='Page5' class='btn btn-danger'><span class='badge'>");
  webpage +=(etatGpio[5]);
  webpage +=F("</span></button>");
  webpage +=F("<form action='/' method='POST'><button type='button submit'name='6' value='Page6' class='btn btn-info'><span class='badge'>");
  webpage +=(etatGpio[6]);
  webpage +=F("</span></button>");
  webpage +=F("<form action='/' method='POST'><button type='button submit'name='7' value='Page7' class='btn btn-info'><span class='badge'>");
  webpage +=(etatGpio[7]);
  webpage +=F("</span></button>");
  webpage +=F("<form action='/' method='POST'><button type='button submit'name='8' value='Page8' class='btn btn-info'><span class='badge'>");
  webpage +=(etatGpio[8]);
  webpage +=F("</span></button>");
  */  
  webpage +=F("</div><div>");
   SendHTML_Content();
   SendHTML_Stop();
   webpage="";
}
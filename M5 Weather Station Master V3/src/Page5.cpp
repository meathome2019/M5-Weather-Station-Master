#include <Arduino.h>
#include "Main.h"


void Page_Display5(){
  Room_name="Outside";
  CallTime();
  homepage_tiny();
  Get_Page5();
  
  homepage_uptime();
  SendHTML_Content();
  SendHTML_Stop();
  webpage="";
}

  
void Get_Page5(){
  
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
  webpage +=(Board_5.Temperature); 

 
  webpage +=F("</span> Temperature</a>");
  webpage +=F("<li class='active'>");
  webpage +=F("</li><li>");
  webpage +=F("<li class='active'>");
  webpage +=F("<a href='#'> <span class='badge pull-right'>");
  webpage +=(Board_5.Humidity);
  webpage +=F("</span> Humidity</a>");
  webpage +=F("</li><li>");
  webpage +=F("<li class='active'>");
  webpage +=F("<a href='#'> <span class='badge pull-right'>");
  webpage +=(Board_5.BMP_Temperature);
  webpage +=F("</span> Atmospheric Pressure</a>");
  
  webpage +=F("</li><li>");
  webpage +=F("<li class='active'>");
  webpage +=F("<a href='#'> <span class='badge pull-right'>");
  webpage +=(Board_5.Light);
  webpage +=F("</span> Light Value</a></li>");
  webpage +=F("</ul>");
  webpage +=F("<table class='table'>");  // Chart of readings
  webpage +=F("<thead><tr class='active'><th>Sensor<th>Measurement<th>Value<th>PV<th>Low<th>High</tr></thead>");
  webpage +=F("<tbody>");  // Table content
  webpage +=F("<tr><td>DHT22</td><td>Temperature</td><td>"); // First line : temperature
  
  
  webpage +=(Board_5.Temperature);
  webpage +=F("&deg;C</td><td>");
  webpage +=(Board_5PV.Temperature);
  webpage +=F("<td>");
  webpage +=(Board_5LOW.Temperature);
  webpage +=F("<td>");
  webpage +=(Board_5HIGH.Temperature);
  webpage +=F("</td></td>");
  webpage +=F("<tr><td>DHT22</td><td>Humidity</td><td>"); // 2nd line : humidity *************************<tr class='active'>
  webpage +=(Board_5.Humidity);
  webpage +=F("%</td><td>");
  webpage +=(Board_5PV.Humidity);
  webpage +=F("<td>");
  webpage +=(Board_5LOW.Humidity);
  webpage +=F("<td>");
  webpage +=(Board_5HIGH.Humidity);
  SendHTML_Content();
  
  webpage +=F("</td></tr>");
  webpage +=F("<tr><td>BMP280</td><td>Temperature</td><td>"); // 3th line : atmospheric pressure
  webpage +=(Board_5.BMP_Temperature);
  webpage +=F("&deg;C</td><td>");
  webpage +=(Board_5PV.BMP_Temperature);
  webpage +=F("<td>");
  webpage +=(Board_5LOW.BMP_Temperature);
  webpage +=F("<td>");
  webpage +=(Board_5HIGH.BMP_Temperature);

  webpage +=F("</td></tr>");
  webpage +=F("<tr><td>BMP280</td><td>Atmospheric Pressure</td><td>"); // 3th line : atmospheric pressure
  webpage +=(Board_5.BMP_Pressure);
  webpage +=F("mbar</td><td>");
  webpage +=(Board_5PV.BMP_Pressure);
  webpage +=F("<td>");
  webpage +=(Board_5LOW.BMP_Pressure);
  webpage += F("<td>");
  webpage +=(Board_5HIGH.BMP_Pressure);

  
  webpage +=F("</td></tr>");
  webpage +=F("<tr><td>Photoresistor</td><td>Light </td><td>"); // 4th line : Light
  webpage +=(Board_5.Light);
  webpage +=F("%<td>"); 
  webpage +=(Board_5PV.Light);
  webpage +=F(" %<td>");
  webpage +=(Board_5LOW.Light);
  webpage +=F(" %<td>");
  webpage +=(Board_5HIGH.Light);

  webpage +=F(" %</td><td>");
  webpage +=F("</tbody></table></div></div>");
  webpage +=F("<div class='row'>");

  webpage +=F("<div class='container'>");
  webpage +=F("</body></html>");
 SendHTML_Content();

  webpage +=F("</div><div>");
   SendHTML_Content();
   SendHTML_Stop();
   webpage="";
}
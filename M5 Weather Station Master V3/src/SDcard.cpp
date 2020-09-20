#include <Arduino.h>
#include "Main.h"
#include "SD.h"
#include "SPI.h"

const int chipSelect = 4;
 String s;

File myFile;

void SD_ALL_Delete() {
    SD_ALLD_Delete();
    SD_HIGH_Delete();
    watchdog();
    SD_LOW_Delete();
    SD_PV_Delete();
}
void SD_ALLD_Delete() {
myFile = SD.open("/Data1.csv", FILE_READ);
if (SD.remove("/Data1.csv")) {
    Serial.println(F("File deleted successfully"));
    myFile.close();
}
myFile = SD.open("/Data2.csv", FILE_READ);
if (SD.remove("/Data2.csv")) {
    Serial.println(F("File deleted successfully"));
    myFile.close();
}
myFile = SD.open("/Data3.csv", FILE_READ);
if (SD.remove("/Data3.csv")) {
    Serial.println(F("File deleted successfully"));
    myFile.close();
}
myFile = SD.open("/Data4.csv", FILE_READ);
if (SD.remove("/Data4.csv")) {
    Serial.println(F("File deleted successfully"));
    myFile.close();
}
myFile = SD.open("/Data5.csv", FILE_READ);
if (SD.remove("/Data5.csv")) {
    Serial.println(F("File deleted successfully"));
    myFile.close();
}
myFile = SD.open("/Data6.csv", FILE_READ);
if (SD.remove("/Data6.csv")) {
    Serial.println(F("File deleted successfully"));
    myFile.close();
}
myFile = SD.open("/Data7.csv", FILE_READ);
if (SD.remove("/Data7.csv")) {
    Serial.println(F("File deleted successfully"));
    myFile.close();
}
myFile = SD.open("/Data8.csv", FILE_READ);
if (SD.remove("/Data8.csv")) {
    Serial.println(F("File deleted successfully"));
    myFile.close();
}
}    
void SD_LOW_Delete() {
myFile = SD.open("/Data1LOW.csv", FILE_READ);
if (SD.remove("/Data1LOW.csv")) {
    Serial.println(F("File deleted successfully"));
    myFile.close();
}
myFile = SD.open("/Data2LOW.csv", FILE_READ);
if (SD.remove("/Data2LOW.csv")) {
    Serial.println(F("File deleted successfully"));
    myFile.close();
}
myFile = SD.open("/Data3LOW.csv", FILE_READ);
if (SD.remove("/Data3LOW.csv")) {
    Serial.println(F("File deleted successfully"));
    myFile.close();
}
myFile = SD.open("/Data4LOW.csv", FILE_READ);
if (SD.remove("/Data4LOW.csv")) {
    Serial.println(F("File deleted successfully"));
    myFile.close();
}
myFile = SD.open("/Data5LOW.csv", FILE_READ);
if (SD.remove("/Data5LOW.csv")) {
    Serial.println(F("File deleted successfully"));
    myFile.close();
}
myFile = SD.open("/Data6LOW.csv", FILE_READ);
if (SD.remove("/Data6LOW.csv")) {
    Serial.println(F("File deleted successfully"));
    myFile.close();
}
myFile = SD.open("/Data7LOW.csv", FILE_READ);
if (SD.remove("/Data7LOW.csv")) {
    Serial.println(F("File deleted successfully"));
    myFile.close();
}
myFile = SD.open("/Data8LOW.csv", FILE_READ);
if (SD.remove("/Data8LOW.csv")) {
    Serial.println(F("File deleted successfully"));
    myFile.close();
}
}
void SD_HIGH_Delete() {
myFile = SD.open("/Data1HIGH.csv", FILE_READ);
if (SD.remove("/Data1HIGH.csv")) {
    Serial.println(F("File deleted successfully"));
    myFile.close();
}
myFile = SD.open("/Data2HIGH.csv", FILE_READ);
if (SD.remove("/Data2HIGH.csv")) {
    Serial.println(F("File deleted successfully"));
    myFile.close();
}
myFile = SD.open("/Data3HIGH.csv", FILE_READ);
if (SD.remove("/Data3HIGH.csv")) {
    Serial.println(F("File deleted successfully"));
    myFile.close();
}
myFile = SD.open("/Data4HIGH.csv", FILE_READ);
if (SD.remove("/Data4HIGH.csv")) {
    Serial.println(F("File deleted successfully"));
    myFile.close();
}
myFile = SD.open("/Data5HIGH.csv", FILE_READ);
if (SD.remove("/Data5HIGH.csv")) {
    Serial.println(F("File deleted successfully"));
    myFile.close();
}
myFile = SD.open("/Data6HIGH.csv", FILE_READ);
if (SD.remove("/Data6HIGH.csv")) {
    Serial.println(F("File deleted successfully"));
    myFile.close();
}
myFile = SD.open("/Data7HIGH.csv", FILE_READ);
if (SD.remove("/Data7HIGH.csv")) {
    Serial.println(F("File deleted successfully"));
    myFile.close();
}
myFile = SD.open("/Data8HIGH.csv", FILE_READ);
if (SD.remove("/Data8HIGH.csv")) {
    Serial.println(F("File deleted successfully"));
    myFile.close();
}
}
void SD_PV_Delete() {
myFile = SD.open("/Data1PV.csv", FILE_READ);
if (SD.remove("/Data1PV.csv")) {
    Serial.println(F("File deleted successfully"));
    myFile.close();
}
myFile = SD.open("/Data2PV.csv", FILE_READ);
if (SD.remove("/Data2PV.csv")) {
    Serial.println(F("File deleted successfully"));
    myFile.close();
}
myFile = SD.open("/Data3PV.csv", FILE_READ);
if (SD.remove("/Data3PV.csv")) {
    Serial.println(F("File deleted successfully"));
    myFile.close();
}
myFile = SD.open("/Data4PV.csv", FILE_READ);
if (SD.remove("/Data4PV.csv")) {
    Serial.println(F("File deleted successfully"));
    myFile.close();
}
myFile = SD.open("/Data5PV.csv", FILE_READ);
if (SD.remove("/Data5PV.csv")) {
    Serial.println(F("File deleted successfully"));
    myFile.close();
}
myFile = SD.open("/Data6PV.csv", FILE_READ);
if (SD.remove("/Data6PV.csv")) {
    Serial.println(F("File deleted successfully"));
    myFile.close();
}
myFile = SD.open("/Data7PV.csv", FILE_READ);
if (SD.remove("/Data7PV.csv")) {
    Serial.println(F("File deleted successfully"));
    myFile.close();
}
myFile = SD.open("/Data8PV.csv", FILE_READ);
if (SD.remove("/Data8PV.csv")) {
    Serial.println(F("File deleted successfully"));
    myFile.close();
}
ESP.restart();
}
//##############################################################################
void SD_Check(){
 SD1_R();SD2_R();SD3_R();SD4_R();SD5_R();SD6_R();SD7_R();SD8_R();

 SD1_PV_R();SD2_PV_R();SD3_PV_R();SD4_PV_R();SD5_PV_R();SD6_PV_R();SD7_PV_R();SD8_PV_R();   

 SD1_LOW_R();SD2_LOW_R();SD3_LOW_R();SD4_LOW_R();SD5_LOW_R();SD6_LOW_R();SD7_LOW_R();SD8_LOW_R();

  SD1_HIGH_R();SD2_HIGH_R();SD3_HIGH_R();SD4_HIGH_R();SD5_HIGH_R();SD6_HIGH_R();SD7_HIGH_R();SD8_HIGH_R();
}
//##############################################################################
void SD_Setup(){
    if(!SD.begin(chipSelect)) {
        Serial.println("Card Mount Failed");
        return;
    }
    uint8_t cardType = SD.cardType();

    if(cardType == CARD_NONE){
        Serial.println("No SD card attached");
        return;
    }

    Serial.print("SD Card Type: ");
    if(cardType == CARD_MMC){
        Serial.println("MMC");
    } else if(cardType == CARD_SD){
        Serial.println("SDSC");
    } else if(cardType == CARD_SDHC){
        Serial.println("SDHC");
    } else {
        Serial.println("UNKNOWN");
    }

    uint64_t cardSize = SD.cardSize() / (1024 * 1024);
    Serial.printf("SD Card Size: %lluMB\n", cardSize);
}
//##############################################################################
void SD1_R(){
 
  myFile = SD.open("/Data1.csv");
    if(!myFile){
    Serial.println("Failed to open file for reading");
    return;
    }
    else{
        Serial.println(myFile.size()); 
        Serial.println("File is open file for reading");
  
        s=myFile.readStringUntil('\r');
        Board_1.sensornumber= s.toInt();
        s=myFile.readStringUntil('\r');
        s.remove(0,1);
        Board_1.Time = s;
        s=myFile.readStringUntil('\r');
        Board_1.Temperature=s.toFloat();
        s=myFile.readStringUntil('\r');
        Board_1.Humidity=s.toFloat();
        s=myFile.readStringUntil('\r');
        Board_1.BMP_Temperature=s.toFloat();
        s=myFile.readStringUntil('\r');
        Board_1.BMP_Pressure=s.toFloat();
        s=myFile.readStringUntil('\r');
        Board_1.Light=s.toInt();
        myFile.close();
    }
}
//##############################################################################

void SD1_PV_R(){
 
  myFile = SD.open("/Data1PV.csv");
    if(!myFile){
    Serial.println("Failed to open file for reading");
    return;
    }
    else{
        Serial.println(myFile.size()); 
        Serial.println("File is open file for reading");
  
        s=myFile.readStringUntil('\r');
        Board_1PV.sensornumber= s.toInt();
        s=myFile.readStringUntil('\r');
        Board_1PV.Time = s;
        s=myFile.readStringUntil('\r');
        Board_1PV.Temperature=s.toFloat();
        s=myFile.readStringUntil('\r');
        Board_1PV.Humidity=s.toFloat();
        s=myFile.readStringUntil('\r');
        Board_1PV.BMP_Temperature=s.toFloat();
        s=myFile.readStringUntil('\r');
        Board_1PV.BMP_Pressure=s.toFloat();
        s=myFile.readStringUntil('\r');
        Board_1PV.Light=s.toInt();
        myFile.close();
    }
}
void SD1_LOW_R(){
myFile = SD.open("/Data1LOW.csv");

if(!myFile){
    Serial.println("Failed to open file for reading");
    return;
}
else{
    Serial.println(myFile.size()); 
    Serial.println("File is open file for reading");
  
    s=myFile.readStringUntil('\r');
    Board_1LOW.sensornumber= s.toInt();
    s=myFile.readStringUntil('\r');
    Board_1LOW.Time = s;
    s=myFile.readStringUntil('\r');
    Board_1LOW.Temperature=s.toFloat();
    s=myFile.readStringUntil('\r');
    Board_1LOW.Humidity=s.toFloat();
    s=myFile.readStringUntil('\r');
    Board_1LOW.BMP_Temperature=s.toFloat();
    s=myFile.readStringUntil('\r');
    Board_1LOW.BMP_Pressure=s.toFloat();
    s=myFile.readStringUntil('\r');
    Board_1LOW.Light=s.toInt();
    myFile.close();
    }
}


void SD1_HIGH_R(){

  myFile = SD.open("/Data1HIGH.csv");

if(!myFile){
    Serial.println("Failed to open file for reading");
    return;
    }
    else{
        Serial.println(myFile.size()); 
        Serial.println("File is open file for reading");
  
        s=myFile.readStringUntil('\r');
        Board_1HIGH.sensornumber= s.toInt();
        s=myFile.readStringUntil('\r');
        Board_1HIGH.Time = s;
        s=myFile.readStringUntil('\r');
        Board_1HIGH.Temperature=s.toFloat();
        s=myFile.readStringUntil('\r');
        Board_1HIGH.Humidity=s.toFloat();
        s=myFile.readStringUntil('\r');
        Board_1HIGH.BMP_Temperature=s.toFloat();
        s=myFile.readStringUntil('\r');
        Board_1HIGH.BMP_Pressure=s.toFloat();
        s=myFile.readStringUntil('\r');
        Board_1HIGH.Light=s.toInt();
        myFile.close();
    }
}
//##################################################################
void SD2_R(){
 
  myFile = SD.open("/Data2.csv");
    if(!myFile){
    Serial.println("Failed to open file for reading");
    return;
    }
    else{
        Serial.println(myFile.size()); 
        Serial.println("File is open file for reading");
  
        s=myFile.readStringUntil('\r');
        Board_2.sensornumber= s.toInt();
        s=myFile.readStringUntil('\r');
        s.remove(0,1);
        Board_2.Time = s;
        s=myFile.readStringUntil('\r');
        Board_2.Temperature=s.toFloat();
        s=myFile.readStringUntil('\r');
        Board_2.Humidity=s.toFloat();
        s=myFile.readStringUntil('\r');
        Board_2.BMP_Temperature=s.toFloat();
        s=myFile.readStringUntil('\r');
        Board_2.BMP_Pressure=s.toFloat();
        s=myFile.readStringUntil('\r');
        Board_2.Light=s.toInt();
        myFile.close();
    }
}
//##############################################################################

void SD2_PV_R(){
 
  myFile = SD.open("/Data2PV.csv");
    if(!myFile){
    Serial.println("Failed to open file for reading");
    return;
    }
    else{
        Serial.println(myFile.size()); 
        Serial.println("File is open file for reading");
  
        s=myFile.readStringUntil('\r');
        Board_2PV.sensornumber= s.toInt();
        s=myFile.readStringUntil('\r');
        Board_2PV.Time = s;
        s=myFile.readStringUntil('\r');
        Board_2PV.Temperature=s.toFloat();
        s=myFile.readStringUntil('\r');
        Board_2PV.Humidity=s.toFloat();
        s=myFile.readStringUntil('\r');
        Board_2PV.BMP_Temperature=s.toFloat();
        s=myFile.readStringUntil('\r');
        Board_2PV.BMP_Pressure=s.toFloat();
        s=myFile.readStringUntil('\r');
        Board_2PV.Light=s.toInt();
        myFile.close();
    }
}
void SD2_LOW_R(){
myFile = SD.open("/Data2LOW.csv");

if(!myFile){
    Serial.println("Failed to open file for reading");
    return;
}
else{
    Serial.println(myFile.size()); 
    Serial.println("File is open file for reading");
  
    s=myFile.readStringUntil('\r');
    Board_2LOW.sensornumber= s.toInt();
    s=myFile.readStringUntil('\r');
    Board_2LOW.Time = s;
    s=myFile.readStringUntil('\r');
    Board_2LOW.Temperature=s.toFloat();
    s=myFile.readStringUntil('\r');
    Board_2LOW.Humidity=s.toFloat();
    s=myFile.readStringUntil('\r');
    Board_2LOW.BMP_Temperature=s.toFloat();
    s=myFile.readStringUntil('\r');
    Board_2LOW.BMP_Pressure=s.toFloat();
    s=myFile.readStringUntil('\r');
    Board_2LOW.Light=s.toInt();
    myFile.close();
    }
}


void SD2_HIGH_R(){

  myFile = SD.open("/Data2HIGH.csv");

if(!myFile){
    Serial.println("Failed to open file for reading");
    return;
    }
    else{
        Serial.println(myFile.size()); 
        Serial.println("File is open file for reading");
  
        s=myFile.readStringUntil('\r');
        Board_2HIGH.sensornumber= s.toInt();
        s=myFile.readStringUntil('\r');
        Board_2HIGH.Time = s;
        s=myFile.readStringUntil('\r');
        Board_2HIGH.Temperature=s.toFloat();
        s=myFile.readStringUntil('\r');
        Board_2HIGH.Humidity=s.toFloat();
        s=myFile.readStringUntil('\r');
        Board_2HIGH.BMP_Temperature=s.toFloat();
        s=myFile.readStringUntil('\r');
        Board_2HIGH.BMP_Pressure=s.toFloat();
        s=myFile.readStringUntil('\r');
        Board_2HIGH.Light=s.toInt();
        myFile.close();
    }
}
//##################################################################
void SD3_R(){
 
  myFile = SD.open("/Data3.csv");
    if(!myFile){
    Serial.println("Failed to open file for reading");
    return;
    }
    else{
        Serial.println(myFile.size()); 
        Serial.println("File is open file for reading");
  
        s=myFile.readStringUntil('\r');
        Board_3.sensornumber= s.toInt();
        s=myFile.readStringUntil('\r');
        s.remove(0,1);
        Board_3.Time = s;
        s=myFile.readStringUntil('\r');
        Board_3.Temperature=s.toFloat();
        s=myFile.readStringUntil('\r');
        Board_3.Humidity=s.toFloat();
        s=myFile.readStringUntil('\r');
        Board_3.BMP_Temperature=s.toFloat();
        s=myFile.readStringUntil('\r');
        Board_3.BMP_Pressure=s.toFloat();
        s=myFile.readStringUntil('\r');
        Board_3.Light=s.toInt();
        myFile.close();
    }
}
//##############################################################################

void SD3_PV_R(){
 
  myFile = SD.open("/Data3PV.csv");
    if(!myFile){
    Serial.println("Failed to open file for reading");
    return;
    }
    else{
        Serial.println(myFile.size()); 
        Serial.println("File is open file for reading");
  
        s=myFile.readStringUntil('\r');
        Board_3PV.sensornumber= s.toInt();
        s=myFile.readStringUntil('\r');
        Board_3PV.Time = s;
        s=myFile.readStringUntil('\r');
        Board_3PV.Temperature=s.toFloat();
        s=myFile.readStringUntil('\r');
        Board_3PV.Humidity=s.toFloat();
        s=myFile.readStringUntil('\r');
        Board_3PV.BMP_Temperature=s.toFloat();
        s=myFile.readStringUntil('\r');
        Board_3PV.BMP_Pressure=s.toFloat();
        s=myFile.readStringUntil('\r');
        Board_3PV.Light=s.toInt();
        myFile.close();
    }
}
void SD3_LOW_R(){
myFile = SD.open("/Data3LOW.csv");

if(!myFile){
    Serial.println("Failed to open file for reading");
    return;
}
else{
    Serial.println(myFile.size()); 
    Serial.println("File is open file for reading");
  
    s=myFile.readStringUntil('\r');
    Board_3LOW.sensornumber= s.toInt();
    s=myFile.readStringUntil('\r');
    Board_3LOW.Time = s;
    s=myFile.readStringUntil('\r');
    Board_3LOW.Temperature=s.toFloat();
    s=myFile.readStringUntil('\r');
    Board_3LOW.Humidity=s.toFloat();
    s=myFile.readStringUntil('\r');
    Board_3LOW.BMP_Temperature=s.toFloat();
    s=myFile.readStringUntil('\r');
    Board_3LOW.BMP_Pressure=s.toFloat();
    s=myFile.readStringUntil('\r');
    Board_3LOW.Light=s.toInt();
    myFile.close();
    }
}


void SD3_HIGH_R(){

  myFile = SD.open("/Data3HIGH.csv");

if(!myFile){
    Serial.println("Failed to open file for reading");
    return;
    }
    else{
        Serial.println(myFile.size()); 
        Serial.println("File is open file for reading");
  
        s=myFile.readStringUntil('\r');
        Board_3HIGH.sensornumber= s.toInt();
        s=myFile.readStringUntil('\r');
        Board_3HIGH.Time = s;
        s=myFile.readStringUntil('\r');
        Board_3HIGH.Temperature=s.toFloat();
        s=myFile.readStringUntil('\r');
        Board_3HIGH.Humidity=s.toFloat();
        s=myFile.readStringUntil('\r');
        Board_3HIGH.BMP_Temperature=s.toFloat();
        s=myFile.readStringUntil('\r');
        Board_3HIGH.BMP_Pressure=s.toFloat();
        s=myFile.readStringUntil('\r');
        Board_3HIGH.Light=s.toInt();
        myFile.close();
    }
}
//##################################################################
void SD4_R(){
 
  myFile = SD.open("/Data4.csv");
    if(!myFile){
    Serial.println("Failed to open file for reading");
    return;
    }
    else{
        Serial.println(myFile.size()); 
        Serial.println("File is open file for reading");
  
        s=myFile.readStringUntil('\r');
        Board_4.sensornumber= s.toInt();
        s=myFile.readStringUntil('\r');
        s.remove(0,1);
        Board_4.Time = s;
        s=myFile.readStringUntil('\r');
        Board_4.Temperature=s.toFloat();
        s=myFile.readStringUntil('\r');
        Board_4.Humidity=s.toFloat();
        s=myFile.readStringUntil('\r');
        Board_4.BMP_Temperature=s.toFloat();
        s=myFile.readStringUntil('\r');
        Board_4.BMP_Pressure=s.toFloat();
        s=myFile.readStringUntil('\r');
        Board_4.Light=s.toInt();
        myFile.close();
    }
}
//##############################################################################

void SD4_PV_R(){
 
  myFile = SD.open("/Data4PV.csv");
    if(!myFile){
    Serial.println("Failed to open file for reading");
    return;
    }
    else{
        Serial.println(myFile.size()); 
        Serial.println("File is open file for reading");
  
        s=myFile.readStringUntil('\r');
        Board_4PV.sensornumber= s.toInt();
        s=myFile.readStringUntil('\r');
        Board_4PV.Time = s;
        s=myFile.readStringUntil('\r');
        Board_4PV.Temperature=s.toFloat();
        s=myFile.readStringUntil('\r');
        Board_4PV.Humidity=s.toFloat();
        s=myFile.readStringUntil('\r');
        Board_4PV.BMP_Temperature=s.toFloat();
        s=myFile.readStringUntil('\r');
        Board_4PV.BMP_Pressure=s.toFloat();
        s=myFile.readStringUntil('\r');
        Board_4PV.Light=s.toInt();
        myFile.close();
    }
}
void SD4_LOW_R(){
myFile = SD.open("/Data4LOW.csv");

if(!myFile){
    Serial.println("Failed to open file for reading");
    return;
}
else{
    Serial.println(myFile.size()); 
    Serial.println("File is open file for reading");
  
    s=myFile.readStringUntil('\r');
    Board_4LOW.sensornumber= s.toInt();
    s=myFile.readStringUntil('\r');
    Board_4LOW.Time = s;
    s=myFile.readStringUntil('\r');
    Board_4LOW.Temperature=s.toFloat();
    s=myFile.readStringUntil('\r');
    Board_4LOW.Humidity=s.toFloat();
    s=myFile.readStringUntil('\r');
    Board_4LOW.BMP_Temperature=s.toFloat();
    s=myFile.readStringUntil('\r');
    Board_4LOW.BMP_Pressure=s.toFloat();
    s=myFile.readStringUntil('\r');
    Board_4LOW.Light=s.toInt();
    myFile.close();
    }
}


void SD4_HIGH_R(){

  myFile = SD.open("/Data4HIGH.csv");

if(!myFile){
    Serial.println("Failed to open file for reading");
    return;
    }
    else{
        Serial.println(myFile.size()); 
        Serial.println("File is open file for reading");
  
        s=myFile.readStringUntil('\r');
        Board_4HIGH.sensornumber= s.toInt();
        s=myFile.readStringUntil('\r');
        Board_4HIGH.Time = s;
        s=myFile.readStringUntil('\r');
        Board_4HIGH.Temperature=s.toFloat();
        s=myFile.readStringUntil('\r');
        Board_4HIGH.Humidity=s.toFloat();
        s=myFile.readStringUntil('\r');
        Board_4HIGH.BMP_Temperature=s.toFloat();
        s=myFile.readStringUntil('\r');
        Board_4HIGH.BMP_Pressure=s.toFloat();
        s=myFile.readStringUntil('\r');
        Board_4HIGH.Light=s.toInt();
        myFile.close();
    }
}
//##################################################################
void SD5_R(){
 
  myFile = SD.open("/Data5.csv");
    if(!myFile){
    Serial.println("Failed to open file for reading");
    return;
    }
    else{
        Serial.println(myFile.size()); 
        Serial.println("File is open file for reading");
  
        s=myFile.readStringUntil('\r');
        Board_5.sensornumber= s.toInt();
        s=myFile.readStringUntil('\r');
        s.remove(0,1);
        Board_5.Time = s;
        s=myFile.readStringUntil('\r');
        Board_5.Temperature=s.toFloat();
        s=myFile.readStringUntil('\r');
        Board_5.Humidity=s.toFloat();
        s=myFile.readStringUntil('\r');
        Board_5.BMP_Temperature=s.toFloat();
        s=myFile.readStringUntil('\r');
        Board_5.BMP_Pressure=s.toFloat();
        s=myFile.readStringUntil('\r');
        Board_5.Light=s.toInt();
        myFile.close();
    }
}
//##############################################################################

void SD5_PV_R(){
 
  myFile = SD.open("/Data5PV.csv");
    if(!myFile){
    Serial.println("Failed to open file for reading");
    return;
    }
    else{
        Serial.println(myFile.size()); 
        Serial.println("File is open file for reading");
  
        s=myFile.readStringUntil('\r');
        Board_5PV.sensornumber= s.toInt();
        s=myFile.readStringUntil('\r');
        Board_5PV.Time = s;
        s=myFile.readStringUntil('\r');
        Board_5PV.Temperature=s.toFloat();
        s=myFile.readStringUntil('\r');
        Board_5PV.Humidity=s.toFloat();
        s=myFile.readStringUntil('\r');
        Board_5PV.BMP_Temperature=s.toFloat();
        s=myFile.readStringUntil('\r');
        Board_5PV.BMP_Pressure=s.toFloat();
        s=myFile.readStringUntil('\r');
        Board_5PV.Light=s.toInt();
        myFile.close();
    }
}
void SD5_LOW_R(){
myFile = SD.open("/Data5LOW.csv");

if(!myFile){
    Serial.println("Failed to open file for reading");
    return;
}
else{
    Serial.println(myFile.size()); 
    Serial.println("File is open file for reading");
  
    s=myFile.readStringUntil('\r');
    Board_5LOW.sensornumber= s.toInt();
    s=myFile.readStringUntil('\r');
    Board_5LOW.Time = s;
    s=myFile.readStringUntil('\r');
    Board_5LOW.Temperature=s.toFloat();
    s=myFile.readStringUntil('\r');
    Board_5LOW.Humidity=s.toFloat();
    s=myFile.readStringUntil('\r');
    Board_5LOW.BMP_Temperature=s.toFloat();
    s=myFile.readStringUntil('\r');
    Board_5LOW.BMP_Pressure=s.toFloat();
    s=myFile.readStringUntil('\r');
    Board_5LOW.Light=s.toInt();
    myFile.close();
    }
}


void SD5_HIGH_R(){

  myFile = SD.open("/Data5HIGH.csv");

if(!myFile){
    Serial.println("Failed to open file for reading");
    return;
    }
    else{
        Serial.println(myFile.size()); 
        Serial.println("File is open file for reading");
  
        s=myFile.readStringUntil('\r');
        Board_5HIGH.sensornumber= s.toInt();
        s=myFile.readStringUntil('\r');
        Board_5HIGH.Time = s;
        s=myFile.readStringUntil('\r');
        Board_5HIGH.Temperature=s.toFloat();
        s=myFile.readStringUntil('\r');
        Board_5HIGH.Humidity=s.toFloat();
        s=myFile.readStringUntil('\r');
        Board_5HIGH.BMP_Temperature=s.toFloat();
        s=myFile.readStringUntil('\r');
        Board_5HIGH.BMP_Pressure=s.toFloat();
        s=myFile.readStringUntil('\r');
        Board_5HIGH.Light=s.toInt();
        myFile.close();
    }
}
//##################################################################
void SD6_R(){
 
  myFile = SD.open("/Data6.csv");
    if(!myFile){
    Serial.println("Failed to open file for reading");
    return;
    }
    else{
        Serial.println(myFile.size()); 
        Serial.println("File is open file for reading");
  
        s=myFile.readStringUntil('\r');
        Board_6.sensornumber= s.toInt();
        s=myFile.readStringUntil('\r');
        s.remove(0,1);
        Board_6.Time = s;
        s=myFile.readStringUntil('\r');
        Board_6.Temperature=s.toFloat();
        s=myFile.readStringUntil('\r');
        Board_6.Humidity=s.toFloat();
        s=myFile.readStringUntil('\r');
        Board_6.BMP_Temperature=s.toFloat();
        s=myFile.readStringUntil('\r');
        Board_6.BMP_Pressure=s.toFloat();
        s=myFile.readStringUntil('\r');
        Board_6.Light=s.toInt();
        myFile.close();
    }
}
//##############################################################################

void SD6_PV_R(){
 
  myFile = SD.open("/Data6PV.csv");
    if(!myFile){
    Serial.println("Failed to open file for reading");
    return;
    }
    else{
        Serial.println(myFile.size()); 
        Serial.println("File is open file for reading");
  
        s=myFile.readStringUntil('\r');
        Board_6PV.sensornumber= s.toInt();
        s=myFile.readStringUntil('\r');
        Board_6PV.Time = s;
        s=myFile.readStringUntil('\r');
        Board_6PV.Temperature=s.toFloat();
        s=myFile.readStringUntil('\r');
        Board_6PV.Humidity=s.toFloat();
        s=myFile.readStringUntil('\r');
        Board_6PV.BMP_Temperature=s.toFloat();
        s=myFile.readStringUntil('\r');
        Board_6PV.BMP_Pressure=s.toFloat();
        s=myFile.readStringUntil('\r');
        Board_6PV.Light=s.toInt();
        myFile.close();
    }
}
void SD6_LOW_R(){
myFile = SD.open("/Data6LOW.csv");

if(!myFile){
    Serial.println("Failed to open file for reading");
    return;
}
else{
    Serial.println(myFile.size()); 
    Serial.println("File is open file for reading");
  
    s=myFile.readStringUntil('\r');
    Board_6LOW.sensornumber= s.toInt();
    s=myFile.readStringUntil('\r');
    Board_6LOW.Time = s;
    s=myFile.readStringUntil('\r');
    Board_6LOW.Temperature=s.toFloat();
    s=myFile.readStringUntil('\r');
    Board_6LOW.Humidity=s.toFloat();
    s=myFile.readStringUntil('\r');
    Board_6LOW.BMP_Temperature=s.toFloat();
    s=myFile.readStringUntil('\r');
    Board_6LOW.BMP_Pressure=s.toFloat();
    s=myFile.readStringUntil('\r');
    Board_6LOW.Light=s.toInt();
    myFile.close();
    }
}


void SD6_HIGH_R(){

  myFile = SD.open("/Data6HIGH.csv");

if(!myFile){
    Serial.println("Failed to open file for reading");
    return;
    }
    else{
        Serial.println(myFile.size()); 
        Serial.println("File is open file for reading");
  
        s=myFile.readStringUntil('\r');
        Board_6HIGH.sensornumber= s.toInt();
        s=myFile.readStringUntil('\r');
        Board_6HIGH.Time = s;
        s=myFile.readStringUntil('\r');
        Board_6HIGH.Temperature=s.toFloat();
        s=myFile.readStringUntil('\r');
        Board_6HIGH.Humidity=s.toFloat();
        s=myFile.readStringUntil('\r');
        Board_6HIGH.BMP_Temperature=s.toFloat();
        s=myFile.readStringUntil('\r');
        Board_6HIGH.BMP_Pressure=s.toFloat();
        s=myFile.readStringUntil('\r');
        Board_6HIGH.Light=s.toInt();
        myFile.close();
    }
}
//##################################################################
void SD7_R(){
 
  myFile = SD.open("/Data7.csv");
    if(!myFile){
    Serial.println("Failed to open file for reading");
    return;
    }
    else{
        Serial.println(myFile.size()); 
        Serial.println("File is open file for reading");
  
        s=myFile.readStringUntil('\r');
        Board_7.sensornumber= s.toInt();
        s=myFile.readStringUntil('\r');
        s.remove(0,1);
        Board_7.Time = s;
        s=myFile.readStringUntil('\r');
        Board_7.Temperature=s.toFloat();
        s=myFile.readStringUntil('\r');
        Board_7.Humidity=s.toFloat();
        s=myFile.readStringUntil('\r');
        Board_7.BMP_Temperature=s.toFloat();
        s=myFile.readStringUntil('\r');
        Board_7.BMP_Pressure=s.toFloat();
        s=myFile.readStringUntil('\r');
        Board_7.Light=s.toInt();
        myFile.close();
    }
}
//##############################################################################

void SD7_PV_R(){
 
  myFile = SD.open("/Data7PV.csv");
    if(!myFile){
    Serial.println("Failed to open file for reading");
    return;
    }
    else{
        Serial.println(myFile.size()); 
        Serial.println("File is open file for reading");
  
        s=myFile.readStringUntil('\r');
        Board_7PV.sensornumber= s.toInt();
        s=myFile.readStringUntil('\r');
        Board_7PV.Time = s;
        s=myFile.readStringUntil('\r');
        Board_7PV.Temperature=s.toFloat();
        s=myFile.readStringUntil('\r');
        Board_7PV.Humidity=s.toFloat();
        s=myFile.readStringUntil('\r');
        Board_7PV.BMP_Temperature=s.toFloat();
        s=myFile.readStringUntil('\r');
        Board_7PV.BMP_Pressure=s.toFloat();
        s=myFile.readStringUntil('\r');
        Board_7PV.Light=s.toInt();
        myFile.close();
    }
}
void SD7_LOW_R(){
myFile = SD.open("/Data7LOW.csv");

if(!myFile){
    Serial.println("Failed to open file for reading");
    return;
}
else{
    Serial.println(myFile.size()); 
    Serial.println("File is open file for reading");
  
    s=myFile.readStringUntil('\r');
    Board_7LOW.sensornumber= s.toInt();
    s=myFile.readStringUntil('\r');
    Board_7LOW.Time = s;
    s=myFile.readStringUntil('\r');
    Board_7LOW.Temperature=s.toFloat();
    s=myFile.readStringUntil('\r');
    Board_7LOW.Humidity=s.toFloat();
    s=myFile.readStringUntil('\r');
    Board_7LOW.BMP_Temperature=s.toFloat();
    s=myFile.readStringUntil('\r');
    Board_7LOW.BMP_Pressure=s.toFloat();
    s=myFile.readStringUntil('\r');
    Board_7LOW.Light=s.toInt();
    myFile.close();
    }
}


void SD7_HIGH_R(){

  myFile = SD.open("/Data7HIGH.csv");

if(!myFile){
    Serial.println("Failed to open file for reading");
    return;
    }
    else{
        Serial.println(myFile.size()); 
        Serial.println("File is open file for reading");
  
        s=myFile.readStringUntil('\r');
        Board_7HIGH.sensornumber= s.toInt();
        s=myFile.readStringUntil('\r');
        Board_7HIGH.Time = s;
        s=myFile.readStringUntil('\r');
        Board_7HIGH.Temperature=s.toFloat();
        s=myFile.readStringUntil('\r');
        Board_7HIGH.Humidity=s.toFloat();
        s=myFile.readStringUntil('\r');
        Board_7HIGH.BMP_Temperature=s.toFloat();
        s=myFile.readStringUntil('\r');
        Board_7HIGH.BMP_Pressure=s.toFloat();
        s=myFile.readStringUntil('\r');
        Board_7HIGH.Light=s.toInt();
        myFile.close();
    }
}
//##################################################################
void SD8_R(){
 
  myFile = SD.open("/Data8.csv");
    if(!myFile){
    Serial.println("Failed to open file for reading");
    return;
    }
    else{
        Serial.println(myFile.size()); 
        Serial.println("File is open file for reading");
  
        s=myFile.readStringUntil('\r');
        Board_8.sensornumber= s.toInt();
        s=myFile.readStringUntil('\r');
        s.remove(0,1);
        Board_8.Time = s;
        s=myFile.readStringUntil('\r');
        Board_8.Temperature=s.toFloat();
        s=myFile.readStringUntil('\r');
        Board_8.Humidity=s.toFloat();
        s=myFile.readStringUntil('\r');
        Board_8.BMP_Temperature=s.toFloat();
        s=myFile.readStringUntil('\r');
        Board_8.BMP_Pressure=s.toFloat();
        s=myFile.readStringUntil('\r');
        Board_8.Light=s.toInt();
        myFile.close();
    }
}
//##############################################################################

void SD8_PV_R(){
 
  myFile = SD.open("/Data8PV.csv");
    if(!myFile){
    Serial.println("Failed to open file for reading");
    return;
    }
    else{
        Serial.println(myFile.size()); 
        Serial.println("File is open file for reading");
  
        s=myFile.readStringUntil('\r');
        Board_8PV.sensornumber= s.toInt();
        s=myFile.readStringUntil('\r');
        Board_8PV.Time = s;
        s=myFile.readStringUntil('\r');
        Board_8PV.Temperature=s.toFloat();
        s=myFile.readStringUntil('\r');
        Board_8PV.Humidity=s.toFloat();
        s=myFile.readStringUntil('\r');
        Board_8PV.BMP_Temperature=s.toFloat();
        s=myFile.readStringUntil('\r');
        Board_8PV.BMP_Pressure=s.toFloat();
        s=myFile.readStringUntil('\r');
        Board_8PV.Light=s.toInt();
        myFile.close();
    }
}
void SD8_LOW_R(){
myFile = SD.open("/Data8LOW.csv");

if(!myFile){
    Serial.println("Failed to open file for reading");
    return;
}
else{
    Serial.println(myFile.size()); 
    Serial.println("File is open file for reading");
  
    s=myFile.readStringUntil('\r');
    Board_8LOW.sensornumber= s.toInt();
    s=myFile.readStringUntil('\r');
    Board_8LOW.Time = s;
    s=myFile.readStringUntil('\r');
    Board_8LOW.Temperature=s.toFloat();
    s=myFile.readStringUntil('\r');
    Board_8LOW.Humidity=s.toFloat();
    s=myFile.readStringUntil('\r');
    Board_8LOW.BMP_Temperature=s.toFloat();
    s=myFile.readStringUntil('\r');
    Board_8LOW.BMP_Pressure=s.toFloat();
    s=myFile.readStringUntil('\r');
    Board_8LOW.Light=s.toInt();
    myFile.close();
    }
}


void SD8_HIGH_R(){

  myFile = SD.open("/Data8HIGH.csv");

if(!myFile){
    Serial.println("Failed to open file for reading");
    return;
    }
    else{
        Serial.println(myFile.size()); 
        Serial.println("File is open file for reading");
  
        s=myFile.readStringUntil('\r');
        Board_8HIGH.sensornumber= s.toInt();
        s=myFile.readStringUntil('\r');
        Board_8HIGH.Time = s;
        s=myFile.readStringUntil('\r');
        Board_8HIGH.Temperature=s.toFloat();
        s=myFile.readStringUntil('\r');
        Board_8HIGH.Humidity=s.toFloat();
        s=myFile.readStringUntil('\r');
        Board_8HIGH.BMP_Temperature=s.toFloat();
        s=myFile.readStringUntil('\r');
        Board_8HIGH.BMP_Pressure=s.toFloat();
        s=myFile.readStringUntil('\r');
        Board_8HIGH.Light=s.toInt();
        myFile.close();
    }
}
//##################################################################

void SD1(){
     auto filename="/Data1.csv";   
    auto myFile = SD.open(filename, FILE_WRITE);
    if(myFile){
        myFile.println(Board_1.sensornumber);
       
        myFile.println(Board_1.Time);
       
        myFile.println(Board_1.Temperature);
       
        myFile.println(Board_1.Humidity);
       
        myFile.println(Board_1.BMP_Temperature);
       
        myFile.println(Board_1.BMP_Pressure);
       
        myFile.println(Board_1.Light);
        myFile.close();
        Serial.println("Done");
    }
    else{
        Serial.println("Error opening Data1.csv");
    }
}
void SD1_PV(){
     auto filename="/Data1PV.csv";   
    auto myFile = SD.open(filename, FILE_WRITE);
    if(myFile){
        myFile.println(Board_1PV .sensornumber);
       
        myFile.println(Board_1PV.Time);
       
        myFile.println(Board_1PV.Temperature);
       
        myFile.println(Board_1PV.Humidity);
       
        myFile.println(Board_1PV.BMP_Temperature);
       
        myFile.println(Board_1PV.BMP_Pressure);
       
        myFile.println(Board_1PV.Light);
        myFile.close();
        Serial.println("Done");
    }
    else{
        Serial.println("Error opening Data1PV.csv");
    }
}
void SD1_LOW(){
     auto filename="/Data1LOW.csv";   
    auto myFile = SD.open(filename, FILE_WRITE);
    if(myFile){
        myFile.println(Board_1LOW .sensornumber);
       
        myFile.println(Board_1LOW.Time);
       
        myFile.println(Board_1LOW.Temperature);
       
        myFile.println(Board_1LOW.Humidity);
       
        myFile.println(Board_1LOW.BMP_Temperature);
       
        myFile.println(Board_1LOW.BMP_Pressure);
       
        myFile.println(Board_1LOW.Light);
        myFile.close();
        Serial.println("Done");
    }
    else{
        Serial.println("Error opening Data1LOW.csv");
    }
}
void SD1_HIGH(){
     auto filename="/Data1HIGH.csv";   
    auto myFile = SD.open(filename, FILE_WRITE);
    if(myFile){
        myFile.println(Board_1HIGH.sensornumber);
       
        myFile.println(Board_1HIGH.Time);
       
        myFile.println(Board_1HIGH.Temperature);
       
        myFile.println(Board_1HIGH.Humidity);
       
        myFile.println(Board_1HIGH.BMP_Temperature);
       
        myFile.println(Board_1HIGH.BMP_Pressure);
       
        myFile.println(Board_1HIGH.Light);
        myFile.close();
        Serial.println("Done");
    }
    else{
        Serial.println("Error opening Data1PV.csv");
    }
}

//##############################################################################

void SD2(){
     auto filename="/Data2.csv";   
    auto myFile = SD.open(filename, FILE_WRITE);
    if(myFile){
        myFile.println(Board_2.sensornumber);
       
        myFile.println(Board_2.Time);
       
        myFile.println(Board_2.Temperature);
       
        myFile.println(Board_2.Humidity);
       
        myFile.println(Board_2.BMP_Temperature);
       
        myFile.println(Board_2.BMP_Pressure);
       
        myFile.println(Board_2.Light);
        myFile.close();
        Serial.println("Done");
    }
    else{
        Serial.println("Error opening Data1.csv");
    }
}
void SD2_PV(){
     auto filename="/Data2PV.csv";   
    auto myFile = SD.open(filename, FILE_WRITE);
    if(myFile){
        myFile.println(Board_2PV .sensornumber);
       
        myFile.println(Board_2PV.Time);
       
        myFile.println(Board_2PV.Temperature);
       
        myFile.println(Board_2PV.Humidity);
       
        myFile.println(Board_2PV.BMP_Temperature);
       
        myFile.println(Board_2PV.BMP_Pressure);
       
        myFile.println(Board_2PV.Light);
        myFile.close();
        Serial.println("Done");
    }
    else{
        Serial.println("Error opening Data2PV.csv");
    }
}
void SD2_LOW(){
     auto filename="/Data2LOW.csv";   
    auto myFile = SD.open(filename, FILE_WRITE);
    if(myFile){
        myFile.println(Board_2LOW .sensornumber);
       
        myFile.println(Board_2LOW.Time);
       
        myFile.println(Board_2LOW.Temperature);
       
        myFile.println(Board_2LOW.Humidity);
       
        myFile.println(Board_2LOW.BMP_Temperature);
       
        myFile.println(Board_2LOW.BMP_Pressure);
       
        myFile.println(Board_2LOW.Light);
        myFile.close();
        Serial.println("Done");
    }
    else{
        Serial.println("Error opening Data2LOW.csv");
    }
}
void SD2_HIGH(){
     auto filename="/Data2HIGH.csv";   
    auto myFile = SD.open(filename, FILE_WRITE);
    if(myFile){
        myFile.println(Board_2HIGH.sensornumber);
       
        myFile.println(Board_2HIGH.Time);
       
        myFile.println(Board_2HIGH.Temperature);
       
        myFile.println(Board_2HIGH.Humidity);
       
        myFile.println(Board_2HIGH.BMP_Temperature);
       
        myFile.println(Board_2HIGH.BMP_Pressure);
       
        myFile.println(Board_2HIGH.Light);
        myFile.close();
        Serial.println("Done");
    }
    else{
        Serial.println("Error opening Data2HIGH.csv");
    }
}

//##############################################################################




void SD3(){ 
    auto filename="/Data3.csv";   
    auto myFile = SD.open(filename, FILE_WRITE);
    if(myFile){
        myFile.println(Board_3.sensornumber);
       
        myFile.println(Board_3.Time);
       
        myFile.println(Board_3.Temperature);
       
        myFile.println(Board_3.Humidity);
       
        myFile.println(Board_3.BMP_Temperature);
       
        myFile.println(Board_3.BMP_Pressure);
       
        myFile.println(Board_3.Light);
        myFile.close();
        Serial.println("Done");
    }
    else{
        Serial.println("Error opening Data1.csv");
    }
}
void SD3_PV(){
     auto filename="/Data3PV.csv";   
    auto myFile = SD.open(filename, FILE_WRITE);
    if(myFile){
        myFile.println(Board_3PV .sensornumber);
       
        myFile.println(Board_3PV.Time);
       
        myFile.println(Board_3PV.Temperature);
       
        myFile.println(Board_3PV.Humidity);
       
        myFile.println(Board_3PV.BMP_Temperature);
       
        myFile.println(Board_3PV.BMP_Pressure);
       
        myFile.println(Board_3PV.Light);
        myFile.close();
        Serial.println("Done");
    }
    else{
        Serial.println("Error opening Data3PV.csv");
    }
}
void SD3_LOW(){
     auto filename="/Data3LOW.csv";   
    auto myFile = SD.open(filename, FILE_WRITE);
    if(myFile){
        myFile.println(Board_3LOW .sensornumber);
       
        myFile.println(Board_3LOW.Time);
       
        myFile.println(Board_3LOW.Temperature);
       
        myFile.println(Board_3LOW.Humidity);
       
        myFile.println(Board_3LOW.BMP_Temperature);
       
        myFile.println(Board_3LOW.BMP_Pressure);
       
        myFile.println(Board_3LOW.Light);
        myFile.close();
        Serial.println("Done");
    }
    else{
        Serial.println("Error opening Data3LOW.csv");
    }
}
void SD3_HIGH(){
     auto filename="/Data3HIGH.csv";   
    auto myFile = SD.open(filename, FILE_WRITE);
    if(myFile){
        myFile.println(Board_3HIGH.sensornumber);
       
        myFile.println(Board_3HIGH.Time);
       
        myFile.println(Board_3HIGH.Temperature);
       
        myFile.println(Board_3HIGH.Humidity);
       
        myFile.println(Board_3HIGH.BMP_Temperature);
       
        myFile.println(Board_3HIGH.BMP_Pressure);
       
        myFile.println(Board_3HIGH.Light);
        myFile.close();
        Serial.println("Done");
    }
    else{
        Serial.println("Error opening Data3HIGH.csv");
    }
}

//##############################################################################


void SD4(){
     auto filename="/Data4.csv";   
    auto myFile = SD.open(filename, FILE_WRITE);
    if(myFile){
        myFile.println(Board_4.sensornumber);
       
        myFile.println(Board_4.Time);
       
        myFile.println(Board_4.Temperature);
       
        myFile.println(Board_4.Humidity);
       
        myFile.println(Board_4.BMP_Temperature);
       
        myFile.println(Board_4.BMP_Pressure);
       
        myFile.println(Board_4.Light);
        myFile.close();
        Serial.println("Done");
    }
    else{
        Serial.println("Error opening Data1.csv");
    }
}
void SD4_PV(){
     auto filename="/Data4PV.csv";   
    auto myFile = SD.open(filename, FILE_WRITE);
    if(myFile){
        myFile.println(Board_4PV .sensornumber);
       
        myFile.println(Board_4PV.Time);
       
        myFile.println(Board_4PV.Temperature);
       
        myFile.println(Board_4PV.Humidity);
       
        myFile.println(Board_4PV.BMP_Temperature);
       
        myFile.println(Board_4PV.BMP_Pressure);
       
        myFile.println(Board_4PV.Light);
        myFile.close();
        Serial.println("Done");
    }
    else{
        Serial.println("Error opening Data4PV.csv");
    }
}
void SD4_LOW(){
     auto filename="/Data4LOW.csv";   
    auto myFile = SD.open(filename, FILE_WRITE);
    if(myFile){
        myFile.println(Board_4LOW .sensornumber);
       
        myFile.println(Board_4LOW.Time);
       
        myFile.println(Board_4LOW.Temperature);
       
        myFile.println(Board_4LOW.Humidity);
       
        myFile.println(Board_4LOW.BMP_Temperature);
       
        myFile.println(Board_4LOW.BMP_Pressure);
       
        myFile.println(Board_4LOW.Light);
        myFile.close();
        Serial.println("Done");
    }
    else{
        Serial.println("Error opening Data4LOW.csv");
    }
}
void SD4_HIGH(){
     auto filename="/Data4HIGH.csv";   
    auto myFile = SD.open(filename, FILE_WRITE);
    if(myFile){
        myFile.println(Board_4HIGH.sensornumber);
       
        myFile.println(Board_4HIGH.Time);
       
        myFile.println(Board_4HIGH.Temperature);
       
        myFile.println(Board_4HIGH.Humidity);
       
        myFile.println(Board_4HIGH.BMP_Temperature);
       
        myFile.println(Board_4HIGH.BMP_Pressure);
       
        myFile.println(Board_4HIGH.Light);
        myFile.close();
        Serial.println("Done");
    }
    else{
        Serial.println("Error opening Data4HIGH.csv");
    }
}

//##############################################################################

void SD5(){
     auto filename="/Data5.csv";   
    auto myFile = SD.open(filename, FILE_WRITE);
    if(myFile){
        myFile.println(Board_5.sensornumber);
       
        myFile.println(Board_5.Time);
       
        myFile.println(Board_5.Temperature);
       
        myFile.println(Board_5.Humidity);
       
        myFile.println(Board_5.BMP_Temperature);
       
        myFile.println(Board_5.BMP_Pressure);
       
        myFile.println(Board_5.Light);
        myFile.close();
        Serial.println("Done");
    }
    else{
        Serial.println("Error opening Data1.csv");
    }
} 
void SD5_PV(){
     auto filename="/Data5PV.csv";   
    auto myFile = SD.open(filename, FILE_WRITE);
    if(myFile){
        myFile.println(Board_5PV .sensornumber);
       
        myFile.println(Board_5PV.Time);
       
        myFile.println(Board_5PV.Temperature);
       
        myFile.println(Board_5PV.Humidity);
       
        myFile.println(Board_5PV.BMP_Temperature);
       
        myFile.println(Board_5PV.BMP_Pressure);
       
        myFile.println(Board_5PV.Light);
        myFile.close();
        Serial.println("Done");
    }
    else{
        Serial.println("Error opening Data5PV.csv");
    }
}
void SD5_LOW(){
     auto filename="/Data5LOW.csv";   
    auto myFile = SD.open(filename, FILE_WRITE);
    if(myFile){
        myFile.println(Board_5LOW .sensornumber);
       
        myFile.println(Board_5LOW.Time);
       
        myFile.println(Board_5LOW.Temperature);
       
        myFile.println(Board_5LOW.Humidity);
       
        myFile.println(Board_5LOW.BMP_Temperature);
       
        myFile.println(Board_5LOW.BMP_Pressure);
       
        myFile.println(Board_5LOW.Light);
        myFile.close();
        Serial.println("Done");
    }
    else{
        Serial.println("Error opening Data5LOW.csv");
    }
}
void SD5_HIGH(){
     auto filename="/Data5HIGH.csv";   
    auto myFile = SD.open(filename, FILE_WRITE);
    if(myFile){
        myFile.println(Board_5HIGH.sensornumber);
       
        myFile.println(Board_5HIGH.Time);
       
        myFile.println(Board_5HIGH.Temperature);
       
        myFile.println(Board_5HIGH.Humidity);
       
        myFile.println(Board_5HIGH.BMP_Temperature);
       
        myFile.println(Board_5HIGH.BMP_Pressure);
       
        myFile.println(Board_5HIGH.Light);
        myFile.close();
        Serial.println("Done");
    }
    else{
        Serial.println("Error opening Data5HIGH.csv");
    }
}

//##############################################################################

void SD6(){
     auto filename="/Data6.csv";   
    auto myFile = SD.open(filename, FILE_WRITE);
    if(myFile){
        myFile.println(Board_6.sensornumber);
       
        myFile.println(Board_6.Time);
       
        myFile.println(Board_6.Temperature);
       
        myFile.println(Board_6.Humidity);
       
        myFile.println(Board_6.BMP_Temperature);
       
        myFile.println(Board_6.BMP_Pressure);
       
        myFile.println(Board_6.Light);
        myFile.close();
        Serial.println("Done");
    }
    else{
        Serial.println("Error opening Data1.csv");
    }
}
void SD6_PV(){
     auto filename="/Data6PV.csv";   
    auto myFile = SD.open(filename, FILE_WRITE);
    if(myFile){
        myFile.println(Board_6PV .sensornumber);
       
        myFile.println(Board_6PV.Time);
       
        myFile.println(Board_6PV.Temperature);
       
        myFile.println(Board_6PV.Humidity);
       
        myFile.println(Board_6PV.BMP_Temperature);
       
        myFile.println(Board_6PV.BMP_Pressure);
       
        myFile.println(Board_6PV.Light);
        myFile.close();
        Serial.println("Done");
    }
    else{
        Serial.println("Error opening Data6PV.csv");
    }
}
void SD6_LOW(){
     auto filename="/Data6LOW.csv";   
    auto myFile = SD.open(filename, FILE_WRITE);
    if(myFile){
        myFile.println(Board_6LOW .sensornumber);
       
        myFile.println(Board_6LOW.Time);
       
        myFile.println(Board_6LOW.Temperature);
       
        myFile.println(Board_6LOW.Humidity);
       
        myFile.println(Board_6LOW.BMP_Temperature);
       
        myFile.println(Board_6LOW.BMP_Pressure);
       
        myFile.println(Board_6LOW.Light);
        myFile.close();
        Serial.println("Done");
    }
    else{
        Serial.println("Error opening Data6LOW.csv");
    }
}
void SD6_HIGH(){
     auto filename="/Data6HIGH.csv";   
    auto myFile = SD.open(filename, FILE_WRITE);
    if(myFile){
        myFile.println(Board_6HIGH.sensornumber);
       
        myFile.println(Board_6HIGH.Time);
       
        myFile.println(Board_6HIGH.Temperature);
       
        myFile.println(Board_6HIGH.Humidity);
       
        myFile.println(Board_6HIGH.BMP_Temperature);
       
        myFile.println(Board_6HIGH.BMP_Pressure);
       
        myFile.println(Board_6HIGH.Light);
        myFile.close();
        Serial.println("Done");
    }
    else{
        Serial.println("Error opening Data6HIGH.csv");
    }
}

//##############################################################################

void SD7(){
     auto filename="/Data7.csv";   
    auto myFile = SD.open(filename, FILE_WRITE);
    if(myFile){
        myFile.println(Board_7.sensornumber);
       
        myFile.println(Board_7.Time);
       
        myFile.println(Board_7.Temperature);
       
        myFile.println(Board_7.Humidity);
       
        myFile.println(Board_7.BMP_Temperature);
       
        myFile.println(Board_7.BMP_Pressure);
       
        myFile.println(Board_7.Light);
        myFile.close();
        Serial.println("Done");
    }
    else{
        Serial.println("Error opening Data1.csv");
    }
}
void SD7_PV(){
     auto filename="/Data7PV.csv";   
    auto myFile = SD.open(filename, FILE_WRITE);
    if(myFile){
        myFile.println(Board_7PV .sensornumber);
       
        myFile.println(Board_7PV.Time);
       
        myFile.println(Board_7PV.Temperature);
       
        myFile.println(Board_7PV.Humidity);
       
        myFile.println(Board_7PV.BMP_Temperature);
       
        myFile.println(Board_7PV.BMP_Pressure);
       
        myFile.println(Board_7PV.Light);
        myFile.close();
        Serial.println("Done");
    }
    else{
        Serial.println("Error opening Data7PV.csv");
    }
}
void SD7_LOW(){
     auto filename="/Data7LOW.csv";   
    auto myFile = SD.open(filename, FILE_WRITE);
    if(myFile){
        myFile.println(Board_7LOW .sensornumber);
       
        myFile.println(Board_7LOW.Time);
       
        myFile.println(Board_7LOW.Temperature);
       
        myFile.println(Board_7LOW.Humidity);
       
        myFile.println(Board_7LOW.BMP_Temperature);
       
        myFile.println(Board_7LOW.BMP_Pressure);
       
        myFile.println(Board_7LOW.Light);
        myFile.close();
        Serial.println("Done");
    }
    else{
        Serial.println("Error opening Data7LOW.csv");
    }
}
void SD7_HIGH(){
     auto filename="/Data7HIGH.csv";   
    auto myFile = SD.open(filename, FILE_WRITE);
    if(myFile){
        myFile.println(Board_7HIGH.sensornumber);
       
        myFile.println(Board_7HIGH.Time);
       
        myFile.println(Board_7HIGH.Temperature);
       
        myFile.println(Board_7HIGH.Humidity);
       
        myFile.println(Board_7HIGH.BMP_Temperature);
       
        myFile.println(Board_7HIGH.BMP_Pressure);
       
        myFile.println(Board_7HIGH.Light);
        myFile.close();
        Serial.println("Done");
    }
    else{
        Serial.println("Error opening Data7HIGH.csv");
    }
}

//##############################################################################

void SD8(){
     auto filename="/Data8.csv";   
    auto myFile = SD.open(filename, FILE_WRITE);
    if(myFile){
        myFile.println(Board_8.sensornumber);
       
        myFile.println(Board_8.Time);
       
        myFile.println(Board_8.Temperature);
       
        myFile.println(Board_8.Humidity);
       
        myFile.println(Board_8.BMP_Temperature);
       
        myFile.println(Board_8.BMP_Pressure);
       
        myFile.println(Board_8.Light);
        myFile.close();
        Serial.println("Done");
    }
    else{
        Serial.println("Error opening Data1.csv");
    }
    Heating_On();
 }
void SD8_PV(){
     auto filename="/Data8PV.csv";   
    auto myFile = SD.open(filename, FILE_WRITE);
    if(myFile){
        myFile.println(Board_8PV .sensornumber);
       
        myFile.println(Board_8PV.Time);
       
        myFile.println(Board_8PV.Temperature);
       
        myFile.println(Board_8PV.Humidity);
       
        myFile.println(Board_8PV.BMP_Temperature);
       
        myFile.println(Board_8PV.BMP_Pressure);
       
        myFile.println(Board_8PV.Light);
        myFile.close();
        Serial.println("Done");
    }
    else{
        Serial.println("Error opening Data8PV.csv");
    }
}
void SD8_LOW(){
     auto filename="/Data8LOW.csv";   
    auto myFile = SD.open(filename, FILE_WRITE);
    if(myFile){
        myFile.println(Board_8LOW .sensornumber);
       
        myFile.println(Board_8LOW.Time);
       
        myFile.println(Board_8LOW.Temperature);
       
        myFile.println(Board_8LOW.Humidity);
       
        myFile.println(Board_8LOW.BMP_Temperature);
       
        myFile.println(Board_8LOW.BMP_Pressure);
       
        myFile.println(Board_8LOW.Light);
        myFile.close();
        Serial.println("Done");
    }
    else{
        Serial.println("Error opening Data8LOW.csv");
    }
}
void SD8_HIGH(){
     auto filename="/Data8HIGH.csv";   
    auto myFile = SD.open(filename, FILE_WRITE);
    if(myFile){
        myFile.println(Board_8HIGH.sensornumber);
       
        myFile.println(Board_8HIGH.Time);
       
        myFile.println(Board_8HIGH.Temperature);
       
        myFile.println(Board_8HIGH.Humidity);
       
        myFile.println(Board_8HIGH.BMP_Temperature);
       
        myFile.println(Board_8HIGH.BMP_Pressure);
       
        myFile.println(Board_8HIGH.Light);
        myFile.close();
        Serial.println("Done");
    }
    else{
        Serial.println("Error opening Data8HIGH.csv");
    }
}

//##############################################################################

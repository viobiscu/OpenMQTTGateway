#pragma once
#ifndef SYNCHRO_H
#define SYNCHRO_H

#include <LiquidCrystal.h>  // include the library code

#define OMG_VERSION "1.0"
#define ENV_NAME "WiSensors"

#define Gateway_Name "SensorsReportGateway"
#define Gateway_Short_Name "SRG"
#define Base_Topic "Synchro/"

#define MQTT_USER "mqtt_name"
#define MQTT_PASS "mqtt_p@$$w0rd"
#define MQTT_SERVER "mqtt1.sensorsreport.com"
#define MQTT_PORT "1883"
#define API_KEY "000-001"

#define DEFAULT_LOW_POWER_MODE -1

#define USE_MAC_AS_GATEWAY_NAME true
#define NO_INT_TEMP_READING true

#define WifiPower                 WIFI_POWER_11dBm //When using an ESP32

#define will_Topic "/LWT"
#define will_Message "{\"online\":false}"
#define Gateway_AnnouncementMsg "{\"online\":true}"


#define ZgatewayBT     "BT"       //ESP8266, ESP32

/* HardWare WiSensors*/
#define LED_GREEN 21
#define LED_RED 22
#define BUTTON 25

#define LCD_RST 19
#define LCD_EN 18
#define LCD_D4 23
#define LCD_D5 13
#define LCD_D6 14
#define LCD_D7 16
#define LCD_ON 17

#define LCD_BACK_LIGHT 27
#define DC_ON 26


///////////////////
#  define AttemptBLEConnect false
#  define AdaptiveBLEScan false
#  define PublishOnlySensors true 
///////////////////






void WiSensor_ini();


char lcdLine1[17] ;  //the string to print on the LCD
char lcdLine2[17] ;  //the string to print on the LCD

  //LCD
	LiquidCrystal lcd(LCD_RST, LCD_EN, LCD_D4, LCD_D5, LCD_D6, LCD_D7);


#endif
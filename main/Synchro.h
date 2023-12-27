#ifndef SYNCHRO_H
#define SYNCHRO_H

#define OMG_VERSION "1.0"

#define Gateway_Name "SensorsReportGateway"
#define Gateway_Short_Name "SRG"
#define Base_Topic "Synchro/"

#define MQTT_USER "mqtt_name"
#define MQTT_PASS "mqtt_p@$$w0rd"
#define MQTT_SERVER "mqtt1.sensorsreport.com"
#define MQTT_PORT "1883"
#define DEFAULT_LOW_POWER_MODE -1

#define USE_MAC_AS_GATEWAY_NAME
#define NO_INT_TEMP_READING true

#define WifiPower                 WIFI_POWER_11dBm //When using an ESP32

#define will_Topic "/LWT"


#define ZgatewayBT     "BT"       //ESP8266, ESP32


#define LED_GREEN 21
#define LED_RED 22

#define BUTTON 25


///////////////////
#  define AttemptBLEConnect false

#  define PublishOnlySensors true 
///////////////////

#endif
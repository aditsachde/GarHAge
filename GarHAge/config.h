/*   
 * GarHAge
 * a Home-Automation-friendly ESP8266-based MQTT Garage Door Controller
 * Licensed under the MIT License, Copyright (c) 2017 marthoc
 * 
 * User-configurable Parameters 
*/

// Wifi Parameters

#define WIFI_SSID "your-ssid-name"
#define WIFI_PASSWORD "your-ssid-password"

// Static IP Parameters

#define STATIC_IP false
#define IP 192,168,1,100
#define GATEWAY 192,168,1,1
#define SUBNET 255,255,255,0

// MQTT Parameters

#define MQTT_BROKER "w.x.y.z"
#define MQTT_CLIENTID "GarHAge"
#define MQTT_USERNAME "your-mqtt-username"
#define MQTT_PASSWORD "your-mqtt-password"

// Relay Parameters

#define ACTIVE_HIGH_RELAY true

// Door 1 Parameters

#define DOOR1_ALIAS "Door 1"
#define MQTT_DOOR1_ACTION_TOPIC "garage/action"
#define MQTT_DOOR1_STATUS_TOPIC "garage/status"
#define DOOR1_OPEN_PIN D2
#define DOOR1_CLOSE_PIN D2
#define DOOR1_STATUS_PIN D5
#define DOOR1_STATUS_SWITCH_LOGIC "NO"


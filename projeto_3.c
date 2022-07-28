#include<Servo.h>

#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>


#define BLYNK_TEMPLATE_ID "templateID"
#define BLYNK_DEVICE_NAME "divice_name "
#define BLYNK_AUTH_TOKEN "yourauthtoken"


Servo servo_1;

char auth[] = BLYNK_AUTH_TOKEN;
char ssid[] = "ssid";
char pass[] = "password";

BLYNK_WRITE(V1){
  digitalWrite (D8, param.asInt());
}


void setup()
{
  pinMode(D8,OUTPUT);
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass,"blynk.cloud",80);
}

void loop()
{
  Blynk.run();
}

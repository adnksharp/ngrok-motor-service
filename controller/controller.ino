#define LED 2
#include "web.h"
#include "keys.h"

void setup() 
{
  Serial.begin(115200);
  pinMode(LED, OUTPUT);

  WiFi.begin(SSID, PASS);
  while(WiFi.status() != WL_CONNECTED)
  {
    delay(500);
    digitalWrite(LED, !digitalRead(LED));
  }
  digitalWrite(LED, 0);
  //Serial.println(WiFi.localIP().toString());
}

void loop() {}

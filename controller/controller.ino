#include "web.h"
#include "keys.h"

byte LED=11;

String endpoint [2] = {
  "/enc_pos",
  "/motor_cmd"
};

double position = 0.0, command = 0.0;

void setup() 
{
  Serial.begin(115200);
  pinMode(LED, OUTPUT);

  WiFi.begin(SSID, PASS);
  while(WiFi.status() != WL_CONNECTED)
  {
    delay(25);
    digitalWrite(LED, !digitalRead(LED));
  }
  digitalWrite(LED, 0);
  //Serial.println(WiFi.localIP().toString());
}

void loop() 
{
  position += float(random(3) - 1) / 10;
  get(server + endpoint[1], &command);
  post(server + endpoint[0], &position);
  delay(100);
}

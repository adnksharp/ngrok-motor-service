#include <Arduino.h>
#include <WiFi.h>
#include <HTTPClient.h>
#include <Arduino_JSON.h>

void get(String uri, double *req);
//void post(String uri, float msg);

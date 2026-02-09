#include "web.h"

extern byte LED;

void get(String uri, double *req)
{
	WiFiClientSecure client;
	client.setInsecure();
	HTTPClient http;
	String read = "{}";

	http.begin(client, uri);

	if (http.GET() > 0)
	{
		read = http.getString();
		JSONVar obj = JSON.parse(read); 
		JSONVar keys = obj.keys();
		*req = double(obj[keys[0]]);
	}
	http.end();
}

void post(String uri, double *req)
{
	WiFiClientSecure client;
	client.setInsecure();
	HTTPClient http;

	http.begin(client, uri);
	http.addHeader("Content-Type", "application/json");
	String msg = "{\"id\":\"" + WiFi.localIP().toString() +
		"\",\"position\":" + String(*req) + "}";

	if (http.POST(msg) != 200)
		digitalWrite(LED, 1);
	else
		digitalWrite(LED, 0);
	http.end();
}

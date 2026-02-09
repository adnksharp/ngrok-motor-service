#include "web.h"

void get (String uri, double *req)
{
	WiFiClient client;
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

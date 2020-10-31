#include <ESP8266WiFi.h>
#include "DHT.h"
#define DHTPIN D4
#define RELAYPIN 14
#define DHTTYPE DHT22
 
const char *ssid = "StormFiber";
const char *password = "wlanddbb1f";

WiFiServer server(80);
WiFiClient client;

float temp;
float humid = 0;
DHT dht(DHTPIN, DHTTYPE);

void setup() {
  // put your setup code here, to run once:
  pinMode(RELAYPIN, OUTPUT);
  Serial.begin(9600);
  dht.begin();

  Serial.printf("Connecting to %s ", ssid);
  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED)
  {
    delay(500);
    Serial.print(".");
  }
  Serial.println(" connected");

  server.begin();
}

// prepare a web page to be send to a client (web browser)
String prepareHtmlPage() {
  String htmlPage =
     String("HTTP/1.1 200 OK\r\n") +
            "Content-Type: text/html\r\n" +
            "Connection: close\r\n" +  // the connection will be closed after completion of the response
            "Refresh: 5\r\n" +  // refresh the page automatically every 5 sec
            "\r\n" +
            "<!DOCTYPE HTML>" +
            "<html>" +
            "<h1>Temperature:  " + temp + "</h1>" +
            "<h1>Humidity:  " + humid + "</h1>" +
            "</html>" +
            "\r\n";
  return htmlPage;
}

void loop() {
  temp = dht.readTemperature();
  humid = dht.readHumidity();

  if (humid < 70) {
    digitalWrite(RELAYPIN, HIGH);
  }
  if (humid > 80) {
    digitalWrite(RELAYPIN, LOW);
  }

  WiFiClient client = server.available();
  // wait for a client (web browser) to connect
  if (client)
  {
    Serial.println("\n[Client connected]");
    while (client.connected())
    {
      // read line by line what the client (web browser) is requesting
      if (client.available())
      {
        String line = client.readStringUntil('\r');
        Serial.print(line);
        // wait for end of client's request, that is marked with an empty line
        if (line.length() == 1 && line[0] == '\n')
        {
          client.println(prepareHtmlPage());
          break;
        }
      }
    }
    delay(2000); // give the web browser time to receive the data

    // close the connection:
    client.stop();
    Serial.println("[Client disonnected]");
  }

}

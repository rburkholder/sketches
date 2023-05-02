/*
 2023/05/01 Raymond Burkholder
 page 49, 1787282627 2021 ESP8266 Home Automation Projects Leverage the power of this tiny WiFi chip to build exciting smart home projects
 Connecting ESP8266 to Wi-Fi
*/

#include <ESP8266WiFi.h>

const char* ssid = "burkholder";
const char* password = "margaret";


void setup() {
  Serial.begin(115200);
  delay(10);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(14, OUTPUT);
  pinMode(15, OUTPUT);
  digitalWrite(12,LOW);
  digitalWrite(13,LOW);
  digitalWrite(14,LOW);
  digitalWrite(15,LOW);

  Serial.println();
  Serial.println();
  Serial.print("Connecting to ");
  Serial.println(ssid);
  WiFi.begin(ssid, password);

while (WiFi.status() != WL_CONNECTED) {
  delay(500);
  Serial.print(".");
}

  Serial.println("");
  Serial.println("WiFi connected");
  Serial.println("IP address: ");
  Serial.println(WiFi.localIP());
}

void loop()
{
  if(WiFi.status() == WL_CONNECTED)
  digitalWrite(12, HIGH);
}


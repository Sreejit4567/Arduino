#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
char auth[] = "j8rgqtFWhzfiBp79r8TlqT6YDYL8HY-9";
char ssid[] = "WIN-520LMDK6O3Q 5289";
char pass[] = "1234567890";
void setup()
{
Serial.begin(115200);
Blynk.begin(auth, ssid, pass);
}
void loop()
{
Blynk.run();
}

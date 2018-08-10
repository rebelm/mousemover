#include <cmdline_defs.h>
#include <ProTrinketMouse.h>
#include <ProTrinketMouseC.h>
#include <usbconfig.h>
 
int led = 13;

void setup() {
  TrinketMouse.begin();
  pinMode(led, OUTPUT);
}

void blink() {
  digitalWrite(led, HIGH); 
  delay(100);
  digitalWrite(led, LOW); 
}

void wiggle() {
  blink();
  TrinketMouse.move(10, 0, 0, 0);
  delay(100);
  TrinketMouse.move(-10, 0, 0, 0);
}

void loop() {
  wiggle();
  delay(60000);   // 1 minutes
}


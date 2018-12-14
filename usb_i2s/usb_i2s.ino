#include <Audio.h>
#include <Wire.h>
#include <SPI.h>
#include <SerialFlash.h>

// GUItool: begin automatically generated code
AudioInputUSB            usb1;           //xy=465,429
AudioOutputI2S           i2s1;           //xy=826,421
AudioConnection          patchCord1(usb1, 0, i2s1, 0);
AudioConnection          patchCord2(usb1, 1, i2s1, 1);
// GUItool: end automatically generated code

void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
  digitalWrite(LED_BUILTIN, LOW);
  AudioMemory(12);
}

void loop()
{
  
}


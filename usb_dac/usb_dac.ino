#include <Audio.h>
#include <Wire.h>
#include <SPI.h>
#include <SerialFlash.h>

// GUItool: begin automatically generated code
AudioInputUSB            usb1;           //xy=537,303
AudioOutputAnalogStereo  dacs1;          //xy=744,302
AudioConnection          patchCord1(usb1, 0, dacs1, 0);
AudioConnection          patchCord2(usb1, 1, dacs1, 1);
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


#include <Audio.h>
#include <Wire.h>
#include <SPI.h>
#include <SerialFlash.h>

// GUItool: begin automatically generated code
AudioPlayQueue           queue1;         //xy=630,302
AudioPlayQueue           queue2;         //xy=640,356
AudioOutputAnalogStereo  dacs1;          //xy=825,305
AudioConnection          patchCord1(queue1, 0, dacs1, 0);
AudioConnection          patchCord2(queue2, 0, dacs1, 1);
// GUItool: end automatically generated code

void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
  digitalWrite(LED_BUILTIN, LOW);
  AudioMemory(12);
  pinMode(A13, INPUT);
}

int16_t sine[] =
{
  8192,8393,8594,8795,8995,9195,9394,9593,9790,9987,10182,10377,10570,10762,10952,11140,11327,11512,11695,11875,12054,12230,12404,12575,12743,12909,13072,13232,13389,13543,13693,13841,13985,14125,14262,14395,14525,14650,14772,14890,15003,15113,15219,15320,
  15417,15509,15597,15681,15760,15835,15905,15971,16031,16087,16138,16185,16227,16263,16295,16322,16345,16362,16374,16382,16384,16382,16374,16362,16345,16322,16295,16263,16227,16185,16138,16087,16031,15971,15905,15835,15760,15681,15597,15509,15417,15320,
  15219,15113,15003,14890,14772,14650,14525,14395,14262,14125,13985,13841,13693,13543,13389,13232,13072,12909,12743,12575,12404,12230,12054,11875,11695,11512,11327,11140,10952,10762,10570,10377,10182,9987,9790,9593,9394,9195,8995,8795,8594,8393,8192,7991,
  7790,7589,7389,7189,6990,6791,6594,6397,6202,6007,5814,5622,5432,5244,5057,4872,4689,4509,4330,4154,3980,3809,3641,3475,3312,3152,2995,2841,2691,2543,2399,2259,2122,1989,1859,1734,1612,1494,1381,1271,1165,1064,967,875,787,703,624,549,479,413,353,297,246,
  199,157,121,89,62,39,22,10,2,0,2,10,22,39,62,89,121,157,199,246,297,353,413,479,549,624,703,787,875,967,1064,1165,1271,1381,1494,1612,1734,1859,1989,2122,2259,2399,2543,2691,2841,2995,3152,3312,3475,3641,3809,3980,4154,4330,4509,4689,4872,5057,5244,5432,
  5622,5814,6007,6202,6397,6594,6791,6990,7189,7389,7589,7790,7991
};

#define ton(n) (27.5 * pow(pow(2.0, 1.0 / 12.0), n))
#define _A0 ton(0)
#define _AS0 ton(1)
#define _B0 ton(2)

#define _C1 ton(3)
#define _CS1 ton(4)
#define _D1 ton(5)
#define _DS1 ton(6)
#define _E1 ton(7)
#define _F1 ton(8)
#define _FS1 ton(9)
#define _G1 ton(10)
#define _GS1 ton(11)
#define _A1 ton(12)
#define _AS1 ton(13)
#define _B1 ton(14)

#define _C2 ton(15)
#define _CS2 ton(16)
#define _D2 ton(17)
#define _DS2 ton(18)
#define _E2 ton(19)
#define _F2 ton(20)
#define _FS2 ton(21)
#define _G2 ton(22)
#define _GS2 ton(23)
#define _A2 ton(24)
#define _AS2 ton(25)
#define _B2 ton(26)

#define _C3 ton(27)
#define _CS3 ton(28)
#define _D3 ton(29)
#define _DS3 ton(30)
#define _E3 ton(31)
#define _F3 ton(32)
#define _FS3 ton(33)
#define _G3 ton(34)
#define _GS3 ton(35)
#define _A3 ton(36)
#define _AS3 ton(37)
#define _B3 ton(38)

#define _C4 ton(39)
#define _CS4 ton(40)
#define _D4 ton(41)
#define _DS4 ton(42)
#define _E4 ton(43)
#define _F4 ton(44)
#define _FS4 ton(45)
#define _G4 ton(46)
#define _GS4 ton(47)
#define _A4 ton(48)
#define _AS4 ton(49)
#define _B4 ton(50)

#define _C5 ton(51)
#define _CS5 ton(52)
#define _D5 ton(53)
#define _DS5 ton(54)
#define _E5 ton(55)
#define _F5 ton(56)
#define _FS5 ton(57)
#define _G5 ton(58)
#define _GS5 ton(59)
#define _A5 ton(60)
#define _AS5 ton(61)
#define _B5 ton(62)

#define _C6 ton(63)
#define _CS6 ton(64)
#define _D6 ton(65)
#define _DS6 ton(66)
#define _E6 ton(67)
#define _F6 ton(68)
#define _FS6 ton(69)
#define _G6 ton(70)
#define _GS6 ton(71)
#define _A6 ton(72)
#define _AS6 ton(73)
#define _B6 ton(74)

#define _C7 ton(75)
#define _CS7 ton(76)
#define _D7 ton(77)
#define _DS7 ton(78)
#define _E7 ton(79)
#define _F7 ton(80)
#define _FS7 ton(81)
#define _G7 ton(82)
#define _GS7 ton(83)
#define _A7 ton(84)
#define _AS7 ton(85)
#define _B7 ton(86)

#define _C8 ton(87)
#define _CS8 ton(88)
#define _D8 ton(89)
#define _DS8 ton(90)
#define _E8 ton(91)
#define _F8 ton(92)
#define _FS8 ton(93)
#define _G8 ton(94)
#define _GS8 ton(95)
#define _A8 ton(96)
#define _AS8 ton(97)
#define _B8 ton(98)

#define _C9 ton(99)
#define _CS9 ton(100)
#define _D9 ton(101)
#define _DS9 ton(102)
#define _E9 ton(103)
#define _F9 ton(104)
#define _FS9 ton(105)
#define _G9 ton(106)
#define _GS9 ton(107)
#define _A9 ton(108)
#define _AS9 ton(109)
#define _B9 ton(110)

void loop()
{
  uint32_t wavL = 0;
  uint32_t wavR = 0;
  for ( ; ; )
  {
    int v = analogRead(A13);
    uint32_t mL = (uint32_t)( _C2 * (v * 0.003) * (2.0 / AUDIO_SAMPLE_RATE_EXACT * 4294967296.0));
    uint32_t mR = (uint32_t)( _G2 * (v * 0.003) * (2.0 / AUDIO_SAMPLE_RATE_EXACT * 4294967296.0));
    int16_t* bufR = queue1.getBuffer();
    int16_t* bufL = queue2.getBuffer();
    for (int i = 0; i < 128; i++)
    {
      v = (int32_t)((wavL >> 16) & 0xff);
      bufL[i] = (int16_t)((
                 (int32_t)(sine[(byte)(wavL >> 24)] - 8192) * (256 - v)
               + (int32_t)(sine[(byte)((wavL >> 24) + 1)] - 8192) * v
                ) / 256) / 4;
      v = (int32_t)((wavR >> 16) & 0xff);
      bufR[i] = (int16_t)((
                 (int32_t)(sine[(byte)(wavR >> 24)] - 8192) * (256 - v)
               + (int32_t)(sine[(byte)((wavR >> 24) + 1)] - 8192) * v
                ) / 256) / 4;
      
      wavL += mL;
      wavR += mR;
    }
    queue1.playBuffer();
    queue2.playBuffer();
  }
}


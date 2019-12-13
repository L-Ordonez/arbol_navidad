#include "utils.h"
#include "c001.h"
int leds[] =  {2, 3, 4};
int numLeds = 3;
int ledPosIdx = 0;//Indice de la posicion de los leds

int dc4 = 2400;//Duracion de 4 compases en ms

long dTono = dc4 / 4;

int iDur;
long tDly;
long tDur;
int iTono;

//int pru[] = {3,4,5,6,C5};

void setup() {
  for (int i = 0; i < numLeds; i++) {
    pinMode(leds[i], OUTPUT);
  }
  digitalWrite(leds[ledPosIdx], HIGH);
}

void loop() {
  for (byte i = 0; i < canT; i++) {
    //iDur = int(sng[i].charAt(1));
    //iDur = (iDur == 0) ? 10 : iDur;

    //tDly = (HexToDec(sng[i].charAt(0)) * dTono) / 4;
    //tDur = (tDly * iDur) / 10;
    //iTono = vTono(sng[i].substring(2));
    iTono = sng[i][0];
    tDly = (sng[i][1] * dTono) / 4;
    tDur = (tDly * sng[i][2]) / 10;

    tone(11, iTono, tDur);
    delay(tDly);
    noTone(11);

    digitalWrite(leds[ledPosIdx], LOW);
    ledPosIdx = (ledPosIdx + 1) % numLeds;
    digitalWrite(leds[ledPosIdx], HIGH);
  }
}

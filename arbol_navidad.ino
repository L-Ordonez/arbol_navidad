#include "utils.h"
#include "c001.h"
int leds[] =  {2, 3, 4};
int numLeds = 3;
int ledPosIdx = 0;//Indice de la posicion de los leds

long dTono = 600;//Duracion de un compas en ms

int iDur;
long tDly;
long tDur;
int iTono;

void setup() {
  for (int i = 0; i < numLeds; i++) {
    pinMode(leds[i], OUTPUT);
  }
  digitalWrite(leds[ledPosIdx], HIGH);
}

void loop() {
  for (byte i = 0; i < canT; i++) {
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

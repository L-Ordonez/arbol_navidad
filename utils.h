#define nC8 4186
#define nB7 3951
#define nAM7 3729
#define nA7 3520
#define nGM7 3322
#define nG7 3136
#define nFM7 2960
#define nF7 2794
#define nE7 2637
#define nDM7 2489
#define nD7 2349
#define nCM7 2217
#define nC7 2093
#define nB6 1976
#define nAM6 1865
#define nA6 1760
#define nGM6 1661
#define nG6 1568
#define nFM6 1480
#define nF6 1397
#define nE6 1319
#define nDM6 1245
#define nD6 1175
#define nCM6 1109
#define nC6 1047
#define nB5 988
#define nAM5 932
#define nA5 880
#define nGM5 831
#define nG5 784
#define nFM5 740
#define nF5 698
#define nE5 659
#define nDM5 622
#define nD5 587
#define nCM5 554
#define nC5 523
#define nB4 494
#define nAM4 466
#define nA4 440
#define nGM4 415
#define nG4 392
#define nFM4 370
#define nF4 349
#define nE4 330
#define nDM4 311
#define nD4 294
#define nCM4 277
#define nC4 262
#define nB3 247
#define nAM3 233
#define nA3 220
#define nGM3 208
#define nG3 196
#define nFM3 185
#define nF3 175
#define nE3 165
#define nDM3 156
#define nD3 147
#define nCM3 139
#define nC3 131
#define nB2 123
#define nAM2 117
#define nA2 110
#define nGM2 104
#define nG2 98
#define nFM2 92
#define nF2 87
#define nE2 82
#define nDM2 78
#define nD2 73
#define nCM2 69
#define nC2 65
#define nB1 62
#define nAM1 58
#define nA1 55
#define nGM1 52
#define nG1 49
#define nFM1 46
#define nF1 44
#define nE1 41
#define nDM1 39
#define nD1 37
#define nCM1 35
#define nC1 33
#define nB0 31
#define nAM0 29
#define nA0 28



//Obtener un valor decimal de un char
//y un plus, G = 16
char hexa[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F', 'G'};

int HexToDec(char value) {
  int res = 0;
  for (int i = 0; i <= 16; i++) {
    if (hexa[i] == value) {
      res = i;
    }
  }
  return res;
}
//Arrays de tonos que usa la funcion
String sTon[] = {
  "C8",
  "B7",
  "AM7",
  "A7",
  "GM7",
  "G7",
  "FM7",
  "F7",
  "E7",
  "DM7",
  "D7",
  "CM7",
  "C7",
  "B6",
  "AM6",
  "A6",
  "GM6",
  "G6",
  "FM6",
  "F6",
  "E6",
  "DM6",
  "D6",
  "CM6",
  "C6",
  "B5",
  "AM5",
  "A5",
  "GM5",
  "G5",
  "FM5",
  "F5",
  "E5",
  "DM5",
  "D5",
  "CM5",
  "C5",
  "B4",
  "AM4",
  "A4",
  "GM4",
  "G4",
  "FM4",
  "F4",
  "E4",
  "DM4",
  "D4",
  "CM4",
  "C4",
  "B3",
  "AM3",
  "A3",
  "GM3",
  "G3",
  "FM3",
  "F3",
  "E3",
  "DM3",
  "D3",
  "CM3",
  "C3",
  "B2",
  "AM2",
  "A2",
  "GM2",
  "G2",
  "FM2",
  "F2",
  "E2",
  "DM2",
  "D2",
  "CM2",
  "C2",
  "B1",
  "AM1",
  "A1",
  "GM1",
  "G1",
  "FM1",
  "F1",
  "E1",
  "DM1",
  "D1",
  "CM1",
  "C1",
  "B0",
  "AM0",
  "A0"
};
int iTn[] = {
  4186,
  3951,
  3729,
  3520,
  3322,
  3136,
  2960,
  2794,
  2637,
  2489,
  2349,
  2217,
  2093,
  1976,
  1865,
  1760,
  1661,
  1568,
  1480,
  1397,
  1319,
  1245,
  1175,
  1109,
  1047,
  988,
  932,
  880,
  831,
  784,
  740,
  698,
  659,
  622,
  587,
  554,
  523,
  494,
  466,
  440,
  415,
  392,
  370,
  349,
  330,
  311,
  294,
  277,
  262,
  247,
  233,
  220,
  208,
  196,
  185,
  175,
  165,
  156,
  147,
  139,
  131,
  123,
  117,
  110,
  104,
  98,
  92,
  87,
  82,
  78,
  73,
  69,
  65,
  62,
  58,
  55,
  52,
  49,
  46,
  44,
  41,
  39,
  37,
  35,
  33,
  31,
  29,
  28
};
//Funcion para encontrar los tonos
int vTono(String value) {
  int idx = 0;
  for (int i = 0; i < 88; i++) {
    if (sTon[i] == value) {
      idx = i;
    }
  }
  return iTn[idx];
}

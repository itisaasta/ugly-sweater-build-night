#define toneC    1911
#define toneC1    1804
#define toneD    1703
#define toneEb    1607
#define toneE    1517
#define toneF    1432
#define toneF1    1352
#define toneG    1276
#define toneAb    1204
#define toneA    1136
#define toneBb    1073
#define toneB    1012
#define tonec       955
#define tonec1      902
#define toned       851
#define toneeb      803
#define tonee       758
#define tonef       716
#define tonef1      676
#define toneg       638
#define toneab      602
#define tonea       568
#define tonebb      536
#define toneb       506

#define tonep       0 

int speaker = 1; 
long vel = 20000;
boolean hasplayed = false;
 
void setup() {
  pinMode(speaker, OUTPUT);
  delay(2000);
}

int melod[] = {tonec, toneG, toneE, toneA, toneB, toneBb, toneA, toneG, tonee, toneg, tonea, tonef, toneg, tonee, tonec, toned, toneB};
int ritmo[] = {18, 18, 18, 12, 12, 6, 12, 8, 8, 8, 12, 6, 12, 12, 6, 6, 6};
 
void loop() {
  if (hasplayed == true){ return;}
  for (int i=0; i<17; i++) {
    int tom = melod[i];
    int tempo = ritmo[i];
 
    long tvalue = tempo * vel;

    tocar(tom, tvalue);

    delayMicroseconds(1000);
  }      delay(1000);

  hasplayed = true;
}
 
void tocar(int tom, long tempo_value) {
  long tempo_gasto = 0;
  while (tempo_gasto < tempo_value) {
    digitalWrite(speaker, HIGH);
    delayMicroseconds(tom / 2);
 
    digitalWrite(speaker, LOW);
    delayMicroseconds(tom/2);  
    tempo_gasto += tom;
  }
}

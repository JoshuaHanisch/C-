int zahl;
String text = "";

void setup() {
  Serial.begin(9600);
}

void loop() {
  if (Serial.available() > 0) {
    for (int i = 200; i > 0; i--) {
      if (istQuadratZahl(i))
        Serial.println(i);
    }
  }
}

boolean istQuadratZahl(int zahl) {
  boolean ergebnis = false;
  for (int i = 1; i <= zahl; i++) {
    int quadrat = i * i;
    if (quadrat == zahl) {
      ergebnis = true;
    }
  }
  return ergebnis;
}


int autoGruen=10;
int autoGelb=11;
int autoRot=12;
int pause=2000;
int fussRot=9;
int fussGruen=8;
int tasterZustand;
int taster=13;


void setup() {

pinMode (autoGruen, OUTPUT);
pinMode (autoGelb, OUTPUT);
pinMode (autoRot, OUTPUT);
pinMode (fussRot, OUTPUT);
pinMode (fussGruen, OUTPUT);

}

void loop() {

  phaseGruen();

  tasterZustand = digitalRead(taster);

  
 if (tasterZustand == HIGH) {
  
  lampenAus();
    
  phaseGelb();
  wechselZeit();
  lampenAus();
  
  phaseRot();
  wechselZeit();
  lampenAus();

  phaseRotgelb();
  wechselZeit();
  lampenAus();
 
 }else{
  phaseGruen();
 }



}


void phaseGruen(){
  digitalWrite(autoGruen, HIGH); 
  digitalWrite(fussRot, HIGH);
}

void phaseGelb(){
  digitalWrite(autoGelb, HIGH);
  digitalWrite(fussRot, HIGH);
}

void phaseRot(){
  digitalWrite(autoRot, HIGH);
  digitalWrite(fussGruen, HIGH);
}

void phaseRotgelb(){
  digitalWrite(autoRot, HIGH);
  digitalWrite(autoGelb, HIGH);
  digitalWrite(fussRot, HIGH);
}

void wechselZeit(){
  delay(pause);
}

void lampenAus(){
  digitalWrite(autoGruen, LOW);
  digitalWrite(autoGelb, LOW);
  digitalWrite(autoRot, LOW);
  digitalWrite(fussRot, LOW);
  digitalWrite(fussGruen, LOW);
}

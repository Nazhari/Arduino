int NotAViolet = 13;
int Rose = 12;
int Butt = 7;

void setup() {
  pinMode(Butt, INPUT);
  digitalWrite(Butt, HIGH);
  pinMode(NotAViolet, OUTPUT);
  pinMode(Rose, OUTPUT);
}

void loop() {
  if (digitalRead(Butt)== LOW){
    digitalWrite(NotAViolet, HIGH);
    delay(100);
    digitalWrite(NotAViolet, LOW);
    delay(100);
  }
  else{
    digitalWrite(Rose, HIGH);
    delay(100);
    digitalWrite(Rose, LOW);
    delay(100);
  }
  
}

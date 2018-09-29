int led[3] = {13,12,11};
int wait = 500;

void setup() {
for(int i = 0; i < 3; i++){
  pinMode(led[i],OUTPUT);
}
}

void loop() {
  while(wait >= 50){
    for(int i = 0; i < 3; i++){
      digitalWrite(led[i], HIGH);
      delay(wait);
    }
    for(int i = 0; i < 3; i++){
      digitalWrite(led[i], LOW);
      delay(wait);
    }
    if (wait > 50){
      wait = wait - 50;
    }
    else{
      wait = 500;
    }
  }
  
}

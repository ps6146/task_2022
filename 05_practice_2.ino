#define LED 7
void setup(){
  pinMode(LED,OUTPUT);
  digitalWrite(LED,0);
  delay(1000);
}

void loop(){
  int i;
  i=0;
  while(i<5){
    digitalWrite(LED,0);
    delay(100);
    digitalWrite(LED,1);
    delay(100);
    i=i+1;
  }
  while(1){//infinite loop
    digitalWrite(LED,1);
  }
}

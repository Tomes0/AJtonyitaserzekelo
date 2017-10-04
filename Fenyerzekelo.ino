int led=6;
int val;
void setup() {
  pinMode(led,OUTPUT);
}

void loop() {
  val=analogRead(4);
  delay(200);
  if(val<200){
    digitalWrite(led,HIGH);
  }else{
    digitalWrite(led,LOW);
  }
}


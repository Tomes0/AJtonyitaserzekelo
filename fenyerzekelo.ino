int led=6;
int val;
void setup() {
  pinMode(led,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  val=analogRead(4);
  Serial.println(val,DEC);
  delay(200);
  if(val<200){
    digitalWrite(led,HIGH);
  }else{
    digitalWrite(led,LOW);
  }
}


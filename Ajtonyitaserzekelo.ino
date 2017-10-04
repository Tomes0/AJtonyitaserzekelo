int mag=2;
int val;
void setup() {

  pinMode(mag,INPUT);
  Serial.begin(9600);
}

void loop() {

  val=digitalRead(2);
  Serial.print(val);
  
  if(val==0){
    tone(A0,511);
  }else{
    noTone(A0);
  }
}


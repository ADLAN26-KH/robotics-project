const int led3 = 12;
const int led2 = 11;
const int led1 = 10;
int micValue;
void setup() {
pinMode(led3,OUTPUT);
pinMode(led2,OUTPUT);
pinMode(led1,OUTPUT);
Serial.begin(9600);
}
void loop() {
micValue = analogRead(A5);
Serial.println(micValue);
  if(micValue>26,micValue<80)
  {
   digitalWrite(led1,HIGH);
   digitalWrite(led2,LOW);
   digitalWrite(led3,LOW);
  }
  if(micValue>=80,micValue<100)
  {
   digitalWrite(led1,HIGH);
   digitalWrite(led2,HIGH);
   digitalWrite(led3,LOW);
  }
  if(micValue>=100)
  {
   digitalWrite(led1,HIGH);
   digitalWrite(led2,HIGH);
   digitalWrite(led3,HIGH);
   Serial.println(micValue);
  }
  else
  {
   digitalWrite(led1,LOW);
   digitalWrite(led2,LOW);
   digitalWrite(led3,LOW);
  }
}

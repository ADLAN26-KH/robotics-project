#include <Servo.h>
Servo myservo;
int signal = 3;
byte Bled = 6;
byte Gled = 5;
byte RED = 11;
int Bldr = A5;
int Gldr = A4;
int Pblue = A3;
int Pgreen = A2;
int position = 0;
int lastPosition = 0;
void setup()
{
 myservo.attach(signal);
 pinMode(Bled,OUTPUT);
 pinMode(RED,OUTPUT);
 pinMode(Gled,OUTPUT);
 Serial.begin(9600);
 myservo.write(position);
}

void loop()
{
 int d = digitalRead(position);
 int B = analogRead(Bldr);
 int G = analogRead(Gldr);
 int blue = analogRead(Pblue);
 int green = analogRead(Pgreen);
 int brightnessB = map(blue, 0, 1023, 0, 255);
 int brightnessG = map(green, 0, 1023, 0, 255);
 analogWrite(Bled, brightnessB);
 analogWrite(Gled, brightnessG);
  if(G>B)
  {
    digitalWrite(RED,LOW);
   int lastPositon = 170;
    position = lastPositon;
   myservo.write(170);
    Serial.println("the most energy is on the : left");
    delay(300);
  }
  else if(B>G)
  {
   digitalWrite(RED,LOW);
   int lastPosition = 0;
   position = lastPosition;
   myservo.write(0);
    Serial.println("the most energy is on the : right");
    delay(300);
  }
  else
  {
    digitalWrite(RED,HIGH);
    myservo.write(position);
    Serial.println("both sides have the same energy");
    delay(300);
  }
}

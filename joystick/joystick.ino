#include <Servo.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,16,2);
Servo myservo;
int signal = 3;
int xvalue;
int yvalue;
void setup() {
lcd.init();
lcd.backlight();
myservo.attach(signal);
pinMode(A0,INPUT);
pinMode(A1,INPUT);
Serial.begin(9600);
myservo.write(0);
}

void loop() {
 lcd.setCursor(0,0);
 xvalue = analogRead(A3);
 Serial.print("X=");
 Serial.println(xvalue);
 myservo.write(map(xvalue, 0,1023, 0,180));
 if(map(xvalue, 0,1023, 0,180)<=90){
 lcd.clear();
 lcd.setCursor(0,0);
 lcd.print("The Position Is");
 lcd.setCursor(7,1);
 lcd.print(map(xvalue, 0,1023, 0,180));
 delay(100);
 }
 else{
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("The Position Is");
  lcd.setCursor(7,1);
  lcd.print(map(xvalue, 0,1023, 0,180));
  delay(100);
 }
}

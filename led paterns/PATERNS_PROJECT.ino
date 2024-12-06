volatile int buttonPin = 2;    
const int led1Pin = 9;      
const int led2Pin = 10;      
const int led3Pin = 11;      
volatile int pattern = 0;   
volatile int Npattern =  (pattern++ + pattern);
void setup() {
  pinMode(buttonPin, INPUT);
  pinMode(led1Pin, OUTPUT);
  pinMode(led2Pin, OUTPUT);
  pinMode(led3Pin, OUTPUT);

  // Attach interrupt to the button pin (RISING edge)
  attachInterrupt(digitalPinToInterrupt(2), changePattern, RISING);
  
  Serial.begin(9600);
}

void loop() {
  switch (pattern) {
    case 1: // Pattern 1: Blink LED 1
      blinkLed();
      break;
    case 2: // Pattern 2: Chase LED 2 and LED 3
      chaseLed();
      break;
    case 3: // Pattern 3: Breathing LED 1
      breatheLed();
      break;
  }
}

// Interrupt
void changePattern() {
   pattern = pattern + Npattern;
  Serial.print("Pattern changed to: ");
  Serial.println(pattern);
  if(pattern>3){
    pattern = 0;
  }
  
}

// LED Blink Pattern
void blinkLed() {
  digitalWrite(led1Pin, HIGH);
  delay(500);  // LED on for 500ms
  digitalWrite(led1Pin, LOW);
  delay(500);  // LED off for 500ms
  }


// LED Chase Pattern
void chaseLed() {
  digitalWrite(led1Pin, HIGH);
  digitalWrite(led2Pin, LOW);
  delay(300);  // LED 1 on, LED 2 off
  digitalWrite(led1Pin, LOW);
  digitalWrite(led2Pin, HIGH);
  delay(300);  // LED 1 off, LED 2 on
}

void breatheLed() {
  digitalWrite(led1Pin, LOW);
  digitalWrite(led2Pin, LOW);
  digitalWrite(led3Pin, LOW);
  for(int ledpin=9;ledpin<12;ledpin++){
  for (int brightness = 0; brightness <= 255; brightness++) {
    analogWrite(ledpin, brightness);  // Fade in
    delay(10);
  
  }
  
  for (int brightness = 255; brightness >= 0; brightness--) {
    analogWrite(ledpin, brightness);  // Fade out
    delay(10);
  }
  }
 
}

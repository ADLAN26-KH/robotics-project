const byte A = 6;
const byte B = 7;
const byte C = 10;
const byte D = 9;
const byte E = 8;
const byte F = 5;
const byte G = 4;
void setup()
{
 for( int pin=4;pin<11;pin++)
 {
   digitalWrite(pin,OUTPUT);
 }
}

void loop()
{
 displaynumbre(0);
 delay(1000);
 displaynumbre(1);
 delay(1000);
 displaynumbre(2);
 delay(1000);
 displaynumbre(3);
 delay(1000);
 displaynumbre(4);
 delay(1000);
 displaynumbre(5);
 delay(1000);
 displaynumbre(6);
 delay(1000);
 displaynumbre(7);
 delay(1000);
 displaynumbre(8);
 delay(1000);
 displaynumbre(9);
 delay(1000);
}
void displaynumbre(int numbre)
{
  switch(numbre)
  {
    case 0 : digitalWrite(A,HIGH);
             digitalWrite(B,HIGH);
             digitalWrite(C,HIGH);
             digitalWrite(D,HIGH);
             digitalWrite(E,HIGH);
             digitalWrite(F,HIGH);
             digitalWrite(G,LOW);
             break;
    case 1 : digitalWrite(A,LOW);
             digitalWrite(B,HIGH);
             digitalWrite(C,HIGH);
             digitalWrite(D,LOW);
             digitalWrite(E,LOW);
             digitalWrite(F,LOW);
             digitalWrite(G,LOW);
             break;
    case 2 : digitalWrite(A,HIGH);
             digitalWrite(B,HIGH);
             digitalWrite(C,LOW);
             digitalWrite(D,HIGH);
             digitalWrite(E,HIGH);
             digitalWrite(F,LOW);
             digitalWrite(G,HIGH);
             break;
    case 3 : digitalWrite(A,HIGH);
             digitalWrite(B,HIGH);
             digitalWrite(C,HIGH);
             digitalWrite(D,HIGH);
             digitalWrite(E,LOW);
             digitalWrite(F,LOW);
             digitalWrite(G,HIGH);
             break;
    case 4 : digitalWrite(A,LOW);
             digitalWrite(B,HIGH);
             digitalWrite(C,HIGH);
             digitalWrite(D,LOW);
             digitalWrite(E,LOW);
             digitalWrite(F,HIGH);
             digitalWrite(G,HIGH);
             break;
    case 5 : digitalWrite(A,HIGH);
             digitalWrite(B,LOW);
             digitalWrite(C,HIGH);
             digitalWrite(D,HIGH);
             digitalWrite(E,LOW);
             digitalWrite(F,HIGH);
             digitalWrite(G,HIGH);
             break;
    case 6 : digitalWrite(A,HIGH);
             digitalWrite(B,LOW);
             digitalWrite(C,HIGH);
             digitalWrite(D,HIGH);
             digitalWrite(E,HIGH);
             digitalWrite(F,HIGH);
             digitalWrite(G,HIGH);
             break;
  
    case 7 : digitalWrite(A,HIGH);
             digitalWrite(B,HIGH);
             digitalWrite(C,HIGH);
             digitalWrite(D,LOW);
             digitalWrite(E,LOW);
             digitalWrite(F,LOW);
             digitalWrite(G,LOW);
             break;
  
    case 8 : digitalWrite(A,HIGH);
             digitalWrite(B,HIGH);
             digitalWrite(C,HIGH);
             digitalWrite(D,HIGH);
             digitalWrite(E,HIGH);
             digitalWrite(F,HIGH);
             digitalWrite(G,HIGH);
             break;
  
    case 9 : digitalWrite(A,HIGH);
             digitalWrite(B,HIGH);
             digitalWrite(C,HIGH);
             digitalWrite(D,HIGH);
             digitalWrite(E,LOW);
             digitalWrite(F,HIGH);
             digitalWrite(G,HIGH);
             break;
  }
}

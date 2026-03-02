// int trigPin=9;
// int echoPin=10;
// int ledPin=8;
// void setup() {
//   Serial.begin(9600);
//   pinMode(trigPin,OUTPUT);
//   pinMode(echoPin,INPUT);
//   pinMode(ledPin,OUTPUT);
// }

// void loop() {
//   int t,d;
//   digitalWrite(trigPin,HIGH);
//   delayMicroseconds(100);
//   digitalWrite(trigPin,LOW);
//   t=pulseIn(echoPin,HIGH);
//   d= t*0.034/2;
//    if (d >= 15) {
//     digitalWrite(ledPin, HIGH);
//   } else {
//     digitalWrite(ledPin, LOW);
//   }
//   Serial.print(d);
//   Serial.println("cm");
//   delay(100);
// }


#include <LiquidCrystal.h>

int trigPin = 9;
int echoPin = 10;
int ledPin = 8;

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() 
{
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(ledPin, OUTPUT);
  
  lcd.begin(16, 2);
  lcd.print("PEDESTRIAN LIGHT");
  delay(1500);
  lcd.clear();
}

void loop() 
{
  int t;
  int d;


  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);


  t = pulseIn(echoPin, HIGH);
  d = t * 0.034 / 2;

 
  Serial.print("Distance: ");
  Serial.print(d);
  Serial.println(" cm");


  lcd.clear();
  lcd.setCursor(0, 0);

  if (d < 10)
    {
      lcd.print("STAND BACK!");
      digitalWrite(ledPin, HIGH);
    }
  else if (d >= 10 && d < 20) 
    {
      lcd.print("TOO CLOSE");
      digitalWrite(ledPin, HIGH);
      delay(150);
      digitalWrite(ledPin, LOW);
      delay(50);
    }
  else 
    {
      lcd.print("SAFE TO WAIT");
      digitalWrite(ledPin, LOW);
    }

  lcd.setCursor(0, 1);
  lcd.print("Dist: ");
  lcd.print(d);
  lcd.print(" cm");

  delay(500);
}

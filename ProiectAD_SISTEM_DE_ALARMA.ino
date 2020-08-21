#include <LiquidCrystal.h>

int pirsensor = 0;
int gassensor = 0;
LiquidCrystal lcd(13, A1, A2, A3, A4, A5);

void setup()
{
  //-------------------------Leds-----------------------------
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  
  //-----------------------PIR sensor-------------------------
  pinMode(11, INPUT);
  
  //-----------------------Gas sensor-------------------------
  Serial.begin(9600);
  
  //--------------------------Piezo---------------------------
  pinMode(12, OUTPUT);
  
  //---------------------------LCD----------------------------
  lcd.begin(16, 2);
}

void loop()
{
  //----------------delay for BIBO BIBO effect----------------
  delay(250);
  
  pirsensor = digitalRead(11);
  gassensor = analogRead(A0);
  
  //--------------PIR sensor for motion detection-------------
  //---------------------Piezo sound: 220---------------------
  if (pirsensor == HIGH) 
  {
    lcd.clear();
    lcd.setCursor(3, 0);
    lcd.print("*INTRUDER*");
    lcd.setCursor(5, 1);
    lcd.print("*ALERT*");
    
    tone(12, 220, 900);
    digitalWrite(2, HIGH);
    delay(100);
    digitalWrite(2, LOW);
    digitalWrite(3, HIGH);
    delay(100);
    digitalWrite(3, LOW);
    digitalWrite(4, HIGH);
    delay(100);
    digitalWrite(4, LOW);
    digitalWrite(5, HIGH);
    delay(100);
    digitalWrite(5, LOW);
    digitalWrite(6, HIGH);
    delay(100);
    digitalWrite(6, LOW);
    digitalWrite(7, HIGH);
    delay(100);
    digitalWrite(7, LOW);
    digitalWrite(8, HIGH);
    delay(100);
    digitalWrite(8, LOW);
    digitalWrite(9, HIGH);
    delay(100);
    digitalWrite(9, LOW);
    digitalWrite(10, HIGH);
    delay(100);
    digitalWrite(10, LOW);
  } 
  else 
  {
    lcd.clear();
    lcd.setCursor(5, 0);
    lcd.print("*ALL*");
    lcd.setCursor(5, 1);
    lcd.print("*SAFE*");
    
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
    digitalWrite(10, LOW);
  }
  
  //------------------Gas sensor: low level-------------------
  //--------------------Piezo sound: 300----------------------
  if (gassensor > 400 && gassensor < 450) 
  {
    lcd.clear();
    lcd.setCursor(3, 0);
    lcd.print("*LOW LEVEL*");
    lcd.setCursor(3, 1);
    lcd.print("*GAS ALERT*");
    
    tone(12, 300, 900);
    digitalWrite(2, HIGH);
    delay(100);
    digitalWrite(2, LOW);
    digitalWrite(3, HIGH);
    delay(100);
    digitalWrite(3, LOW);
    digitalWrite(4, HIGH);
    delay(100);
    digitalWrite(4, LOW);
    digitalWrite(5, HIGH);
    delay(100);
    digitalWrite(5, LOW);
    digitalWrite(6, HIGH);
    delay(100);
    digitalWrite(6, LOW);
    digitalWrite(7, HIGH);
    delay(100);
    digitalWrite(7, LOW);
    digitalWrite(8, HIGH);
    delay(100);
    digitalWrite(8, LOW);
    digitalWrite(9, HIGH);
    delay(100);
    digitalWrite(9, LOW);
    digitalWrite(10, HIGH);
    delay(100);
    digitalWrite(10, LOW);
  } 

  //-----------------Gas sensor: medium level-----------------
  //---------------------Piezo sound: 400---------------------
  if (gassensor > 450 && gassensor < 550) 
  {
    lcd.clear();
    lcd.setCursor(1, 0);
    lcd.print("*MEDIUM LEVEL*");
    lcd.setCursor(2, 1);
    lcd.print("*GAS ALERT*");
    
    tone(12, 400, 900);
    digitalWrite(2, HIGH);
    delay(100);
    digitalWrite(2, LOW);
    digitalWrite(3, HIGH);
    delay(100);
    digitalWrite(3, LOW);
    digitalWrite(4, HIGH);
    delay(100);
    digitalWrite(4, LOW);
    digitalWrite(5, HIGH);
    delay(100);
    digitalWrite(5, LOW);
    digitalWrite(6, HIGH);
    delay(100);
    digitalWrite(6, LOW);
    digitalWrite(7, HIGH);
    delay(100);
    digitalWrite(7, LOW);
    digitalWrite(8, HIGH);
    delay(100);
    digitalWrite(8, LOW);
    digitalWrite(9, HIGH);
    delay(100);
    digitalWrite(9, LOW);
    digitalWrite(10, HIGH);
    delay(100);
    digitalWrite(10, LOW);
  } 
  
  //------------------Gas sensor: high level------------------
  //---------------------Piezo sound: 500---------------------
  if (gassensor > 550) 
  {
    lcd.clear();
    lcd.setCursor(2, 0);
    lcd.print("*HIGH LEVEL*");
    lcd.setCursor(2, 1);
    lcd.print("*GAS ALERT*");
    
    tone(12, 500, 900);
    digitalWrite(2, HIGH);
    delay(100);
    digitalWrite(2, LOW);
    digitalWrite(3, HIGH);
    delay(100);
    digitalWrite(3, LOW);
    digitalWrite(4, HIGH);
    delay(100);
    digitalWrite(4, LOW);
    digitalWrite(5, HIGH);
    delay(100);
    digitalWrite(5, LOW);
    digitalWrite(6, HIGH);
    delay(100);
    digitalWrite(6, LOW);
    digitalWrite(7, HIGH);
    delay(100);
    digitalWrite(7, LOW);
    digitalWrite(8, HIGH);
    delay(100);
    digitalWrite(8, LOW);
    digitalWrite(9, HIGH);
    delay(100);
    digitalWrite(9, LOW);
    digitalWrite(10, HIGH);
    delay(100);
    digitalWrite(10, LOW);
  } 

  delay(10);
}

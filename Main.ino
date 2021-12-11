#include<Stepper.h> // Library for Steper motor
#include <Wire.h> // Library for I2C communication
#include <LiquidCrystal_I2C.h> // Library for LCD


LiquidCrystal_I2C lcd(0x27, 16, 2);

// Button pin
const int pinchButton = 2;
const int tspButton = 3;
const int tbspButton = 4;

int tbspRequest;
int tspRequest;
int pinchRequest;

const int stepsPerRevolution = 32; //motor steps
Stepper helix (stepsPerRevolution, 8, 10, 9, 11);

void setup() {
  pinMode(pinchButton, INPUT);  
  pinMode(tspButton, INPUT); 
  pinMode(tbspButton, INPUT); 
  pinMode(8, OUTPUT);  
  pinMode(9, OUTPUT); 
  pinMode(10, OUTPUT); 
  pinMode(11, OUTPUT); 
  helix.setSpeed(700);
  Serial.begin(4800);
  
  lcd.init();
  lcd.backlight();
  delay(5000);

}

//Functions
void dispense(){
  helix.step(-2048);
}

// Function Button check
void buttonCheck(){
  tbspRequest = digitalRead(tbspButton);
  tspRequest = digitalRead(tspButton);
  pinchRequest = digitalRead(pinchButton);
}

void loop() {
  buttonCheck();
 
  if (tbspRequest == HIGH){
    lcd.clear();
    lcd.setCursor(1, 0);
    lcd.print("A Table Spoon");
    lcd.setCursor(1,1);
    lcd.print("(50 Gram)");
    delay(5000);
    for (int i=0; i<50; i++){
      dispense();
    }
  }

  else if (tspRequest == HIGH){
    lcd.clear();
    lcd.setCursor(1, 0);
    lcd.print("A Tea Spoon");
    lcd.setCursor(1,1);
    lcd.print("(5 Gram)");
    delay(5000);
    for (int i=0; i<25; i++){
      dispense();
  }
 }

  else if (pinchRequest == HIGH){
    lcd.clear();
    lcd.setCursor(1, 0);
    lcd.print("A Pinch");
    lcd.setCursor(1,1);
    lcd.print("(1 Gram)");
    delay(5000);
    for (int i=0; i<5; i++){
      dispense();
  }
 }
    lcd.clear();
}

#include "Ultrasonic.h"
#include <LiquidCrystal.h>
LiquidCrystal lcd(11, 10, 9, 4, 5, 6, 7);
Ultrasonic ultrasonic(12,13);

void setup() {
lcd.begin(16, 2);
lcd.print("testing...");
}

void loop()
{
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print(ultrasonic.Ranging(CM));
  lcd.print("cm");
    
  delay(100);
}






void turnLeft() {
  left();
  delay(300);
  int distance = checkSonar();
  int try_times = 0;
  while (distance<40 || try_times>50){
    left();
    delay(20);
    distance = checkSonar();
    try_times++;
  }
  if (try_times>50) {
    stop(); // deadlock going around
  }
}

void turnRight() {
  right();
  delay(300);
  int distance = checkSonar();
  int try_times = 0;
  while (distance<40 || try_times>50){
    right();
    delay(20);
    distance = checkSonar();
    try_times++;
  }
  if (try_times>50) {
    stop(); // deadlock - going around
  }
}


void left(){
  //set left motor
}

void right() {
  //set right motor
}

void stop() {
  //stop motors
}

void go() {
  //run motors
}





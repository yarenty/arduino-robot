
int buzzer=13;//set buzzer's digital pin IO in control 

int potpin = 0 ; //define analog pin0 
int ledpin = 10 ;//define analog pin13 
int val = 0 ; //set val is0.

void setup() {

//  pinMode(ledpin,OUTPUT);//set analog pin13 output
  pinMode(buzzer,OUTPUT);//set digital pin IO OL
   Serial.begin(9600);//set baud rate 9600 
}


void loop() {
  
val = analogRead(potpin);//give the value of pin0 to val
//Serial.println(val) ; //print val’s value }

  for( int i=0;i<3;i++)//
  {
    digitalWrite(buzzer,HIGH);
    delay(1);
    digitalWrite(buzzer,LOW);
    delay(1);
  }
  delay((1000-val)/5);

}

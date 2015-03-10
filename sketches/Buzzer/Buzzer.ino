
int buzzer=13;//set buzzer's digital pin IO in control 

void setup()
{
  pinMode(buzzer,OUTPUT);//set digital pin IO OL
}

void loop()
{  
unsigned char i,j;//define i j

while(1)
{
  for(i=0;i<10;i++)//
  {
    digitalWrite(buzzer,HIGH);
    delay(1);
    digitalWrite(buzzer,LOW);
    delay(4);
  }
  for(i=0;i<10;i++)//
  {
    digitalWrite(buzzer,HIGH);
    delay(2);
    digitalWrite(buzzer,LOW);
    delay(3);
  }
  for(i=0;i<10;i++)//
  {
    digitalWrite(buzzer,HIGH);
    delay(5);
    digitalWrite(buzzer,LOW);
    delay(10);
  }
  for(i=0;i<10;i++)//
  {
    digitalWrite(buzzer,HIGH);
    delay(1);
    digitalWrite(buzzer,LOW);
    delay(6);
  }
 delay(random(1000));

}
}

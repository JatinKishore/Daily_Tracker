#include <Wire.h>
#include <VL53L0X.h>


VL53L0X sensor2;
VL53L0X sensor3;
VL53L0X sensor4;
VL53L0X sensor5;
VL53L0X sensor6;
VL53L0X sensor7;




unsigned int b;
unsigned int c;
unsigned int d;
unsigned int e;
unsigned int f;
unsigned int g;




void setup()
{
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(3, LOW);
  digitalWrite(12,LOW);
  digitalWrite(3,LOW);
  digitalWrite(2,LOW);

  delay(500);
  Wire.begin();
  Serial.begin(9600);

  digitalWrite(5, HIGH);
  delay(150);
  sensor2.init(true);
  delay(100);
  sensor2.setAddress((uint8_t)0x02);



  digitalWrite(6, HIGH);
  delay(150);
  sensor3.init(true);
  delay(100);
  sensor3.setAddress((uint8_t)0x03);


  digitalWrite(8, HIGH);
  delay(150);
  sensor5.init(true);
  delay(100);
  sensor5.setAddress((uint8_t)0x05);

  digitalWrite(9, HIGH);
  delay(150);
  sensor6.init(true);
  delay(100);
  sensor6.setAddress((uint8_t)0x06);

  digitalWrite(10, HIGH);
  delay(150);
  sensor7.init(true);
  delay(100);
  sensor7.setAddress((uint8_t)0x07);

 



  sensor2.startContinuous();
  sensor3.startContinuous();

  sensor5.startContinuous();
  sensor6.startContinuous();
  sensor7.startContinuous();

 

}

void loop()
{
 

  b = sensor2.readRangeContinuousMillimeters();
  Serial.print("2 : ");
  Serial.println(b);
  delay(1000);

  c = sensor3.readRangeContinuousMillimeters();
  Serial.print("3 : ");
  Serial.println(c);
  delay(1000);



  e = sensor5.readRangeContinuousMillimeters();
  Serial.print("5 : ");
  Serial.println(e);
  delay(1000);

  f = sensor6.readRangeContinuousMillimeters();
  Serial.print("6 : ");
  Serial.println(f);
  delay(1000);

  g = sensor7.readRangeContinuousMillimeters();
  Serial.print("7 : ");
  Serial.println(g);
  delay(1000);



}

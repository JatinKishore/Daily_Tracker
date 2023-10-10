#include "Adafruit_VL53L0X.h"

// address we will assign if dual sensor is present
#define LOX1_ADDRESS 0x30
#define LOX2_ADDRESS 0x31
#define LOX3_ADDRESS 0x32
#define LOX4_ADDRESS 0x33
#define LOX5_ADDRESS 0x34
#define LOX6_ADDRESS 0x35
#define LOX7_ADDRESS 0x36
#define LOX8_ADDRESS 0x37
#define LOX9_ADDRESS 0x38
#define LOX10_ADDRESS 0x39
#define LOX11_ADDRESS 0x3A
#define LOX12_ADDRESS 0x3B
#define LOX13_ADDRESS 0x3C
#define LOX14_ADDRESS 0x3D
#define LOX15_ADDRESS 0x3E


// set the pins to shutdown
#define SHT_LOX1 2
#define SHT_LOX2 3
#define SHT_LOX3 4
#define SHT_LOX4 5
#define SHT_LOX5 6
#define SHT_LOX6 7
#define SHT_LOX7 8
#define SHT_LOX8 9
#define SHT_LOX9 10
#define SHT_LOX10 11
#define SHT_LOX11 12
#define SHT_LOX12 13
#define SHT_LOX13 A0
#define SHT_LOX14 A1
#define SHT_LOX15 A2

// objects for the vl53l0x
Adafruit_VL53L0X lox1 = Adafruit_VL53L0X();
Adafruit_VL53L0X lox2 = Adafruit_VL53L0X();
Adafruit_VL53L0X lox3 = Adafruit_VL53L0X();
Adafruit_VL53L0X lox4 = Adafruit_VL53L0X();
Adafruit_VL53L0X lox5 = Adafruit_VL53L0X();
Adafruit_VL53L0X lox6 = Adafruit_VL53L0X();
Adafruit_VL53L0X lox7 = Adafruit_VL53L0X();
Adafruit_VL53L0X lox8 = Adafruit_VL53L0X();
Adafruit_VL53L0X lox9 = Adafruit_VL53L0X();
Adafruit_VL53L0X lox10 = Adafruit_VL53L0X();
Adafruit_VL53L0X lox11 = Adafruit_VL53L0X();
Adafruit_VL53L0X lox12 = Adafruit_VL53L0X();
Adafruit_VL53L0X lox13 = Adafruit_VL53L0X();
Adafruit_VL53L0X lox14 = Adafruit_VL53L0X();
Adafruit_VL53L0X lox15 = Adafruit_VL53L0X();

// this holds the measurement
VL53L0X_RangingMeasurementData_t measure1;
VL53L0X_RangingMeasurementData_t measure2;
VL53L0X_RangingMeasurementData_t measure3;
VL53L0X_RangingMeasurementData_t measure4;
VL53L0X_RangingMeasurementData_t measure5;
VL53L0X_RangingMeasurementData_t measure6;
VL53L0X_RangingMeasurementData_t measure7;
VL53L0X_RangingMeasurementData_t measure8;
VL53L0X_RangingMeasurementData_t measure9;
VL53L0X_RangingMeasurementData_t measure10;
VL53L0X_RangingMeasurementData_t measure11;
VL53L0X_RangingMeasurementData_t measure12;
VL53L0X_RangingMeasurementData_t measure13;
VL53L0X_RangingMeasurementData_t measure14;
VL53L0X_RangingMeasurementData_t measure15;

/*
    Reset all sensors by setting all of their XSHUT pins low for delay(10), then set all XSHUT high to bring out of reset
    Keep sensor #1 awake by keeping XSHUT pin high
    Put all other sensors into shutdown by pulling XSHUT pins low
    Initialize sensor #1 with lox.begin(new_i2c_address) Pick any number but 0x29 and it must be under 0x7F. Going with 0x30 to 0x3F is probably OK.
    Keep sensor #1 awake, and now bring sensor #2 out of reset by setting its XSHUT pin high.
    Initialize sensor #2 with lox.begin(new_i2c_address) Pick any number but 0x29 and whatever you set the first sensor to
 */
void setID() {
  // all reset
  digitalWrite(SHT_LOX1, LOW);    
  digitalWrite(SHT_LOX2, LOW);
  digitalWrite(SHT_LOX3, LOW);
  digitalWrite(SHT_LOX4, LOW);
  digitalWrite(SHT_LOX5, LOW);
  digitalWrite(SHT_LOX6, LOW);
  digitalWrite(SHT_LOX7, LOW);
  digitalWrite(SHT_LOX8, LOW);
  digitalWrite(SHT_LOX9, LOW);
  digitalWrite(SHT_LOX10, LOW);
  digitalWrite(SHT_LOX11, LOW);
  digitalWrite(SHT_LOX12, LOW);
  digitalWrite(SHT_LOX13, LOW);
  digitalWrite(SHT_LOX14, LOW);
  digitalWrite(SHT_LOX15, LOW);
  delay(10);
  // all unreset
  digitalWrite(SHT_LOX1, HIGH);    
  digitalWrite(SHT_LOX2, HIGH);
  digitalWrite(SHT_LOX3, HIGH);
  digitalWrite(SHT_LOX4, HIGH);
  digitalWrite(SHT_LOX5, HIGH);
  digitalWrite(SHT_LOX6, HIGH);
  digitalWrite(SHT_LOX7, HIGH);
  digitalWrite(SHT_LOX8, HIGH);
  digitalWrite(SHT_LOX9, HIGH);
  digitalWrite(SHT_LOX10, HIGH);
  digitalWrite(SHT_LOX11, HIGH);
  digitalWrite(SHT_LOX12, HIGH);
  digitalWrite(SHT_LOX13, HIGH);
  digitalWrite(SHT_LOX14, HIGH);
  digitalWrite(SHT_LOX15, HIGH);
  delay(10);

  // activating LOX1 and resetting LOX2
  digitalWrite(SHT_LOX1, HIGH);    
  digitalWrite(SHT_LOX2, LOW);
  digitalWrite(SHT_LOX3, LOW);
  digitalWrite(SHT_LOX4, LOW);
  digitalWrite(SHT_LOX5, LOW);
  digitalWrite(SHT_LOX6, LOW);
  digitalWrite(SHT_LOX7, LOW);
  digitalWrite(SHT_LOX8, LOW);
  digitalWrite(SHT_LOX9, LOW);
  digitalWrite(SHT_LOX10, LOW);
  digitalWrite(SHT_LOX11, LOW);
  digitalWrite(SHT_LOX12, LOW);
  digitalWrite(SHT_LOX13, LOW);
  digitalWrite(SHT_LOX14, LOW);
  digitalWrite(SHT_LOX15, LOW);

  // initing LOX1
  if(!lox1.begin(LOX1_ADDRESS)) {
    while(1);
  }
  delay(10);

  // activating LOX2
  digitalWrite(SHT_LOX2, HIGH);
  delay(10);

  //initing LOX2
  if(!lox2.begin(LOX2_ADDRESS)) {
    while(1);
  }
  delay(10);
  
  digitalWrite(SHT_LOX3, HIGH);
  delay(10);

  //initing LOX2
  if(!lox3.begin(LOX3_ADDRESS)) {
    while(1);
  }
  delay(10);

  digitalWrite(SHT_LOX4, HIGH);
  delay(10);

  
  if(!lox4.begin(LOX4_ADDRESS)) {
    while(1);
  }
  delay(10);

  digitalWrite(SHT_LOX5, HIGH);
  delay(10);

  
  if(!lox5.begin(LOX5_ADDRESS)) {
    while(1);
  }
  delay(10);

  digitalWrite(SHT_LOX6, HIGH);
  delay(10);

  
  if(!lox6.begin(LOX6_ADDRESS)) {
    while(1);
  }
  delay(10);

  digitalWrite(SHT_LOX7, HIGH);
  delay(10);

  
  if(!lox7.begin(LOX7_ADDRESS)) {
    while(1);
  }
  delay(10);

  digitalWrite(SHT_LOX8, HIGH);
  delay(10);

  
  if(!lox8.begin(LOX8_ADDRESS)) {
    while(1);
  }
  delay(10);

  digitalWrite(SHT_LOX9, HIGH);
  delay(10);

  
  if(!lox9.begin(LOX9_ADDRESS)) {
    while(1);
  }
  delay(10);

  digitalWrite(SHT_LOX10, HIGH);
  delay(10);

  
  if(!lox10.begin(LOX10_ADDRESS)) {
    while(1);
  }
  delay(10);

  digitalWrite(SHT_LOX11, HIGH);
  delay(10);

  
  if(!lox11.begin(LOX11_ADDRESS)) {
    while(1);
  }
  delay(10);

  digitalWrite(SHT_LOX12, HIGH);
  delay(10);

  
  if(!lox12.begin(LOX12_ADDRESS)) {
    while(1);
  }
  delay(10);

  digitalWrite(SHT_LOX13, HIGH);
  delay(10);

  
  if(!lox13.begin(LOX13_ADDRESS)) {
    while(1);
  }
  delay(10);

  digitalWrite(SHT_LOX14, HIGH);
  delay(10);

  
  if(!lox14.begin(LOX14_ADDRESS)) {
    while(1);
  }
  delay(10);

  digitalWrite(SHT_LOX15, HIGH);
  delay(10);

  
  if(!lox15.begin(LOX15_ADDRESS)) {
    while(1);
  }
  delay(10);  
}

void read_dual_sensors() {
  
  lox1.rangingTest(&measure1, false); // pass in 'true' to get debug data printout!
  lox2.rangingTest(&measure2, false); // pass in 'true' to get debug data printout!
  lox3.rangingTest(&measure3, false); // pass in 'true' to get debug data printout!
  lox4.rangingTest(&measure4, false); // pass in 'true' to get debug data printout!
  lox5.rangingTest(&measure5, false); // pass in 'true' to get debug data printout!
  lox6.rangingTest(&measure6, false); // pass in 'true' to get debug data printout!
  lox7.rangingTest(&measure7, false); // pass in 'true' to get debug data printout!
  lox8.rangingTest(&measure8, false); // pass in 'true' to get debug data printout!
  lox9.rangingTest(&measure9, false); // pass in 'true' to get debug data printout!
  lox10.rangingTest(&measure10, false); // pass in 'true' to get debug data printout!
  lox11.rangingTest(&measure11, false); // pass in 'true' to get debug data printout!
  lox12.rangingTest(&measure12, false); // pass in 'true' to get debug data printout!
  lox13.rangingTest(&measure13, false); // pass in 'true' to get debug data printout!
  lox14.rangingTest(&measure14, false); // pass in 'true' to get debug data printout!
  lox15.rangingTest(&measure15, false); // pass in 'true' to get debug data printout!

  // print sensor one reading
  if(measure1.RangeStatus != 4) {     // if not out of range
    Serial.println(measure1.RangeMilliMeter);
  } else {
    Serial.print(F(""));
  }
  
  Serial.print(F(""));

  // print sensor two reading
  if(measure2.RangeStatus != 4) {
    Serial.println(9000+measure2.RangeMilliMeter);
  } else {
    Serial.print(F(""));
  }

  if(measure2.RangeStatus != 4) {
    Serial.println(18000+measure2.RangeMilliMeter);
  } else {
    Serial.print(F(""));
  }

  if(measure3.RangeStatus != 4) {
    Serial.println(27000+measure3.RangeMilliMeter);
  } else {
    Serial.print(F(""));
  }

  if(measure4.RangeStatus != 4) {
    Serial.println(36000+measure4.RangeMilliMeter);
  } else {
    Serial.print(F(""));
  }

  if(measure5.RangeStatus != 4) {
    Serial.println(45000+measure5.RangeMilliMeter);
  } else {
    Serial.print(F(""));
  }

  if(measure6.RangeStatus != 4) {
    Serial.println(54000+measure6.RangeMilliMeter);
  } else {
    Serial.print(F(""));
  }

  if(measure7.RangeStatus != 4) {
    Serial.println(63000+measure7.RangeMilliMeter);
  } else {
    Serial.print(F(""));
  }
  if(measure8.RangeStatus != 4) {
    Serial.println(72000+measure8.RangeMilliMeter);
  } else {
    Serial.print(F(""));
  }

  if(measure9.RangeStatus != 4) {
    Serial.println(81000+measure9.RangeMilliMeter);
  } else {
    Serial.print(F(""));
  }

  if(measure10.RangeStatus != 4) {
    Serial.println(90000+measure10.RangeMilliMeter);
  } else {
    Serial.print(F(""));
  }

  if(measure11.RangeStatus != 4) {
    Serial.println(99000+measure11.RangeMilliMeter);
  } else {
    Serial.print(F(""));
  }

  if(measure12.RangeStatus != 4) {
    Serial.println(108000+measure12.RangeMilliMeter);
  } else {
    Serial.print(F(""));
  }

  if(measure13.RangeStatus != 4) {
    Serial.println(1017000+measure13.RangeMilliMeter);
  } else {
    Serial.print(F(""));
  }

  if(measure14.RangeStatus != 4) {
    Serial.println(1026000+measure14.RangeMilliMeter);
  } else {
    Serial.print(F(""));
  }

  if(measure15.RangeStatus != 4) {
    Serial.println(1035000+measure15.RangeMilliMeter);
  } else {
    Serial.print(F(""));
  }  
}

void setup() {
  Serial.begin(115200);

  // wait until serial port opens for native USB devices
  while (! Serial) { delay(1); }

  pinMode(SHT_LOX1, OUTPUT);    
  pinMode(SHT_LOX2, OUTPUT);
  pinMode(SHT_LOX3, OUTPUT);
  pinMode(SHT_LOX4, OUTPUT);
  pinMode(SHT_LOX5, OUTPUT);
  pinMode(SHT_LOX6, OUTPUT);
  pinMode(SHT_LOX7, OUTPUT);
  pinMode(SHT_LOX8, OUTPUT);
  pinMode(SHT_LOX9, OUTPUT);
  pinMode(SHT_LOX10, OUTPUT);
  pinMode(SHT_LOX11, OUTPUT);
  pinMode(SHT_LOX12, OUTPUT);
  pinMode(SHT_LOX13, OUTPUT);
  pinMode(SHT_LOX14, OUTPUT);
  pinMode(SHT_LOX15, OUTPUT);
  digitalWrite(SHT_LOX1, LOW);    
  digitalWrite(SHT_LOX2, LOW);
  digitalWrite(SHT_LOX3, LOW);
  digitalWrite(SHT_LOX4, LOW);
  digitalWrite(SHT_LOX5, LOW);
  digitalWrite(SHT_LOX6, LOW);
  digitalWrite(SHT_LOX7, LOW);
  digitalWrite(SHT_LOX8, LOW);
  digitalWrite(SHT_LOX9, LOW);
  digitalWrite(SHT_LOX10, LOW);
  digitalWrite(SHT_LOX11, LOW);
  digitalWrite(SHT_LOX12, LOW);
  digitalWrite(SHT_LOX13, LOW);
  digitalWrite(SHT_LOX14, LOW);
  digitalWrite(SHT_LOX15, LOW);

  setID();
 
}

void loop() {
   
  read_dual_sensors();
  delay(100);
} 

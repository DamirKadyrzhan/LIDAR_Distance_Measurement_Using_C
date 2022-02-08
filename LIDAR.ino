#include <Wire.h> //helps to communicate with I2C devices like LIDAR sensor 
#include <VL53L0X.h> //includes library of VL53L0X sensor 

VL53L0X sensor;

int distance_mm; // stores data of a sensor 
int buttopin = 12; // button connection 
int transistor1 = 5; // transistor of first 7 segment 
int transistor2 = 4; // transistor of second 7 segment 
int buttonval; // stores values of a button 

void setup() {
  pinMode(2, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(13, OUTPUT);

  pinMode(transostor1, OUTPUT);
  pinMode(transistor2, OUTPUT);

  pinMode(buttonpin, INPUT);

  Serial.begin(9600); // opens serial port, sets data rate to 9600
  Wire.begin(); // begins initializing and using data transfers 

  sensor.setTimeout(500); // time until sensor will wait to abort if something is wrong 
  if (!sensor.init()) // if something wrong with sensor it will display an error
  {
    Serial.println("Failed to detect and initialize sensor!");
    while (1) {} 
  }
}

void num0() {
  digitalWrite(11, HIGH); 
  digitalWrite(2, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(10, LOW);
  digitalWrite(13, LOW);
}
void num1() {
  digitalWrite(11, HIGH); 
  digitalWrite(2, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(10, LOW);
  digitalWrite(13, LOW);
}
void num2() {
  digitalWrite(11, LOW); 
  digitalWrite(2, HIGH);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(10, HIGH);
  digitalWrite(13, LOW);
}
void num3() {
  digitalWrite(11, LOW); 
  digitalWrite(2, HIGH);
  digitalWrite(6, LOW);
  digitalWrite(7, HIGH);
  digitalWrite(8, LOW);
  digitalWrite(10, LOW);
  digitalWrite(13, LOW);
}
void num4() {
  digitalWrite(11, LOW); 
  digitalWrite(2, LOW);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(10, LOW);
  digitalWrite(13, LOW);
}
void num5() {
  digitalWrite(11, HIGH); 
  digitalWrite(2, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(10, LOW);
  digitalWrite(13, LOW);
}
void num6() {
  digitalWrite(11, HIGH); 
  digitalWrite(2, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(10, LOW);
  digitalWrite(13, LOW);
}
void num7() {
  digitalWrite(11, HIGH); 
  digitalWrite(2, HIGH);
  digitalWrite(6, LOW);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(10, LOW);
  digitalWrite(13, LOW);
}
void num8() {
  digitalWrite(11, LOW); 
  digitalWrite(2, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(10, LOW);
  digitalWrite(13, LOW);
}
void num9() {
  digitalWrite(11, LOW); 
  digitalWrite(2, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, HIGH);
  digitalWrite(8, LOW);
  digitalWrite(10, LOW);
  digitalWrite(13, LOW);
void loop() {
  buttonval = digitalRead(buttonpin);

  if(buttonval == HIGH){
    distance_mm = sensor.readRangeSingleMillimeters();
  }// reads range and displays it in millimeters 

  digitalWrite(transistor2, LOW);
  if(distance_mm >= 0 && distance_mm < 100) {
    num0();
  }else if(distance_mm >= 100 && distance_mm < 200){
    num1();
  }else if(distance_mm >= 200 && distance_mm < 300){
    num2();
  }else if(distance_mm >= 300 && distance_mm < 400){
    num3();
  }else if(distance_mm >= 400 && distance_mm < 500){
    num4();
  }else if(distance_mm >= 500 && distance_mm < 500){
    num5();
  }else{
    num9();
  }
  digitalWrite(transistor1, HIGH);
  delay(1);

  digitalWrite(transistor1, LOW);

    if(distance_mm >= 0 && distance_mm < 10) {
    num0();
  }else if(distance_mm >= 10 && distance_mm < 20){
    num1();
  }else if(distance_mm >= 20 && distance_mm < 30){
    num2();
  }else if(distance_mm >= 30 && distance_mm < 40){
    num3();
  }else if(distance_mm >= 40 && distance_mm < 50){
    num4();
  }else if(distance_mm >= 50 && distance_mm < 60){
    num5();
  }else if(distance_mm >= 60 && distance_mm < 70){
    num6();
  }else if(distance_mm >= 70 && distance_mm < 80){
    num7();
  }else if(distance_mm >= 80 && distance_mm < 90){
    num8();
  }else if(distance_mm >= 90 && distance_mm < 100){
    num9();
  }

    if(distance_mm >= 100 && distance_mm < 110) {
    num0();
  }else if(distance_mm >= 110 && distance_mm < 120){
    num1();
  }else if(distance_mm >= 120 && distance_mm < 130){
    num2();
  }else if(distance_mm >= 130 && distance_mm < 140){
    num3();
  }else if(distance_mm >= 140 && distance_mm < 150){
    num4();
  }else if(distance_mm >= 150 && distance_mm < 160){
    num5();
  }else if(distance_mm >= 160 && distance_mm < 170){
    num6();
  }else if(distance_mm >= 170 && distance_mm < 180){
    num7();
  }else if(distance_mm >= 180 && distance_mm < 190){
    num8();
  }else if(distance_mm >= 190 && distance_mm < 200){
    num9();
  }

    if(distance_mm >= 200 && distance_mm < 210) {
    num0();
  }else if(distance_mm >= 210 && distance_mm < 220){
    num1();
  }else if(distance_mm >= 220 && distance_mm < 230){
    num2();
  }else if(distance_mm >= 230 && distance_mm < 240){
    num3();
  }else if(distance_mm >= 240 && distance_mm < 250){
    num4();
  }else if(distance_mm >= 250 && distance_mm < 260){
    num5();
  }else if(distance_mm >= 260 && distance_mm < 270){
    num6();
  }else if(distance_mm >= 270 && distance_mm < 280){
    num7();
  }else if(distance_mm >= 280 && distance_mm < 290){
    num8();
  }else if(distance_mm >= 290 && distance_mm < 300){
    num9();
  }

    if(distance_mm >= 300 && distance_mm < 310) {
    num0();
  }else if(distance_mm >= 310 && distance_mm < 320){
    num1();
  }else if(distance_mm >= 320 && distance_mm < 330){
    num2();
  }else if(distance_mm >= 330 && distance_mm < 340){
    num3();
  }else if(distance_mm >= 340 && distance_mm < 350){
    num4();
  }else if(distance_mm >= 350 && distance_mm < 360){
    num5();
  }else if(distance_mm >= 360 && distance_mm < 370){
    num6();
  }else if(distance_mm >= 370 && distance_mm < 380){
    num7();
  }else if(distance_mm >= 380 && distance_mm < 390){
    num8();
  }else if(distance_mm >= 390 && distance_mm < 400){
    num9();
  }

      if(distance_mm >= 400 && distance_mm < 410) {
    num0();
  }else if(distance_mm >= 410 && distance_mm < 420){
    num1();
  }else if(distance_mm >= 420 && distance_mm < 430){
    num2();
  }else if(distance_mm >= 430 && distance_mm < 440){
    num3();
  }else if(distance_mm >= 440 && distance_mm < 450){
    num4();
  }else if(distance_mm >= 450 && distance_mm < 460){
    num5();
  }else if(distance_mm >= 460 && distance_mm < 470){
    num6();
  }else if(distance_mm >= 470 && distance_mm < 480){
    num7();
  }else if(distance_mm >= 480 && distance_mm < 490){
    num8();
  }else if(distance_mm >= 490 && distance_mm < 500){
    num9();
  }

      if(distance_mm >= 500 && distance_mm < 510) {
    num0();
  }else if(distance_mm >= 510 && distance_mm < 520){
    num1();
  }else if(distance_mm >= 520 && distance_mm < 530){
    num2();
  }else if(distance_mm >= 530 && distance_mm < 540){
    num3();
  }else if(distance_mm >= 540 && distance_mm < 550){
    num4();
  }else if(distance_mm >= 550 && distance_mm < 560){
    num5();
  }else if(distance_mm >= 560 && distance_mm < 570){
    num6();
  }else if(distance_mm >= 570 && distance_mm < 580){
    num7();
  }else if(distance_mm >= 580 && distance_mm < 590){
    num8();
  }else if(distance_mm >= 590 && distance_mm < 600){
    num9();
  }

  digitalWrite(transistor2, HIGH)
  delay(1);








  
}

}

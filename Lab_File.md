# Evaluation

## Aim:
Design a system for a box with four cabinets such that whenever an empty cabinet is occupied by anything, it automatically changes its color from green to blue.

## Apparatus:
Arduino Board, Resistance - 220ohm, Breadboard, Wires, Ultrasonic Sensors, LEDs.

## Circuit Diagram:
![Circuit Picture](https://user-images.githubusercontent.com/54620652/68406994-ca656e80-01a8-11ea-8eed-441e06ef4a31.png)

## Theory:
**Concepts Used -**\
***Ultrasonic Sensor:***\
Ultrasonic sensor is used for measuring distance or obstacle detection so this is best in the task to use this sensor as any object is place to box is detected by ultrasonic and then we work accordingly.\

**Learning and Observations -**
The task gives the environment to solve real time challenges and implementation of ideas and equipment that we will study in the class.it also tech us to manage the time to complete the given task. 

## Problems and Troubleshooting:
To make circuit in tinkaecad is very difficult because of many wiring it become complex and to handle it properly it required lot of concentration.

## Precautions:
1. The Arduino and its cable should be working properly.
2. Proper port of the Arduino should be selected.
3. The connections should be made neat and clean.
4. Desired resistance should be used.
5. LDR Module Should be working properly.

## Arduino Code:
```
const int trig1=12;
const int echo1=13;
const int trig2=11;
const int echo2=10;
const int trig3=9;
const int echo3=8;
const int trig4=6;
const int echo4=7;
const int led1=5;
const int led2=4;
const int led3=3;
const int led4=2;

void setup()
{
  pinMode(trig1, OUTPUT);
  pinMode(echo1, INPUT);
  pinMode(trig2, OUTPUT);
  pinMode(echo2, INPUT);
  pinMode(trig3, OUTPUT);
  pinMode(echo3, INPUT);
  pinMode(trig4, OUTPUT);
  pinMode(echo4, INPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  long duration, distance;
  digitalWrite(trig1, LOW);
  delayMicroseconds(2);
  digitalWrite(trig1, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig1, LOW);
  duration = pulseIn(echo1, HIGH);
  distance = (duration/2) / 29.1;
  if (distance < 200)
  { digitalWrite(led1,HIGH);
  }
  else {
  digitalWrite(led1,LOW);
  }
  delay(500);
  digitalWrite(trig2, LOW);
  delayMicroseconds(2);
  digitalWrite(trig2, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig2, LOW);
  duration = pulseIn(echo2, HIGH);
  distance = (duration/2) / 29.1;
  if (distance < 200)
  { digitalWrite(led2,HIGH);
  }
  else {
  digitalWrite(led2,LOW);
  }
  delay(500);
  digitalWrite(trig3, LOW);
  delayMicroseconds(2);
  digitalWrite(trig3, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig3, LOW);
  duration = pulseIn(echo3, HIGH);
  distance = (duration/2) / 29.1;
  if (distance < 200)
  { digitalWrite(led3,HIGH);
  }
  else {
  digitalWrite(led3,LOW);
  }
  delay(500);
  digitalWrite(trig4, LOW);
  delayMicroseconds(2);
  digitalWrite(trig4, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig4, LOW);
  duration = pulseIn(echo4, HIGH);
  distance = (duration/2) / 29.1;
  if (distance < 200)
  { digitalWrite(led4,HIGH);
  }
  else {
  digitalWrite(led4,LOW);
  }
  delay(500);
}
```

## Result:
The correct working of the given task was verified after uploading the program.

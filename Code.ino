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
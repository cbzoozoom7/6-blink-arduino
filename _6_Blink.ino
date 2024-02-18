int delayTime = 500;
int led0Pin = 0;
int led1Pin = 1;
int led2Pin = 2;
int led3Pin = 3;
int led4Pin = 4;
int led5Pin = 5;
void setup() {
  // put your setup code here, to run once:
pinMode(led0Pin,OUTPUT);
pinMode(led1Pin,OUTPUT);
pinMode(led2Pin,OUTPUT);
pinMode(led3Pin,OUTPUT);
pinMode(led4Pin,OUTPUT);
pinMode(led5Pin,OUTPUT);
}
void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(led0Pin,HIGH);
digitalWrite(led1Pin,LOW);
digitalWrite(led2Pin,LOW);
digitalWrite(led3Pin,LOW);
digitalWrite(led4Pin,LOW);
digitalWrite(led5Pin,LOW);
delay(delayTime);
digitalWrite(led0Pin,LOW);
digitalWrite(led1Pin,HIGH);
digitalWrite(led2Pin,LOW);
digitalWrite(led3Pin,LOW);
digitalWrite(led4Pin,LOW);
digitalWrite(led5Pin,LOW);
delay(delayTime);
digitalWrite(led0Pin,LOW);
digitalWrite(led1Pin,LOW);
digitalWrite(led2Pin,HIGH);
digitalWrite(led3Pin,LOW);
digitalWrite(led4Pin,LOW);
digitalWrite(led5Pin,LOW);
delay(delayTime);
digitalWrite(led0Pin,LOW);
digitalWrite(led1Pin,LOW);
digitalWrite(led2Pin,LOW);
digitalWrite(led3Pin,HIGH);
digitalWrite(led4Pin,LOW);
digitalWrite(led5Pin,LOW);
delay(delayTime);
digitalWrite(led0Pin,LOW);
digitalWrite(led1Pin,LOW);
digitalWrite(led2Pin,LOW);
digitalWrite(led3Pin,LOW);
digitalWrite(led4Pin,HIGH);
digitalWrite(led5Pin,LOW);
delay(delayTime);
digitalWrite(led0Pin,LOW);
digitalWrite(led1Pin,LOW);
digitalWrite(led2Pin,LOW);
digitalWrite(led3Pin,LOW);
digitalWrite(led4Pin,LOW);
digitalWrite(led5Pin,HIGH);
delay(delayTime);
}

#define speedL 10
#define IN1 9
#define IN2 8
#define IN3 7
#define IN4 6
#define speedR 5
#define trig 3
#define echo 4
long duration,distance;
void setup() {
for(int i=5 ; i<=11 ; i++)
{
pinMode(i, OUTPUT);
}
pinMode(echo, INPUT);
}

void Ultrasonic(){
digitalWrite(trig, LOW);
delayMicroseconds(2);
digitalWrite(trig, HIGH);
delayMicroseconds(10);
digitalWrite(trig, LOW);
duration = pulseIn(echo, HIGH);
distance = (duration/2) * 0.0343;
}
void forword()
{
digitalWrite(IN1, HIGH);
digitalWrite(IN2, LOW);
digitalWrite(IN3, HIGH);
digitalWrite(IN4, LOW);
analogWrite(speedL,150);
analogWrite(speedR,150);
}

void backword()
{
digitalWrite(IN1, LOW);
digitalWrite(IN2, HIGH);
digitalWrite(IN3, LOW);
digitalWrite(IN4, HIGH);
analogWrite(speedL,150);
analogWrite(speedR,150);
}
void left()
{
digitalWrite(IN1, LOW);
digitalWrite(IN2, LOW);
digitalWrite(IN3, HIGH);
digitalWrite(IN4, LOW);
analogWrite(speedL,0);
analogWrite(speedR,150);
}

void right()
{
digitalWrite(IN1, HIGH);
digitalWrite(IN2, LOW);
digitalWrite(IN3, LOW);
digitalWrite(IN4, LOW);
analogWrite(speedL,150);
analogWrite(speedR,0);
}
void stopp(){
digitalWrite(speedL, LOW);
digitalWrite(speedR, LOW);
}
void loop(){
Ultrasonic();
if(distance<20){
stopp(); delay(250);
backword();delay(500);
right(); delay(1000);
}
else{ forword(); }
}
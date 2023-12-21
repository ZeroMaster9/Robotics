#define speedL 10
#define IN1 9
#define IN2 8
#define IN3 7
#define IN4 6
#define speedR 5
char Reading;
void setup()
{
Serial.begin (9600);
for(int i=5 ; i<=10 ; i++)
{
pinMode(i, OUTPUT);
}
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
void stopp() {
digitalWrite(IN1, LOW);
digitalWrite(IN2, LOW);
digitalWrite(IN3, LOW);
digitalWrite(IN4, LOW);
analogWrite(speedL,0);
analogWrite(speedR,0); }
void loop() {
if(Serial.available()>0){
Reading=Serial.read();
switch(Reading){
case ‘F’: forword(); break;
case ’B’: backword(); break;
case ‘R’: right(); break;
case ‘L’ : left(); break;
case ‘S’ :stopp(); break;
}
}
}
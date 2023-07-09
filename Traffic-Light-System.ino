int GREEN_LED = 10;
int RED_LED = 9;
int YELLOW_LED = 8;
int on = 3000;
int off = 1000;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(GREEN_LED, OUTPUT);
pinMode(RED_LED, OUTPUT);
pinMode(YELLOW_LED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  // Trafic Light system
  // When Light is Green
Serial.println("Green Led is On");
digitalWrite(GREEN_LED,HIGH);
digitalWrite(YELLOW_LED,LOW);
digitalWrite(RED_LED, LOW);
delay(on);
// When Light is Yellow before Red Light
Serial.println("Yellow Led is On");
digitalWrite(GREEN_LED, LOW);
digitalWrite(YELLOW_LED, HIGH);
digitalWrite(RED_LED, LOW);
delay(off);
// When light is RED
Serial.println("Red Led is On");
digitalWrite(GREEN_LED, LOW);
digitalWrite(YELLOW_LED, LOW);
digitalWrite(RED_LED, HIGH);
delay(on);
// Yellow Light again before Green Light
Serial.println("Yellow Led is On");
digitalWrite(GREEN_LED, LOW);
digitalWrite(YELLOW_LED, HIGH);
digitalWrite(RED_LED, LOW);
delay(off);
}

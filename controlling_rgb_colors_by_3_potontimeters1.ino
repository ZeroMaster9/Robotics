
int InputRed = A0;
int InputGreen = A1;
int InputBlue = A2;

const int RedPin = 9;
const int GreenPin = 10;
const int BluePin = 11;

int ValueRed = 0;
int ValueGreen = 0;
int ValueBlue = 0;

void setup() {
  Serial.begin(9600);
  pinMode(RedPin, OUTPUT);
  pinMode(GreenPin, OUTPUT);
  pinMode(BluePin, OUTPUT);

}

void loop() {
  ValueRed = analogRead(InputRed);
  ValueGreen = analogRead(InputGreen);
  ValueBlue = analogRead(InputBlue);


  ValueRed = map(ValueRed, 0, 1023, 0, 255);
  ValueGreen = map(ValueGreen, 0, 1023, 0, 255);
  ValueBlue = map(ValueBlue, 0, 1023, 0, 255);
  analogWrite(RedPin, ValueRed);
  analogWrite(GreenPin, ValueGreen);
  analogWrite(BluePin, ValueBlue);

}
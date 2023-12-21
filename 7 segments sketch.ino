#define segmentA 7
#define segmentB 6
#define segmentC 5
#define segmentD 4
#define segmentE 3
#define segmentF 2
#define segmentG 1

// This function displays numbers from 0 to 9
void show_number(int num)  
{
  switch(num)
  {
    case 0:  
    digitalWrite(segmentA, LOW); 
    digitalWrite(segmentB, LOW); 
    digitalWrite(segmentC, LOW);
    digitalWrite(segmentD, LOW);
    digitalWrite(segmentE, LOW);
    digitalWrite(segmentF, LOW);
    digitalWrite(segmentG, HIGH); 
    break;
    case 1:  
    digitalWrite(segmentA, HIGH);  
    digitalWrite(segmentB, LOW);
    digitalWrite(segmentC, LOW);
    digitalWrite(segmentD, HIGH);  
    digitalWrite(segmentE, HIGH);
    digitalWrite(segmentF, HIGH);
    digitalWrite(segmentG, HIGH);
    break;
    case 2:
    digitalWrite(segmentA, LOW);
    digitalWrite(segmentB, LOW);
    digitalWrite(segmentC, HIGH);
    digitalWrite(segmentD, LOW);
    digitalWrite(segmentE, LOW);
    digitalWrite(segmentF, HIGH);
    digitalWrite(segmentG, LOW);
    break;
    case 3:
    digitalWrite(segmentA, LOW);
    digitalWrite(segmentB, LOW);
    digitalWrite(segmentC, LOW);
    digitalWrite(segmentD, LOW);
    digitalWrite(segmentE, HIGH);
    digitalWrite(segmentF, HIGH);
    digitalWrite(segmentG, LOW);
    break;
    case 4:
    digitalWrite(segmentA, HIGH);
    digitalWrite(segmentB, LOW);
    digitalWrite(segmentC, LOW);
    digitalWrite(segmentD, HIGH);
    digitalWrite(segmentE, HIGH);
    digitalWrite(segmentF, LOW);
    digitalWrite(segmentG, LOW);
    break;
    case 5:
    digitalWrite(segmentA, LOW);
    digitalWrite(segmentB, HIGH);
    digitalWrite(segmentC, LOW);
    digitalWrite(segmentD, LOW);
    digitalWrite(segmentE, HIGH);
    digitalWrite(segmentF, LOW);
    digitalWrite(segmentG, LOW);
    break;
    case 6:
    digitalWrite(segmentA, LOW);
    digitalWrite(segmentB, HIGH);
    digitalWrite(segmentC, LOW);
    digitalWrite(segmentD, LOW);
    digitalWrite(segmentE, LOW);
    digitalWrite(segmentF, LOW);
    digitalWrite(segmentG, LOW);
    break;
    case 7:
    digitalWrite(segmentA, LOW);
    digitalWrite(segmentB, LOW);
    digitalWrite(segmentC, LOW);
    digitalWrite(segmentD, HIGH);
    digitalWrite(segmentE, HIGH);
    digitalWrite(segmentF, HIGH);
    digitalWrite(segmentG, HIGH);
    break;
    case 8:
    digitalWrite(segmentA, LOW);
    digitalWrite(segmentB, LOW);
    digitalWrite(segmentC, LOW);
    digitalWrite(segmentD, LOW);
    digitalWrite(segmentE, LOW);
    digitalWrite(segmentF, LOW);
    digitalWrite(segmentG, LOW);
    break;
    case 9:
    digitalWrite(segmentA, LOW);
    digitalWrite(segmentB, LOW);
    digitalWrite(segmentC, LOW);
    digitalWrite(segmentD, LOW);
    digitalWrite(segmentE, HIGH);
    digitalWrite(segmentF, LOW);
    digitalWrite(segmentG, LOW);
    break;
    default:
    digitalWrite(segmentA, HIGH);
    digitalWrite(segmentB, LOW);
    digitalWrite(segmentC, LOW);
    digitalWrite(segmentD, LOW);
    digitalWrite(segmentE, LOW);
    digitalWrite(segmentF, HIGH);
    digitalWrite(segmentG, LOW);
    break;
  }
}

void setup() {
  pinMode(segmentA , OUTPUT); 
  pinMode(segmentB , OUTPUT);
  pinMode(segmentC , OUTPUT);
  pinMode(segmentD , OUTPUT);
  pinMode(segmentE , OUTPUT);
  pinMode(segmentF , OUTPUT);
  pinMode(segmentG , OUTPUT);
}

void loop() {
  int i;
  for(i = 0; i<=9; i++)
  {
     show_number(i);
    delay(1000);
  }
  for(i = 9; i>=0; i--)
  {
     show_number(i);
    delay(1000);
  }
  
}
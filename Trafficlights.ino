// C++ code
//
int Red=13;
int Yellow=12;
int Green=8;

int Red2=7;
int Yellow2=4;
int Green2=2;
void setup()
{
  pinMode(Red, OUTPUT);
  pinMode(Yellow,OUTPUT);
  pinMode(Green,OUTPUT);
  pinMode(Red2,OUTPUT);
  pinMode(Yellow2,OUTPUT);
  pinMode(Green2,OUTPUT);
  
}

void loop()
{
  digitalWrite(Red, HIGH);
  digitalWrite(Yellow, LOW);
  digitalWrite(Green,LOW);
  digitalWrite(Red2,LOW);
  digitalWrite(Yellow2,LOW);
  digitalWrite(Green2,HIGH);
  
  delay(6000);
  
  digitalWrite(Red,LOW);
  digitalWrite(Yellow,HIGH);
  digitalWrite(Green,LOW);
  digitalWrite(Red2,LOW);
  digitalWrite(Yellow2,HIGH);
  digitalWrite(Green2,LOW);
  delay(3000);
  
  digitalWrite(Red,LOW);
  digitalWrite(Yellow,LOW);
  digitalWrite(Green,HIGH);
  digitalWrite(Red2,HIGH);
  digitalWrite(Yellow2,LOW);
  digitalWrite(Green2,LOW);
  delay(6000);
  
  digitalWrite(Red,LOW);
  digitalWrite(Yellow,HIGH);
  digitalWrite(Green,LOW);
  digitalWrite(Red2,LOW);
  digitalWrite(Yellow2,HIGH);
  digitalWrite(Green2,LOW);
  delay(3000); 
  
}
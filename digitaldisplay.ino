int input;
void setup()
{
  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  if(Serial.available()>0)
  {
    input=Serial.read();
    input=input-'0';
    digitalWrite(0,LOW);
    delay(10);
    if(input&0x1)
	  digitalWrite(1,HIGH);
    else 
      digitalWrite(1,LOW);
    if((input>>1)&0x1)
	  digitalWrite(2,HIGH);
    else 
      digitalWrite(2,LOW);
    if((input>>2)&0x1)
	  digitalWrite(3,HIGH);
    else 
      digitalWrite(3,LOW);
    if((input>>3)&0x1)
	  digitalWrite(4,HIGH);
    else 
      digitalWrite(4,LOW);
    digitalWrite(0,HIGH);
    delay(10);
  }
}
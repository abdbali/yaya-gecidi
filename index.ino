int kled=8;
int yled=7;
int buton=6;
int deger=0;
void setup()
{
  pinMode(kled,OUTPUT);
  pinMode(yled,OUTPUT);
  pinMode(buton,INPUT);
}
void loop()
{
  deger=digitalRead(buton);
  if (deger==HIGH)
  {digitalWrite(yled,HIGH);
   digitalWrite(kled,LOW);
   delay(1000);
   digitalWrite(yled,LOW);
   digitalWrite(kled,HIGH);
   delay(5000);
  }
  else 
  {
    digitalWrite(yled,LOW);
   digitalWrite(kled,HIGH);
  }
  
}

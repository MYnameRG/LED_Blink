void setup() 
{
  // put your setup code here, to run once:
  pinMode(13,OUTPUT); 
}

void loop() 
{
  // put your main code here, to run repeatedly:
  digitalWrite(13,HIGH);
  delay(500); //1ms delay is there
  digitalWrite(13,LOW);
  delay(500); //0.5ms delay is there
}

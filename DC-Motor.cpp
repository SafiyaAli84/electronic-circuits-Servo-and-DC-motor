// C++ code

void setup()
{
 pinMode(13,OUTPUT);
 pinMode(12,OUTPUT);
 pinMode(8,OUTPUT);
 pinMode(7,OUTPUT);
 
}

void loop()
{
  digitalWrite(13, LOW);
  digitalWrite(12, HIGH);
  digitalWrite(8,HIGH );
  digitalWrite(7,LOW );
  
}

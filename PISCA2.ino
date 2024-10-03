void setup()
{
  //Define a porta do led como saida
  pinMode(12, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(2, OUTPUT);
}
  
void loop()
{


  digitalWrite(12, HIGH);
  digitalWrite(8, LOW);
  digitalWrite(2, LOW);
  digitalWrite(6, LOW);
  delay (150);
  
  digitalWrite(12, LOW);
  digitalWrite(8, HIGH);
  digitalWrite(2, LOW);
  digitalWrite(6, LOW);
  delay (150);
  
  digitalWrite(12, LOW);
  digitalWrite(8, LOW);
  digitalWrite(2, HIGH);
  digitalWrite(6, LOW);
  delay (150);
  
  digitalWrite(12, LOW);
  digitalWrite(8, LOW);
  digitalWrite(2, LOW);
  digitalWrite(6, HIGH);
  delay (150);
}
  
  

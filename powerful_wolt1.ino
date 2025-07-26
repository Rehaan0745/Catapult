
int ENA = 11; 
int IN1 = 6; 
int IN2 = 5;

void setup()
{
  pinMode(ENA, OUTPUT); 
  pinMode(IN1, OUTPUT); 
  pinMode(IN2, OUTPUT); 

  digitalWrite(IN1, LOW); 
  digitalWrite(IN2, LOW); 
}


void loop() {

  analogWrite(ENA, 255); 
  digitalWrite(IN1, HIGH); 
  digitalWrite(IN2, LOW); 
  delay(4000); 

  digitalWrite(IN1, LOW); 
  digitalWrite(IN2, HIGH);
  delay(4000);

  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  delay(1000);

  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);


  for (int i = 0; i < 256; i++) {
    analogWrite(ENA, i);
    delay(20);
  }

  for (int i = 255; i >= 0; --i) {
    analogWrite(ENA, i);
    delay(20);
  }

  
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  delay(1000);
}
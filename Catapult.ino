int IR = 12;
int ENA = 2;  
int IN1 = 8; 
int IN2 = 9;

void setup()
{
  pinMode(IR,INPUT);
  pinMode(ENA, OUTPUT); 
  pinMode(IN1, OUTPUT); 
  pinMode(IN2, OUTPUT);
  Serial.begin(9600);
  
  digitalWrite(IN1, LOW); 
  digitalWrite(IN2, LOW); 
}


void loop() {
  int sensor=digitalRead(IR);
  if (sensor==0)
  {
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, HIGH);


    for (int i = 0; i < 255; i=i+50) {
      analogWrite(ENA, i);
      delay(100);
    }
      digitalWrite(IN1,HIGH) ;
      digitalWrite(IN2,HIGH) ;
      delay(100) ;

     
  }
  delay(4000);
}
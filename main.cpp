// C++ code
  int workTime = 12000;
  int restTime = 5000;
  short greenLedPin = 13; 
  short redLedPin = 12;
  short flipPin = 9;
  short buzzerPin = 4;
void setup()
{   
  pinMode(greenLedPin, OUTPUT);
  pinMode(redLedPin, OUTPUT);
  pinMode(flipPin, INPUT);
  pinMode(buzzerPin, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  pinMode(flipPin, INPUT);
  digitalWrite(greenLedPin, HIGH);
  delay(workTime);
  Serial.print(digitalRead(flipPin));
  
  while(digitalRead(flipPin) == LOW){
    Serial.print(digitalRead(flipPin));
  	digitalWrite(buzzerPin, HIGH);
    Serial.print(flipPin);
  }
  
  digitalWrite(buzzerPin, LOW);
  
  digitalWrite(greenLedPin, LOW);
  
  digitalWrite(redLedPin, HIGH);
  delay(restTime);
  
  while(digitalRead(flipPin) == LOW){
    Serial.print(digitalRead(flipPin) == LOW);
  	digitalWrite(buzzerPin, HIGH);
  }
    digitalWrite(buzzerPin, LOW);
  	digitalWrite(redLedPin, LOW);

}
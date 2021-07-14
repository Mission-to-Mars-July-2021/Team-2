int const FORWARD_RIGHT = 7;
int const REVERSE_RIGHT = 8;
int const ENABLE_RIGHT = 9;
int const ENABLE_LEFT = 10;
int const FORWARD_LEFT = 11;
int const REVERSE_LEFT = 12;
const int LEFT_FEEDBACK = 2; 
const int RIGHT_FEEDBACK = 3;
int speedLeft = 200;
int speedRight = 200;


void setup()
{
  pinMode(FORWARD_LEFT, OUTPUT);
  pinMode(REVERSE_LEFT, OUTPUT);
  pinMode(REVERSE_RIGHT, OUTPUT);
  pinMode(FORWARD_RIGHT, OUTPUT);
  pinMode(ENABLE_RIGHT, OUTPUT);
  pinMode(ENABLE_LEFT, OUTPUT);
}

void loop()
    {    
  
  if(speedLeft < 250) {
    speedLeft = speedLeft = 20;
    analogWrite(ENABLE_LEFT, speedLeft);
    digitalWrite(FORWARD_LEFT, HIGH);
    digitalWrite(REVERSE_LEFT, HIGH);  
  }
  
  if(speedRight < 250) {
    speedRight = speedRight = 20;
    analogWrite(ENABLE_RIGHT, speedRight);
    digitalWrite(FORWARD_RIGHT, HIGH);
    digitalWrite(REVERSE_RIGHT, HIGH);  
  }
      
  forwardsright();
  forwardsleft();
  
  Serial.println(millis());
  if (millis() > 5000) {    
    Serial.print("Over 5 seconds gone");
    exit(0);
  }

  }

  void forwardsright()
  {
  analogWrite(ENABLE_RIGHT, 255);
  analogWrite(ENABLE_LEFT, 40);
  digitalWrite(FORWARD_RIGHT, HIGH);
  digitalWrite(FORWARD_LEFT, HIGH);
  digitalWrite(REVERSE_LEFT, LOW);
  digitalWrite(REVERSE_RIGHT, LOW);
  }
  
  void forwardsleft()
  {
  analogWrite(ENABLE_RIGHT, 40);
  analogWrite(ENABLE_LEFT, 255);
  digitalWrite(FORWARD_RIGHT, HIGH);
  digitalWrite(FORWARD_LEFT, HIGH);
  digitalWrite(REVERSE_LEFT, LOW);
  digitalWrite(REVERSE_RIGHT, LOW);
  }
  
  void backwards() 
  {
  analogWrite(ENABLE_RIGHT, 40);
  analogWrite(ENABLE_LEFT, 255);
  digitalWrite(FORWARD_LEFT, LOW);
  digitalWrite(FORWARD_RIGHT, LOW);
  digitalWrite(REVERSE_LEFT, HIGH);
  digitalWrite(REVERSE_RIGHT, HIGH);
  }
  
  void stop() 
  {
  digitalWrite(ENABLE_RIGHT, LOW);
  digitalWrite(ENABLE_LEFT, LOW);
  digitalWrite(FORWARD_LEFT, LOW);
  digitalWrite(FORWARD_RIGHT, LOW);
  digitalWrite(REVERSE_LEFT, HIGH);
  digitalWrite(REVERSE_RIGHT, HIGH);
  }        

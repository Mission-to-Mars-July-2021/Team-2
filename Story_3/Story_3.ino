int const FORWARD_RIGHT = 7;
int const REVERSE_RIGHT = 8;
int const ENABLE_RIGHT = 9;
int const ENABLE_LEFT = 10;
int const FORWARD_LEFT = 11;
int const REVERSE_LEFT = 12;

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
    digitalWrite(ENABLE_RIGHT, HIGH);
     digitalWrite(ENABLE_LEFT, HIGH);
    digitalWrite(FORWARD_RIGHT, HIGH);
    digitalWrite(FORWARD_LEFT, HIGH);
    digitalWrite(REVERSE_LEFT, LOW);
    digitalWrite(REVERSE_RIGHT, LOW);
    delay(5000);
    digitalWrite(ENABLE_RIGHT, LOW);
    digitalWrite(ENABLE_LEFT, LOW);
    digitalWrite(FORWARD_LEFT, LOW);
    digitalWrite(FORWARD_RIGHT, LOW);
    digitalWrite(REVERSE_LEFT, LOW);
    digitalWrite(REVERSE_RIGHT, LOW);
    delay(1000); 
    digitalWrite(ENABLE_RIGHT, HIGH);
    digitalWrite(ENABLE_LEFT, HIGH);
    digitalWrite(FORWARD_LEFT, LOW);
    digitalWrite(FORWARD_RIGHT, LOW);
    digitalWrite(REVERSE_LEFT, HIGH);
    digitalWrite(REVERSE_RIGHT, HIGH);
    delay(2000);
                 }
                  

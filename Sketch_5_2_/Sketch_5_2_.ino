int const FORWARD_RIGHT = 7;
int const REVERSE_RIGHT = 8;
int const ENABLE_RIGHT = 9;
int const ENABLE_LEFT = 10;
int const FORWARD_LEFT = 11;
int const REVERSE_LEFT = 12;
const int LEFT_FEEDBACK = 2; 
const int RIGHT_FEEDBACK = 3;


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
    analogWrite(ENABLE_RIGHT, 255);
     analogWrite(ENABLE_LEFT, 40);
    digitalWrite(FORWARD_RIGHT, HIGH);
    digitalWrite(FORWARD_LEFT, LOW);
    digitalWrite(REVERSE_LEFT, LOW);
    digitalWrite(REVERSE_RIGHT, LOW);
    delay(2000);
    analogWrite(ENABLE_RIGHT, 40);
    analogWrite(ENABLE_LEFT, 255);
    digitalWrite(FORWARD_LEFT, HIGH);
    digitalWrite(FORWARD_RIGHT, LOW);
    digitalWrite(REVERSE_LEFT, LOW);
    digitalWrite(REVERSE_RIGHT, LOW);
    delay(2000);
    analogWrite(ENABLE_RIGHT, 255);
    analogWrite(ENABLE_LEFT, 40);
    digitalWrite(FORWARD_RIGHT, HIGH);
    digitalWrite(FORWARD_LEFT, LOW);
    digitalWrite(REVERSE_LEFT, LOW);
    digitalWrite(REVERSE_RIGHT, LOW);
    delay(2000);
    analogWrite(ENABLE_RIGHT, 40);
    analogWrite(ENABLE_LEFT, 255);
    digitalWrite(FORWARD_LEFT, HIGH);
    digitalWrite(FORWARD_RIGHT, LOW);
    digitalWrite(REVERSE_LEFT, LOW);
    digitalWrite(REVERSE_RIGHT, LOW);
    delay(2000);
  
    exit(0); 
                 }
                  

int const FORWARD_RIGHT = 7;
int const REVERSE_RIGHT = 8;
int const ENABLE_RIGHT = 9;
int const ENABLE_LEFT = 10;
int const FORWARD_LEFT = 11;
int const REVERSE_LEFT = 12;
const int LEFT_FEEDBACK = 2; 
const int RIGHT_FEEDBACK = 3;

volatile int leftcounter = 0;
volatile int rightcounter = 0;
  

void setup()
{
  Serial.begin(115200);
  attachInterrupt(digitalPinToInterrupt(LEFT_FEEDBACK), LeftMotorISR,RISING);
  attachInterrupt(digitalPinToInterrupt(RIGHT_FEEDBACK), RightMotorISR,RISING);
  pinMode(FORWARD_LEFT, OUTPUT);
  pinMode(REVERSE_LEFT, OUTPUT);
  pinMode(REVERSE_RIGHT, OUTPUT);
  pinMode(FORWARD_RIGHT, OUTPUT);
  pinMode(ENABLE_RIGHT, OUTPUT);
  pinMode(ENABLE_LEFT, OUTPUT);
    
}

void loop()   // this is a loop!!!!
    {    
  forwards();
  
  Serial.print("LEFT COUNTER");
    Serial.println(leftcounter);
    Serial.print("RIGHT COUNTER");
  Serial.println(rightcounter);


if(leftcounter >= 870) {
  Serial.println("Counter has reached 870");
  stop();
  delay(100000);
}
}


void LeftMotorISR() {
  leftcounter++;
}

void RightMotorISR() {
  rightcounter++;
}

  void forwards(){
  digitalWrite(ENABLE_RIGHT, HIGH);
  digitalWrite(ENABLE_LEFT, HIGH);
  digitalWrite(FORWARD_RIGHT, HIGH);
  digitalWrite(FORWARD_LEFT, HIGH);
  digitalWrite(REVERSE_LEFT, LOW);
  digitalWrite(REVERSE_RIGHT, LOW);
}
  void backwards() {
  digitalWrite(ENABLE_RIGHT, HIGH);
  digitalWrite(ENABLE_LEFT, HIGH);
  digitalWrite(FORWARD_LEFT, LOW);
  digitalWrite(FORWARD_RIGHT, LOW);
  digitalWrite(REVERSE_LEFT, HIGH);
  digitalWrite(REVERSE_RIGHT, HIGH);
}
void stop() {
  digitalWrite(ENABLE_RIGHT, LOW);
  digitalWrite(ENABLE_LEFT, LOW);
  digitalWrite(FORWARD_LEFT, LOW);
  digitalWrite(FORWARD_RIGHT, LOW);
  digitalWrite(REVERSE_LEFT, HIGH);
  digitalWrite(REVERSE_RIGHT, HIGH);
  
}
                  

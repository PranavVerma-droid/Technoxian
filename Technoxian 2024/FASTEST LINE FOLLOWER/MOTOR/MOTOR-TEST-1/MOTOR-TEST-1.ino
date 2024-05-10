// Motor A
int motorPin1 = 2; // Pin D2 on Arduino connected to IN1 on L298N
int motorPin2 = 3; // Pin D3 on Arduino connected to IN2 on L298N
// Motor B
int motorPin3 = 4; // Pin D4 on Arduino connected to IN3 on L298N
int motorPin4 = 5; // Pin D5 on Arduino connected to IN4 on L298N

void setup() {
  // Set the motor control pins to be outputs
  pinMode(motorPin1, OUTPUT);
  pinMode(motorPin2, OUTPUT);
  pinMode(motorPin3, OUTPUT);
  pinMode(motorPin4, OUTPUT);
}

void loop() {
  // Motor A: Forward
  digitalWrite(motorPin1, HIGH);
  digitalWrite(motorPin2, LOW);
  // Motor B: Forward
  digitalWrite(motorPin3, HIGH);
  digitalWrite(motorPin4, LOW);
  
  delay(2000); // Run motors forward for 2 seconds
  
  // Motor A: Stop
  digitalWrite(motorPin1, LOW);
  digitalWrite(motorPin2, LOW);
  // Motor B: Stop
  digitalWrite(motorPin3, LOW);
  digitalWrite(motorPin4, LOW);
  
  delay(1000); // Wait for 1 second
  
  // Motor A: Reverse
  digitalWrite(motorPin1, LOW);
  digitalWrite(motorPin2, HIGH);
  // Motor B: Reverse
  digitalWrite(motorPin3, LOW);
  digitalWrite(motorPin4, HIGH);
  
  delay(2000); // Run motors in reverse for 2 seconds
  
  // Motor A: Stop
  digitalWrite(motorPin1, LOW);
  digitalWrite(motorPin2, LOW);
  // Motor B: Stop
  digitalWrite(motorPin3, LOW);
  digitalWrite(motorPin4, LOW);
  
  delay(1000); // Wait for 1 second
}

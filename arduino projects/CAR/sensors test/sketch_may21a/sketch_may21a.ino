// 1. PIN DEFINITIONS (Using safe ESP32 GPIOs: 16, 17, 18, 19)
const int motor1pin1 = 2; // Connected to IN1 (Left Side)
const int motor1pin2 = 3; // Connected to IN2 (Left Side)
const int motor2pin1 = 4; // Connected to IN3 (Right Side)
const int motor2pin2 = 5; // Connected to IN4 (Right Side)

void setup() {
  // Configure the 4 control pins as outputs
  pinMode(motor1pin1, OUTPUT);
  pinMode(motor1pin2, OUTPUT);
  pinMode(motor2pin1, OUTPUT);
  pinMode(motor2pin2, OUTPUT);
  
  // Ensure the car starts completely stopped
  frenar();
}

void loop() {
  avanzar();
  delay(2000);        // Move forward for 2 seconds
  
  frenar();
  delay(500);         // Safety brake pause
  
  girarDerecha();
  delay(1500);        // Spin right on its axis for 1.5 seconds
  
  frenar();
  delay(500);         // Safety brake pause
  
  retroceder();
  delay(1000);        // Reverse for 1 second
  
  frenar();
  delay(4000);        // Sit still for 4 seconds before repeating
}

// 2. MOVEMENT LOGIC (Based on your confirmed wiring layout)

void avanzar() {
  digitalWrite(motor1pin1, LOW);   
  digitalWrite(motor1pin2, HIGH);  
  
  digitalWrite(motor2pin1, LOW);   
  digitalWrite(motor2pin2, HIGH);  
}

void retroceder() {
  digitalWrite(motor1pin1, HIGH);  
  digitalWrite(motor1pin2, LOW);   
  
  digitalWrite(motor2pin1, HIGH);  
  digitalWrite(motor2pin2, LOW);   
}

void girarDerecha() {
  // Left side forward, Right side backward
  digitalWrite(motor1pin1, LOW);
  digitalWrite(motor1pin2, HIGH);
  
  digitalWrite(motor2pin1, HIGH);
  digitalWrite(motor2pin2, LOW);
}

void girarIzquierda() {
  // Left side backward, Right side forward
  digitalWrite(motor1pin1, HIGH);
  digitalWrite(motor1pin2, LOW);
  
  digitalWrite(motor2pin1, LOW);
  digitalWrite(motor2pin2, HIGH);
}

void frenar() {
  digitalWrite(motor1pin1, LOW);
  digitalWrite(motor1pin2, LOW);
  digitalWrite(motor2pin1, LOW);
  digitalWrite(motor2pin2, LOW);
}

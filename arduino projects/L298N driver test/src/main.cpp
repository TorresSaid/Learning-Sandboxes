#include <Arduino.h>

// 1. DEFINICIÓN DE PINES (Señales lógicas hacia el L298N)
const int motor1pin1 = 2; // Conectado a IN1 (Control Lado Izquierdo)
const int motor1pin2 = 3; // Conectado a IN2 (Control Lado Izquierdo)
const int motor2pin1 = 4; // Conectado a IN3 (Control Lado Derecho)
const int motor2pin2 = 5; // Conectado a IN4 (Control Lado Derecho)

// 2. PROTOTIPOS DE FUNCIONES void avanzar();
void avanzar();
void retroceder();
void girarDerecha();
void girarIzquierda();
void frenar();
void girar();


void setup() {
  // Configuracion 4 pines de control como salidas
  pinMode(motor1pin1, OUTPUT);
  pinMode(motor1pin2, OUTPUT);
  pinMode(motor2pin1, OUTPUT);
  pinMode(motor2pin2, OUTPUT);
  
}


void loop(){
 
  avanzar();
  delay(1000);        
  
  frenar();
  delay(500);         
  
  girarDerecha();
  delay(500);        
  
  frenar();
  delay(500);         

  retroceder();
  delay(1000);        
  
  frenar();
  delay(1500);        

  girarIzquierda();
  delay(5000);

  frenar();
  delay(4000);
}

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
  // Lado izquierdo avanza (LOW/HIGH) y lado derecho retrocede (HIGH/LOW)
  digitalWrite(motor1pin1, LOW);
  digitalWrite(motor1pin2, HIGH);
  
  digitalWrite(motor2pin1, HIGH);
  digitalWrite(motor2pin2, LOW);
}

void girarIzquierda() {
  // Lado izquierdo retrocede (HIGH/LOW) y lado derecho avanza (LOW/HIGH)
  digitalWrite(motor1pin1, HIGH);
  digitalWrite(motor1pin2, LOW);
  
  digitalWrite(motor2pin1, LOW);
  digitalWrite(motor2pin2, HIGH);
}

void frenar() {
  // Todo apagado
  digitalWrite(motor1pin1, LOW);
  digitalWrite(motor1pin2, LOW);
  digitalWrite(motor2pin1, LOW);
  digitalWrite(motor2pin2, LOW);
}

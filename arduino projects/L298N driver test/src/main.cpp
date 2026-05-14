#include <Arduino.h>

// 1. DEFINICIÓN DE PINES (Señales lógicas hacia el L298N)
const int motor1pin1 = 2; // Conectado a IN1 (Control Lado Izquierdo)
const int motor1pin2 = 3; // Conectado a IN2 (Control Lado Izquierdo)
const int motor2pin1 = 4; // Conectado a IN3 (Control Lado Derecho)
const int motor2pin2 = 5; // Conectado a IN4 (Control Lado Derecho)

// 2. PROTOTIPOS DE FUNCIONES (Obligatorio para PlatformIO / C++)
void avanzar();
void retroceder();
void girarDerecha();
void girarIzquierda();
void frenar();
void girar();

// 3. CONFIGURACIÓN INICIAL
void setup() {
  // Configura los 4 pines de control como salidas
  pinMode(motor1pin1, OUTPUT);
  pinMode(motor1pin2, OUTPUT);
  pinMode(motor2pin1, OUTPUT);
  pinMode(motor2pin2, OUTPUT);
  
}

// 4. RUTINA DE PRUEBA PRINCIPAL
void loop() {
 
  avanzar();
  delay(1000);        // Camina recto hacia adelante por 3 segundos
  
  frenar();
  delay(500);         // Pausa de seguridad de medio segundo para no dañar los engranajes
  
  girarDerecha();
  delay(500);        // Gira a la derecha sobre su propio eje por 1.5 segundos
  
  frenar();
  delay(500);         // Pausa de seguridad
  
  retroceder();
  delay(1000);        // Camina en reversa por 2 segundos
  
  frenar();
  delay(1500);        // Se queda quieto 4 segundos antes de reiniciar todo el ciclo

  girarIzquierda();
  delay(5000);

  frenar();
  delay(4000);


}

// 5. LÓGICA DE LAS FUNCIONES DE MOVIMIENTO
// (Ajustada para motores montados en espejo con cableado simétrico)



void avanzar() {
  // CONFIRMADO: Ambos lados avanzan con LOW/HIGH en tu cableado
  digitalWrite(motor1pin1, LOW);   
  digitalWrite(motor1pin2, HIGH);  
  
  digitalWrite(motor2pin1, LOW);   
  digitalWrite(motor2pin2, HIGH);  
}

void retroceder() {
  // El opuesto exacto de avanzar para ir en reversa recta
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

void girar() {
 
  digitalWrite(motor1pin1, LOW);
  digitalWrite(motor1pin2, LOW);
  digitalWrite(motor2pin1, LOW);
  digitalWrite(motor2pin2, LOW);



}

#include <ESP32Servo.h> 

Servo myservo;  
int servoPin = 18;      
ins on the ESP32-S2: 1-20 are recommended for analog input
#if defined(CONFIG_IDF_TARGET_ESP32S2) || defined(CONFIG_IDF_TARGET_ESP32S3)
int potPin = 10;       
#elif defined(CONFIG_IDF_TARGET_ESP32C3)
int potPin = 4;         
#else
int potPin = 34;        
#endif
int ADC_Max = 4096;   
  
int val;    

void setup()
{
	
	ESP32PWM::allocateTimer(0);
	ESP32PWM::allocateTimer(1);
	ESP32PWM::allocateTimer(2);
	ESP32PWM::allocateTimer(3);
  myservo.setPeriodHertz(50);// Standard 50hz servo
  myservo.attach(servoPin, 500, 2400);  
}

void loop() {
  val = analogRead(potPin);           
  val = map(val, 0, ADC_Max, 0, 180);     
  myservo.write(val);                  
  delay(200);                          
}


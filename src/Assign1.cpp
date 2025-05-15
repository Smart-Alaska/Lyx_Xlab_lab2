#include <Arduino.h>
#define LED1_PIN 15
#define LED2_PIN 2
#define LED3_PIN 4
#define LED4_PIN 13
#define LED5_PIN 12
#define LED6_PIN 14

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(LED1_PIN, OUTPUT);
  pinMode(LED2_PIN, OUTPUT);
  pinMode(LED3_PIN, OUTPUT);
  pinMode(LED4_PIN, OUTPUT);
  pinMode(LED5_PIN, OUTPUT);
  pinMode(LED6_PIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED1_PIN, HIGH);
  delay(200);
  digitalWrite(LED1_PIN, LOW);
  delay(200);
  digitalWrite(LED2_PIN, HIGH);
  delay(200);
  digitalWrite(LED2_PIN, LOW);
  delay(200);
  digitalWrite(LED3_PIN, HIGH);
  delay(200);
  digitalWrite(LED3_PIN, LOW);
  delay(200);
  digitalWrite(LED4_PIN, HIGH);
  delay(200);
  digitalWrite(LED4_PIN, LOW);
  delay(200);
  digitalWrite(LED5_PIN, HIGH);
  delay(200);  
  digitalWrite(LED5_PIN, LOW);
  delay(200);
  digitalWrite(LED6_PIN, HIGH);
  delay(200);
  digitalWrite(LED6_PIN, LOW);
  delay(200);
}



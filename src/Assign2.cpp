#include <Arduino.h>
const int LED1_PIN = 15;
const int LED2_PIN = 2;
bool led1State = LOW;
bool led2State = LOW;

void setup() {
  Serial.begin(115200);
  pinMode(LED1_PIN, OUTPUT);
  pinMode(LED2_PIN, OUTPUT);
  digitalWrite(LED1_PIN, led1State);
  digitalWrite(LED2_PIN, led2State);
}

void loop() {
  if (Serial.available()) {
    String command = Serial.readStringUntil('\n');
    command.trim(); // 去除换行符和空格
    
    if (command == "1") {
      led1State = !led1State;
      digitalWrite(LED1_PIN, led1State);
      Serial.println(led1State ? "LED1 turn on" : "LED1 turn off");
    } 
    else if (command == "2") {
      led2State = !led2State;
      digitalWrite(LED2_PIN, led2State);
      Serial.println(led2State ? "LED2 turn on" : "LED2 turn off");
    }
    else {
      // 无效指令不执行操作
    }
  }
}

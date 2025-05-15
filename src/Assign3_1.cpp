#include <Arduino.h>
#include <U8g2lib.h>

#define OLED_CLK  18  
#define OLED_SDA  5
U8G2_SSD1306_128X64_NONAME_F_SW_I2C OLED(U8G2_R0, OLED_CLK, OLED_SDA, U8X8_PIN_NONE);

void setup() {
  OLED.begin();
  OLED.enableUTF8Print();
  OLED.setFont(u8g2_font_wqy12_t_gb2312);
}

void loop() {
 

  OLED.clearBuffer();
  OLED.setCursor(0, 10);
  OLED.print("我是一只乌萨奇");

  OLED.setCursor(0, 30);
  OLED.print("呜啦!");

 
  OLED.sendBuffer();

  delay(1000);
}

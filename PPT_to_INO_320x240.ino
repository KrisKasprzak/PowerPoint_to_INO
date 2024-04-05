/*
 This code was automatically generated from graphic elements in a PowerPoint presentation

 Autogenerate code written by Kris Kasprzak kris.kasprzak@yahoo.com
 Use this code without warranty

 Rev  Date         Author     Desc
 1.0  06/06/2020   Kasprzak   Initial code
 2.0  03/16/2024   Kasprzak   expanded coverage for Adafruit, fonts, more

 If this INO fails to compile or run
 1. Make sure your wiring is per the #defines, or change the #defines
 2. This INO uses a pin to set the display brightness, make sure LED is wiring correctly
 3. Make sure you can at least run the graphics examples
 4. Make sure you can at least run the Touch examples
 5. Make sure you all font libraries installed
 6. Make sure you all required libraries installed, see the #includes
 7. Make sure your screen coordinates match the values, see DEBUG_TOUCH

*/

#include <SPI.h>
#include <ILI9341_t3.h> // Teensy specific display driver
#include <XPT2046_Touchscreen.h> // touch screen driver, https://github.com/PaulStoffregen/XPT2046_Touchscreen
#include <ILI9341_t3_Controls.h> // Teensy specific custom buttons, https://github.com/KrisKasprzak/ILI9341_t3_controls

// Fonts that are included with the ILI_9341_t3 driver
#include <font_Arial.h>
#include <font_ArialBold.h>
#include <font_ArialItalic.h>
#include <font_ArialBoldItalic.h>

#include <ILI9341_t3_PrintScreen_SdFat.h>

// Possible pin definitions for Teensy MCU
#define PIN_LCD 7
#define PIN_RST 8
#define PIN_DC 9
#define PIN_CS 10
#define T_CS 1
#define T_IRQ 0
#define SD_CS A0
#define PS_PIN 2

// Possible pin definitions for an ESP32
// #define PIN_LCD 26
// #define PIN_RST 5
// #define PIN_DC 21
// #define PIN_CS 27
// #define T_CS 2
// #define T_IRQ 15


#define COLOR_WHITE 0xFFFF // 65535
#define COLOR_2 0x4398 // 17304
#define COLOR_BLUE 0x1F // 31
#define COLOR_4 0x19 // 25
#define COLOR_BLACK 0x0 // 0
#define COLOR_6 0xA534 // 42292
#define COLOR_RED 0xF800 // 63488
#define COLOR_GREEN 0x7E0 // 2016
#define COLOR_PURPLE 0xF81F // 63519
#define COLOR_10 0x2A91 // 10897
#define COLOR_YELLOW 0xFFE0 // 65504
#define COLOR_12 0x59E // 1438
#define COLOR_13 0xF79E // 63390
#define COLOR_CYAN 0x7FF // 2047
#define COLOR_15 0x39C7 // 14791
#define COLOR_16 0xDEDB // 57051
#define COLOR_17 0xBDF7 // 48631
#define COLOR_18 0x1109 // 4361
#define COLOR_19 0x7BEF // 31727
#define COLOR_20 0x2A54 // 10836
#define COLOR_21 0x10C // 268
#define COLOR_22 0x58A // 1418
#define COLOR_23 0x861 // 2145
#define COLOR_24 0x4A69 // 19049
#define COLOR_25 0x4208 // 16904

#define FONT_1 Arial_12_Bold
#define FONT_2 Arial_18_Bold
#define FONT_3 Arial_10
#define FONT_4 Arial_9
#define FONT_5 Arial_12
#define FONT_6 Arial_8
#define FONT_7 Arial_14_Bold
#define FONT_8 Arial_32
#define FONT_9 Arial_60
#define FONT_10 Arial_14
#define FONT_11 Arial_14_Italic
#define FONT_12 Arial_14_Bold_Italic
#define FONT_13 Arial_24
#define FONT_14 Arial_18
#define FONT_15 Arial_20
#define FONT_16 Arial_10_Bold
#define FONT_17 Arial_16

int BtnX = 0, BtnY = 0;
uint16_t ScreenLeft = 350, ScreenRight = 3900, ScreenTop = 300, ScreenBottom = 3800;

int var_4 = 32;
int var_5 = 55;
int var_7 = 51;
int var_8 = 45;
int var_9 = 223;
int var_10 = 187;
int var_12 = 22;
int var_13 = 21;
int var_14 = 20;
int var_15 = 19;
int var_16 = 16;

float var_1 = 98.6;
float var_2 = 82.1;
float var_3 = 80.2;
float var_6 = 79.8;
float var_11 = 13.5;

char btnText_1[] = "Next";
char btnText_2[] = "Settings";
char btnText_3[] = "Start distance";
char btnText_4[] = "Volt offset";
char btnText_5[] = "Volt slope";
char btnText_6[] = "Calibration";
char btnText_7[] = "Next";
char btnText_8[] = "Next";
char btnText_9[] = "Press me";
char btnText_10[] = "Next";
char btnText_11[] = "Next";
char btnText_12[] = "Next";
char btnText_13[] = "Next";
char btnText_14[] = "Next";
char btnText_15[] = "Next";
char btnText_16[] = "Next";
char btnText_17[] = "Next";
char btnText_18[] = "Next";
char btnText_19[] = "Next";
char btnText_20[] = "Next";

ILI9341_t3 Display = ILI9341_t3(PIN_CS, PIN_DC, PIN_RST);

XPT2046_Touchscreen Touch = XPT2046_Touchscreen(T_CS, T_IRQ);

TS_Point TP;

Button button_1(&Display);
Button button_2(&Display);
Button button_3(&Display);
Button button_4(&Display);
Button button_5(&Display);
Button button_6(&Display);
Button button_7(&Display);
Button button_8(&Display);
Button button_9(&Display);
Button button_10(&Display);
Button button_11(&Display);
Button button_12(&Display);
Button button_13(&Display);
Button button_14(&Display);
Button button_15(&Display);
Button button_16(&Display);
Button button_17(&Display);
Button button_18(&Display);
Button button_19(&Display);
Button button_20(&Display);

// End of global variable declaration

// Begin Setup code

void setup(){

Serial.begin(115200);


// while (!Serial) {}


pinMode(PIN_LCD, OUTPUT);


pinMode(PS_PIN, INPUT_PULLUP);

Display.begin();
Display.setRotation(3);

Touch.begin();
delay(10);
Touch.setRotation(3);
delay(10);

digitalWrite(PIN_LCD, HIGH);

button_1.init(267, 19, 95, 33, COLOR_WHITE, COLOR_2, COLOR_WHITE, COLOR_WHITE, btnText_1, 0, 0,FONT_1);
button_2.init(160, 104, 150, 33, COLOR_4, COLOR_BLUE, COLOR_WHITE, COLOR_WHITE, btnText_2, 0, 0,FONT_1);
button_3.init(160, 140, 150, 33, COLOR_4, COLOR_BLUE, COLOR_WHITE, COLOR_WHITE, btnText_3, 0, 0,FONT_1);
button_4.init(160, 175, 150, 33, COLOR_4, COLOR_BLUE, COLOR_WHITE, COLOR_WHITE, btnText_4, 0, 0,FONT_1);
button_5.init(160, 212, 150, 33, COLOR_4, COLOR_BLUE, COLOR_WHITE, COLOR_WHITE, btnText_5, 0, 0,FONT_1);
button_6.init(160, 68, 150, 33, COLOR_4, COLOR_BLUE, COLOR_WHITE, COLOR_WHITE, btnText_6, 0, 0,FONT_1);
button_7.init(269, 22, 95, 33, COLOR_4, COLOR_BLUE, COLOR_WHITE, COLOR_BLACK, btnText_7, 0, 0,FONT_3);
button_8.init(269, 22, 95, 33, COLOR_4, COLOR_BLUE, COLOR_WHITE, COLOR_WHITE, btnText_8, 0, 0,FONT_3);
button_9.init(122, 163, 105, 30, COLOR_10, COLOR_2, COLOR_WHITE, COLOR_WHITE, btnText_9, 0, 0,FONT_5);
button_10.init(269, 22, 95, 33, COLOR_4, COLOR_BLUE, COLOR_WHITE, COLOR_WHITE, btnText_10, 0, 0,FONT_3);
button_11.init(269, 22, 95, 33, COLOR_13, COLOR_WHITE, COLOR_BLACK, COLOR_WHITE, btnText_11, 0, 0,FONT_3);
button_12.init(269, 22, 95, 33, COLOR_17, COLOR_16, COLOR_BLACK, COLOR_15, btnText_12, 0, 0,FONT_3);
button_13.init(269, 22, 95, 33, COLOR_16, COLOR_16, COLOR_BLACK, COLOR_BLUE, btnText_13, 0, 0,FONT_3);
button_14.init(269, 24, 95, 33, COLOR_16, COLOR_16, COLOR_BLACK, COLOR_BLACK, btnText_14, 0, 0,FONT_3);
button_15.init(269, 24, 95, 33, COLOR_16, COLOR_16, COLOR_BLACK, COLOR_BLACK, btnText_15, 0, 0,FONT_3);
button_16.init(269, 22, 95, 33, COLOR_15, COLOR_20, COLOR_WHITE, COLOR_WHITE, btnText_16, 0, 0,FONT_3);
button_17.init(269, 22, 95, 33, COLOR_15, COLOR_20, COLOR_WHITE, COLOR_WHITE, btnText_17, 0, 0,FONT_3);
button_18.init(269, 22, 95, 33, COLOR_15, COLOR_20, COLOR_WHITE, COLOR_BLACK, btnText_18, 0, 0,FONT_3);
button_19.init(269, 22, 95, 33, COLOR_15, COLOR_20, COLOR_WHITE, COLOR_BLACK, btnText_19, 0, 0,FONT_3);
button_20.init(273, 21, 82, 31, COLOR_25, COLOR_20, COLOR_WHITE, COLOR_WHITE, btnText_20, 0, 0,FONT_3);

button_1.setCornerRadius(4);
button_2.setCornerRadius(4);
button_3.setCornerRadius(4);
button_4.setCornerRadius(4);
button_5.setCornerRadius(4);
button_6.setCornerRadius(4);
button_7.setCornerRadius(4);
button_8.setCornerRadius(4);
button_9.setCornerRadius(0);
button_10.setCornerRadius(4);
button_11.setCornerRadius(4);
button_12.setCornerRadius(4);
button_13.setCornerRadius(4);
button_14.setCornerRadius(4);
button_15.setCornerRadius(4);
button_16.setCornerRadius(4);
button_17.setCornerRadius(4);
button_18.setCornerRadius(4);
button_19.setCornerRadius(4);
button_20.setCornerRadius(4);

}

// End Setup code


// Begin Loop code
void loop(){

ProcessTouch();

Screen_1();

Screen_2();

Screen_3();

Screen_4();

Screen_5();

Screen_6();

Screen_7();

Screen_8();

Screen_9();

Screen_10();

Screen_11();

Screen_12();

Screen_13();

Screen_14();
}


// End Loop code


// Begin Screen code

void Screen_1(){

Display.fillScreen(COLOR_WHITE);


Display.fillRect(0, 0, 320, 40, COLOR_BLACK);
Display.setFont(FONT_2);
Display.setTextColor(COLOR_WHITE);
Display.setCursor(7, 4);
Display.print(F(""));

Display.setFont(FONT_2);
Display.setTextColor(COLOR_WHITE);
Display.setCursor(7, 11);
Display.print(F("Example"));

button_1.draw();
button_2.draw();
button_3.draw();
button_4.draw();
button_5.draw();
button_6.draw();

while(1) {

ProcessTouch();

if(ProcessButton(button_1)){
// to do... add code to perform actions
Serial.println("button_1 was pressed.");
// add way out of loop
break;
}
else if(ProcessButton(button_2)){
// to do... add code to perform actions
Serial.println("button_2 was pressed.");
}
else if(ProcessButton(button_3)){
// to do... add code to perform actions
Serial.println("button_3 was pressed.");
}
else if(ProcessButton(button_4)){
// to do... add code to perform actions
Serial.println("button_4 was pressed.");
}
else if(ProcessButton(button_5)){
// to do... add code to perform actions
Serial.println("button_5 was pressed.");
}
else if(ProcessButton(button_6)){
// to do... add code to perform actions
Serial.println("button_6 was pressed.");
}

}

}

void Screen_2(){

Display.fillScreen(COLOR_BLACK);


Display.fillRect(0, 0, 320, 45, COLOR_6);
Display.drawLine(0, 240, 320, 0, COLOR_YELLOW);
Display.drawLine(247, 106, 53, 56, COLOR_BLUE);
Display.fillRect(35, 63, 8, 86, COLOR_RED);
Display.fillRect(164, 138, 120, 8, COLOR_GREEN);
Display.drawLine(77, 219, 206, 163, COLOR_CYAN);
Display.setFont(FONT_1);
Display.setTextColor(COLOR_WHITE);
Display.setCursor(7, 17);
Display.print(F("Line support"));

Display.setFont(FONT_4);
Display.setTextColor(COLOR_WHITE);
Display.setCursor(43, 99);
Display.print(F("Thick vertical"));

Display.setFont(FONT_4);
Display.setTextColor(COLOR_WHITE);
Display.setCursor(182, 115);
Display.print(F("Thick horizontal"));

Display.setFont(FONT_4);
Display.setTextColor(COLOR_WHITE);
Display.setCursor(121, 60);
Display.print(F("1 pixel diagonal"));

Display.setFont(FONT_4);
Display.setTextColor(COLOR_WHITE);
Display.setCursor(151, 194);
Display.print(F("NOT thick diagonal"));

button_7.draw();

while(1) {

ProcessTouch();

if(ProcessButton(button_7)){
// to do... add code to perform actions
Serial.println("button_7 was pressed.");
// add way out of loop
break;
}

}

}

void Screen_3(){

Display.fillScreen(COLOR_WHITE);


Display.fillRectVGradient(0, 0, 320, 45, COLOR_BLUE, COLOR_BLACK);
Display.fillRect(15, 58, 51, 56, COLOR_BLUE);
Display.fillRect(24, 67, 34, 38, COLOR_RED);
Display.fillRect(93, 58, 96, 15, COLOR_GREEN);
Display.fillRect(102, 67, 79, -2, COLOR_WHITE);
Display.drawRect(268, 58, 27, 172, COLOR_PURPLE);
Display.setFont(FONT_4);
Display.setTextColor(COLOR_BLACK);
Display.setCursor(35, 126);
Display.print(F("Rectangle w/Text is a button"));

Display.setFont(FONT_4);
Display.setTextColor(COLOR_BLACK);
Display.setCursor(80, 90);
Display.print(F("Thick border filled or hollow"));

Display.fillRoundRect(184, 172, 75, 59, 5, COLOR_BLACK);
Display.fillRoundRect(185, 173, 72, 56, 5, COLOR_YELLOW);
Display.setFont(FONT_4);
Display.setTextColor(COLOR_BLACK);
Display.setCursor(8, 187);
Display.print(F("Rounded corners hard coded"));

Display.setFont(FONT_4);
Display.setTextColor(COLOR_BLACK);
Display.setCursor(7, 203);
Display.print(F("(no API to get radius…)"));

Display.setFont(FONT_1);
Display.setTextColor(COLOR_WHITE);
Display.setCursor(7, 17);
Display.print(F("Rectangle support"));

button_8.draw();
button_9.draw();

while(1) {

ProcessTouch();

if(ProcessButton(button_8)){
// to do... add code to perform actions
Serial.println("button_8 was pressed.");
// add way out of loop
break;
}
else if(ProcessButton(button_9)){
// to do... add code to perform actions
Serial.println("button_9 was pressed.");
}

}

}

void Screen_4(){

Display.fillScreen(COLOR_WHITE);


Display.fillRect(0, 0, 320, 45, COLOR_BLACK);
Display.fillTriangle(8, 114, 69, 114, 38, 56, COLOR_BLUE);
Display.setFont(FONT_4);
Display.setTextColor(COLOR_BLACK);
Display.setCursor(276, 77);
Display.print(F("No flip"));

Display.setFont(FONT_4);
Display.setTextColor(COLOR_BLACK);
Display.setCursor(87, 53);
Display.print(F("For borders use 2 triangles"));

Display.drawLine(49, 80, 84, 65, COLOR_BLACK);
Display.drawLine(99, 111, 84, 65, COLOR_BLACK);
Display.setFont(FONT_1);
Display.setTextColor(COLOR_WHITE);
Display.setCursor(7, 17);
Display.print(F("Triangle support"));

Display.setFont(FONT_4);
Display.setTextColor(COLOR_BLACK);
Display.setCursor(277, 144);
Display.print(F("Flip V"));

Display.setFont(FONT_4);
Display.setTextColor(COLOR_BLACK);
Display.setCursor(201, 139);
Display.print(F("Flip H/V"));

Display.setFont(FONT_4);
Display.setTextColor(COLOR_BLACK);
Display.setCursor(210, 77);
Display.print(F("Flip H"));

Display.fillTriangle(268, 118, 299, 118, 268, 87, COLOR_RED);
Display.fillTriangle(233, 118, 264, 118, 264, 87, COLOR_GREEN);
Display.fillTriangle(268, 154, 299, 121, 268, 121, COLOR_YELLOW);
Display.fillTriangle(233, 121, 264, 154, 264, 121, COLOR_BLUE);
Display.setFont(FONT_4);
Display.setTextColor(COLOR_BLACK);
Display.setCursor(16, 182);
Display.print(F("No flip"));

Display.setFont(FONT_4);
Display.setTextColor(COLOR_BLACK);
Display.setCursor(124, 182);
Display.print(F("Flip V"));

Display.setFont(FONT_4);
Display.setTextColor(COLOR_BLACK);
Display.setCursor(179, 182);
Display.print(F("Flip H/V"));

Display.setFont(FONT_4);
Display.setTextColor(COLOR_BLACK);
Display.setCursor(71, 182);
Display.print(F("Flip H"));

Display.fillTriangle(28, 231, 59, 231, 43, 198, COLOR_RED);
Display.fillTriangle(80, 231, 111, 231, 96, 198, COLOR_GREEN);
Display.fillTriangle(132, 198, 148, 231, 164, 198, COLOR_BLUE);
Display.fillTriangle(184, 198, 200, 231, 216, 198, COLOR_YELLOW);
Display.fillTriangle(63, 139, 164, 139, 114, 111, COLOR_RED);
Display.fillTriangle(22, 105, 54, 105, 38, 74, COLOR_WHITE);
Display.fillTriangle(86, 133, 142, 133, 114, 117, COLOR_GREEN);
Display.fillTriangle(255, 210, 282, 210, 268, 172, COLOR_BLACK);
Display.setFont(FONT_4);
Display.setTextColor(COLOR_BLACK);
Display.setCursor(227, 212);
Display.print(F("Not supported"));

Display.setFont(FONT_4);
Display.setTextColor(COLOR_BLACK);
Display.setCursor(16, 160);
Display.print(F("Rotations can be 0 ro 90 degrees only"));

button_10.draw();

while(1) {

ProcessTouch();

if(ProcessButton(button_10)){
// to do... add code to perform actions
Serial.println("button_10 was pressed.");
// add way out of loop
break;
}

}

}

void Screen_5(){

Display.fillScreen(COLOR_WHITE);


Display.fillRect(0, 0, 320, 45, COLOR_12);
Display.setFont(FONT_4);
Display.setTextColor(COLOR_BLACK);
Display.setCursor(247, 166);
Display.print(F("Height"));

Display.setFont(FONT_4);
Display.setTextColor(COLOR_BLACK);
Display.setCursor(11, 51);
Display.print(F("Thick border filled or hollow"));

Display.fillCircle(66, 100, 26, COLOR_CYAN);
Display.fillCircle(66, 100, 17, COLOR_GREEN);
Display.fillCircle(51, 184, 37, COLOR_RED);
Display.fillCircle(51, 184, 28, COLOR_WHITE);
Display.drawCircle(175, 173, 59, COLOR_BLUE);
Display.fillCircle(175, 173, 57, COLOR_WHITE);
Display.drawLine(270, 114, 182, 114, COLOR_BLACK);
Display.drawLine(270, 231, 188, 231, COLOR_BLACK);
Display.drawLine(264, 163, 264, 120, COLOR_BLACK);
Display.setFont(FONT_4);
Display.setTextColor(COLOR_BLACK);
Display.setCursor(130, 167);
Display.print(F("Height = width"));

Display.drawLine(117, 161, 117, 83, COLOR_BLACK);
Display.drawLine(234, 163, 234, 118, COLOR_BLACK);
Display.drawLine(234, 109, 234, 83, COLOR_BLACK);
Display.drawLine(218, 92, 196, 92, COLOR_BLACK);
Display.drawLine(152, 92, 130, 92, COLOR_BLACK);
Display.setFont(FONT_4);
Display.setTextColor(COLOR_BLACK);
Display.setCursor(158, 87);
Display.print(F("width"));

Display.setFont(FONT_1);
Display.setTextColor(COLOR_WHITE);
Display.setCursor(7, 17);
Display.print(F("Circle support"));

Display.fillTriangle(259, 135, 270, 135, 264, 114, COLOR_BLACK);
Display.fillTriangle(259, 212, 265, 231, 270, 212, COLOR_BLACK);
Display.fillTriangle(117, 92, 138, 98, 138, 87, COLOR_BLACK);
Display.fillTriangle(212, 86, 212, 98, 233, 92, COLOR_BLACK);
Display.drawLine(265, 225, 265, 182, COLOR_BLACK);
button_11.draw();

while(1) {

ProcessTouch();

if(ProcessButton(button_11)){
// to do... add code to perform actions
Serial.println("button_11 was pressed.");
// add way out of loop
break;
}

}

}

void Screen_6(){

Display.fillScreen(COLOR_15);


Display.fillRect(0, 0, 320, 45, COLOR_6);
Display.setFont(FONT_6);
Display.setTextColor(COLOR_WHITE);
Display.setCursor(10, 53);
Display.print(F("ILI9341_t3"));

Display.setFont(FONT_7);
Display.setTextColor(COLOR_BLUE);
Display.setCursor(25, 207);
Display.print(F("Bold"));

Display.setFont(FONT_5);
Display.setTextColor(COLOR_WHITE);
Display.setCursor(41, 71);
Display.print(F("supports"));

Display.setFont(FONT_8);
Display.setTextColor(COLOR_WHITE);
Display.setCursor(78, 87);
Display.print(F("many"));

Display.setFont(FONT_9);
Display.setTextColor(COLOR_WHITE);
Display.setCursor(105, 127);
Display.print(F("sizes"));

Display.setFont(FONT_10);
Display.setTextColor(COLOR_YELLOW);
Display.setCursor(78, 207);
Display.print(F("or"));

Display.setFont(FONT_11);
Display.setTextColor(COLOR_PURPLE);
Display.setCursor(108, 207);
Display.print(F("Italics"));

Display.setFont(FONT_10);
Display.setTextColor(COLOR_CYAN);
Display.setCursor(170, 207);
Display.print(F("or"));

Display.setFont(FONT_12);
Display.setTextColor(COLOR_GREEN);
Display.setCursor(200, 207);
Display.print(F("BOTH"));

Display.setFont(FONT_2);
Display.setTextColor(COLOR_WHITE);
Display.setCursor(7, 13);
Display.print(F("Text support"));

button_12.draw();

while(1) {

ProcessTouch();

if(ProcessButton(button_12)){
// to do... add code to perform actions
Serial.println("button_12 was pressed.");
// add way out of loop
break;
}

}

}

void Screen_7(){

Display.fillScreenVGradient(COLOR_BLUE, COLOR_BLACK);


Display.fillRect(0, 0, 320, 45, COLOR_18);
Display.setFont(FONT_6);
Display.setTextColor(COLOR_WHITE);
Display.setCursor(11, 59);
Display.print(F("Adafruit_ILI9341 supports"));

Display.setFont(FONT_7);
Display.setTextColor(COLOR_BLUE);
Display.setCursor(26, 201);
Display.print(F("Bold"));

Display.setFont(FONT_4);
Display.setTextColor(COLOR_WHITE);
Display.setCursor(35, 78);
Display.print(F("9 pt"));

Display.setFont(FONT_5);
Display.setTextColor(COLOR_WHITE);
Display.setCursor(47, 96);
Display.print(F("12 pt"));

Display.setFont(FONT_13);
Display.setTextColor(COLOR_WHITE);
Display.setCursor(71, 144);
Display.print(F("24 pt"));

Display.setFont(FONT_10);
Display.setTextColor(COLOR_YELLOW);
Display.setCursor(78, 201);
Display.print(F("or"));

Display.setFont(FONT_11);
Display.setTextColor(COLOR_PURPLE);
Display.setCursor(108, 201);
Display.print(F("Oblique"));

Display.setFont(FONT_10);
Display.setTextColor(COLOR_CYAN);
Display.setCursor(184, 201);
Display.print(F("or"));

Display.setFont(FONT_12);
Display.setTextColor(COLOR_GREEN);
Display.setCursor(213, 201);
Display.print(F("BOTH"));

Display.setFont(FONT_14);
Display.setTextColor(COLOR_WHITE);
Display.setCursor(179, 87);
Display.print(F("FreeMono"));

Display.setFont(FONT_14);
Display.setTextColor(COLOR_WHITE);
Display.setCursor(179, 115);
Display.print(F("FreeSans"));

Display.setFont(FONT_14);
Display.setTextColor(COLOR_WHITE);
Display.setCursor(179, 142);
Display.print(F("FreeSerif"));

Display.setFont(FONT_14);
Display.setTextColor(COLOR_WHITE);
Display.setCursor(57, 118);
Display.print(F("18 pt"));

Display.setFont(FONT_5);
Display.setTextColor(COLOR_WHITE);
Display.setCursor(167, 68);
Display.print(F("Select either…"));

Display.setFont(FONT_2);
Display.setTextColor(COLOR_WHITE);
Display.setCursor(7, 11);
Display.print(F("Text support"));

button_13.draw();

while(1) {

ProcessTouch();

if(ProcessButton(button_13)){
// to do... add code to perform actions
Serial.println("button_13 was pressed.");
// add way out of loop
break;
}

}

}

void Screen_8(){

Display.fillScreen(COLOR_BLACK);


Display.fillRect(0, 0, 320, 45, COLOR_GREEN);
Display.fillRect(123, 172, 50, 20, COLOR_19);
Display.drawRect(13, 68, 297, 22, COLOR_WHITE);
Display.setFont(FONT_5);
Display.setTextColor(COLOR_WHITE);
Display.setCursor(13, 69);
Display.print(F("Avoid margins and use tight text box"));

Display.setFont(FONT_5);
Display.setTextColor(COLOR_WHITE);
Display.setCursor(13, 98);
Display.print(F("Use Arial fonts"));

Display.setFont(FONT_15);
Display.setTextColor(COLOR_RED);
Display.setCursor(13, 198);
Display.print(F("Textboxes for shadow"));

Display.setFont(FONT_5);
Display.setTextColor(COLOR_WHITE);
Display.setCursor(13, 124);
Display.print(F("Consider option to generate variables"));

Display.setFont(FONT_5);
Display.setTextColor(COLOR_CYAN);
Display.setCursor(13, 175);
Display.print(F("Temperature "));

Display.setFont(FONT_5);
Display.setTextColor(COLOR_WHITE);
Display.setCursor(124, 175);
Display.print(var_1, 1);

Display.setFont(FONT_5);
Display.setTextColor(COLOR_WHITE);
Display.setCursor(13, 142);
Display.print(F("for numbers. Example:"));

Display.setFont(FONT_2);
Display.setTextColor(COLOR_WHITE);
Display.setCursor(7, 16);
Display.print(F("Text tips DO…"));

Display.setFont(FONT_15);
Display.setTextColor(COLOR_WHITE);
Display.setCursor(11, 197);
Display.print(F("Textboxes for shadow"));

button_14.draw();

while(1) {

ProcessTouch();

if(ProcessButton(button_14)){
// to do... add code to perform actions
Serial.println("button_14 was pressed.");
// add way out of loop
break;
}

}

}

void Screen_9(){

Display.fillScreen(COLOR_BLACK);


Display.fillRect(0, 0, 320, 45, COLOR_RED);
Display.setFont(FONT_5);
Display.setTextColor(COLOR_WHITE);
Display.setCursor(14, 54);
Display.print(F("Justification"));

Display.setFont(FONT_5);
Display.setTextColor(COLOR_WHITE);
Display.setCursor(14, 78);
Display.print(F("Bullets or auto numbering"));

Display.setFont(FONT_5);
Display.setTextColor(COLOR_WHITE);
Display.setCursor(14, 100);
Display.print(F("Rotated text"));

Display.setFont(FONT_5);
Display.setTextColor(COLOR_WHITE);
Display.setCursor(14, 124);
Display.print(F("Text effects (shadows)"));

Display.setFont(FONT_5);
Display.setTextColor(COLOR_WHITE);
Display.setCursor(14, 147);
Display.print(F("Word wrapping, auto sizing"));

Display.setFont(FONT_2);
Display.setTextColor(COLOR_BLACK);
Display.setCursor(7, 17);
Display.print(F("DON’T USE"));

Display.setFont(FONT_5);
Display.setTextColor(COLOR_WHITE);
Display.setCursor(14, 170);
Display.print(F("Filled Textboxes, use Textbox + Rect"));

button_15.draw();

while(1) {

ProcessTouch();

if(ProcessButton(button_15)){
// to do... add code to perform actions
Serial.println("button_15 was pressed.");
// add way out of loop
break;
}

}

}

void Screen_10(){

Display.fillScreen(COLOR_WHITE);


Display.fillRect(0, 0, 320, 46, COLOR_BLACK);
Display.setFont(FONT_1);
Display.setTextColor(COLOR_WHITE);
Display.setCursor(7, 4);
Display.print(F(""));

Display.drawFastHLine(23, 65, 147, COLOR_BLACK);
Display.fillRect(23, 65, 74, 29, COLOR_21);
Display.setTextColor(COLOR_WHITE);
Display.setFont(FONT_16);
Display.setCursor(31, 74);
Display.print(F("Door"));

Display.fillRect(96, 65, 72, 29, COLOR_21);
Display.setTextColor(COLOR_WHITE);
Display.setFont(FONT_16);
Display.setCursor(103, 74);
Display.print(F("Status"));

Display.drawFastHLine(23, 95, 147, COLOR_BLACK);
Display.setTextColor(COLOR_BLACK);
Display.setFont(FONT_3);
Display.setCursor(26, 100);
Display.print(F("Front"));

Display.setTextColor(COLOR_22);
Display.setFont(FONT_3);
Display.setCursor(99, 100);
Display.print(F("Closed"));

Display.drawFastHLine(23, 114, 147, COLOR_BLACK);
Display.setTextColor(COLOR_BLACK);
Display.setFont(FONT_3);
Display.setCursor(26, 120);
Display.print(F("Back"));

Display.setTextColor(COLOR_22);
Display.setFont(FONT_3);
Display.setCursor(99, 120);
Display.print(F("Closed"));

Display.drawFastHLine(23, 133, 147, COLOR_BLACK);
Display.setTextColor(COLOR_BLACK);
Display.setFont(FONT_3);
Display.setCursor(26, 139);
Display.print(F("Garage"));

Display.setTextColor(COLOR_RED);
Display.setFont(FONT_3);
Display.setCursor(99, 139);
Display.print(F("Open"));

Display.drawFastHLine(23, 152, 147, COLOR_BLACK);
Display.setTextColor(COLOR_BLACK);
Display.setFont(FONT_3);
Display.setCursor(26, 158);
Display.print(F("Side"));

Display.setTextColor(COLOR_22);
Display.setFont(FONT_3);
Display.setCursor(99, 158);
Display.print(F("Closed"));

Display.drawFastHLine(23, 172, 147, COLOR_BLACK);
Display.setTextColor(COLOR_BLACK);
Display.setFont(FONT_3);
Display.setCursor(26, 178);
Display.print(F("Porch"));

Display.setTextColor(COLOR_RED);
Display.setFont(FONT_3);
Display.setCursor(99, 178);
Display.print(F("Closed"));

Display.drawFastHLine(23, 191, 147, COLOR_BLACK);
Display.drawFastHLine(23, 65, 147, COLOR_BLACK);
Display.drawFastVLine(23, 65, 127, COLOR_BLACK);
Display.drawFastVLine(98, 65, 127, COLOR_BLACK);
Display.drawFastVLine(170, 65, 127, COLOR_BLACK);

Display.setFont(FONT_3);
Display.setTextColor(COLOR_RED);
Display.setCursor(203, 68);
Display.print(F("Text in cells"));

Display.drawLine(166, 81, 201, 74, COLOR_RED);
Display.setFont(FONT_3);
Display.setTextColor(COLOR_RED);
Display.setCursor(191, 105);
Display.print(F("Variable row height"));

Display.drawLine(166, 109, 188, 103, COLOR_RED);
Display.setFont(FONT_3);
Display.setTextColor(COLOR_RED);
Display.setCursor(19, 200);
Display.print(F("No limits on rows x columns"));

Display.setFont(FONT_2);
Display.setTextColor(COLOR_WHITE);
Display.setCursor(7, 13);
Display.print(F("Table support"));

button_16.draw();

while(1) {

ProcessTouch();

if(ProcessButton(button_16)){
// to do... add code to perform actions
Serial.println("button_16 was pressed.");
// add way out of loop
break;
}

}

}

void Screen_11(){

Display.fillScreen(COLOR_WHITE);


Display.fillRect(0, 0, 320, 46, COLOR_BLACK);
Display.setFont(FONT_1);
Display.setTextColor(COLOR_WHITE);
Display.setCursor(7, 4);
Display.print(F(""));

Display.fillRectHGradient(8, 59, 147, 173, COLOR_23, COLOR_24);
Display.fillRectHGradient(163, 58, 73, 173, COLOR_23, COLOR_24);
Display.fillRectHGradient(241, 58, 73, 173, COLOR_23, COLOR_24);
Display.setFont(FONT_3);
Display.setTextColor(COLOR_WHITE);
Display.setCursor(16, 81);
Display.print(F("8:44 PM"));

Display.setFont(FONT_3);
Display.setTextColor(COLOR_WHITE);
Display.setCursor(170, 120);
Display.print(var_2, 1);

Display.setFont(FONT_3);
Display.setTextColor(COLOR_WHITE);
Display.setCursor(170, 212);
Display.print(var_3, 1);

Display.setFont(FONT_3);
Display.setTextColor(COLOR_WHITE);
Display.setCursor(250, 212);
Display.print(var_4);

Display.drawFastHLine(7, 105, 147, COLOR_WHITE);
Display.fillRect(7, 105, 74, 29, COLOR_21);
Display.setTextColor(COLOR_WHITE);
Display.setFont(FONT_16);
Display.setCursor(14, 114);
Display.print(F("Door"));

Display.fillRect(80, 105, 72, 29, COLOR_21);
Display.setTextColor(COLOR_WHITE);
Display.setFont(FONT_16);
Display.setCursor(87, 114);
Display.print(F("Status"));

Display.drawFastHLine(7, 135, 147, COLOR_WHITE);
Display.setTextColor(COLOR_WHITE);
Display.setFont(FONT_3);
Display.setCursor(11, 141);
Display.print(F("Front"));

Display.setTextColor(COLOR_22);
Display.setFont(FONT_3);
Display.setCursor(84, 141);
Display.print(F("Closed"));

Display.drawFastHLine(7, 154, 147, COLOR_WHITE);
Display.setTextColor(COLOR_WHITE);
Display.setFont(FONT_3);
Display.setCursor(11, 160);
Display.print(F("Back"));

Display.setTextColor(COLOR_22);
Display.setFont(FONT_3);
Display.setCursor(84, 160);
Display.print(F("Closed"));

Display.drawFastHLine(7, 173, 147, COLOR_WHITE);
Display.setTextColor(COLOR_WHITE);
Display.setFont(FONT_3);
Display.setCursor(11, 179);
Display.print(F("Garage"));

Display.setTextColor(COLOR_RED);
Display.setFont(FONT_3);
Display.setCursor(84, 179);
Display.print(F("Open"));

Display.drawFastHLine(7, 193, 147, COLOR_WHITE);
Display.setTextColor(COLOR_WHITE);
Display.setFont(FONT_3);
Display.setCursor(11, 198);
Display.print(F("Side"));

Display.setTextColor(COLOR_22);
Display.setFont(FONT_3);
Display.setCursor(84, 198);
Display.print(F("Closed"));

Display.drawFastHLine(7, 212, 147, COLOR_WHITE);
Display.setTextColor(COLOR_WHITE);
Display.setFont(FONT_3);
Display.setCursor(11, 218);
Display.print(F("Porch"));

Display.setTextColor(COLOR_RED);
Display.setFont(FONT_3);
Display.setCursor(84, 218);
Display.print(F("Closed"));

Display.drawFastHLine(7, 231, 147, COLOR_WHITE);
Display.drawFastHLine(7, 105, 147, COLOR_WHITE);
Display.drawFastVLine(7, 105, 127, COLOR_WHITE);
Display.drawFastVLine(81, 105, 127, COLOR_WHITE);
Display.drawFastVLine(154, 105, 127, COLOR_WHITE);

Display.setFont(FONT_3);
Display.setTextColor(COLOR_WHITE);
Display.setCursor(250, 120);
Display.print(var_5);

Display.setFont(FONT_3);
Display.setTextColor(COLOR_WHITE);
Display.setCursor(170, 166);
Display.print(var_6, 1);

Display.setFont(FONT_3);
Display.setTextColor(COLOR_WHITE);
Display.setCursor(250, 166);
Display.print(var_7);

Display.setFont(FONT_1);
Display.setTextColor(COLOR_WHITE);
Display.setCursor(246, 196);
Display.print(F("NOW"));

Display.setFont(FONT_1);
Display.setTextColor(COLOR_WHITE);
Display.setCursor(246, 103);
Display.print(F("MAX"));

Display.setFont(FONT_1);
Display.setTextColor(COLOR_WHITE);
Display.setCursor(246, 149);
Display.print(F("MIN"));

Display.setFont(FONT_1);
Display.setTextColor(COLOR_WHITE);
Display.setCursor(167, 196);
Display.print(F("NOW"));

Display.setFont(FONT_1);
Display.setTextColor(COLOR_WHITE);
Display.setCursor(167, 103);
Display.print(F("MAX"));

Display.setFont(FONT_1);
Display.setTextColor(COLOR_WHITE);
Display.setCursor(167, 149);
Display.print(F("MIN"));

Display.setFont(FONT_1);
Display.setTextColor(COLOR_WHITE);
Display.setCursor(13, 62);
Display.print(F("TIME"));

Display.setFont(FONT_1);
Display.setTextColor(COLOR_WHITE);
Display.setCursor(167, 62);
Display.print(F("TEMP"));

Display.setFont(FONT_1);
Display.setTextColor(COLOR_WHITE);
Display.setCursor(246, 60);
Display.print(F("%RH"));

Display.setFont(FONT_2);
Display.setTextColor(COLOR_WHITE);
Display.setCursor(7, 13);
Display.print(F("Example"));

button_17.draw();

while(1) {

ProcessTouch();

if(ProcessButton(button_17)){
// to do... add code to perform actions
Serial.println("button_17 was pressed.");
// add way out of loop
break;
}

}

}

void Screen_12(){

Display.fillScreen(COLOR_BLACK);


Display.fillRect(196, 0, 5, 72, COLOR_WHITE);
Display.fillRect(0, 72, 320, 5, COLOR_WHITE);
Display.setFont(FONT_13);
Display.setTextColor(COLOR_WHITE);
Display.setCursor(90, 32);
Display.print(F("8:37"));

Display.setFont(FONT_10);
Display.setTextColor(COLOR_WHITE);
Display.setCursor(5, 4);
Display.print(F("Race time"));

Display.setFont(FONT_13);
Display.setTextColor(COLOR_RED);
Display.setCursor(47, 114);
Display.print(var_8);

Display.setFont(FONT_10);
Display.setTextColor(COLOR_WHITE);
Display.setCursor(5, 81);
Display.print(F("Oil pressure"));

Display.setFont(FONT_13);
Display.setTextColor(COLOR_RED);
Display.setCursor(197, 114);
Display.print(var_9);

Display.setFont(FONT_10);
Display.setTextColor(COLOR_WHITE);
Display.setCursor(151, 81);
Display.print(F("Oil temp"));

Display.setFont(FONT_13);
Display.setTextColor(COLOR_BLUE);
Display.setCursor(47, 194);
Display.print(var_10);

Display.setFont(FONT_10);
Display.setTextColor(COLOR_WHITE);
Display.setCursor(5, 169);
Display.print(F("Water temp"));

Display.setFont(FONT_13);
Display.setTextColor(COLOR_WHITE);
Display.setCursor(197, 194);
Display.print(var_11, 1);

Display.setFont(FONT_10);
Display.setTextColor(COLOR_WHITE);
Display.setCursor(158, 169);
Display.print(F("Head pressure"));

Display.fillRect(0, 159, 320, 5, COLOR_WHITE);
Display.fillRect(140, 77, 5, 81, COLOR_WHITE);
Display.fillRect(148, 161, 5, 78, COLOR_WHITE);
button_18.draw();

while(1) {

ProcessTouch();

if(ProcessButton(button_18)){
// to do... add code to perform actions
Serial.println("button_18 was pressed.");
// add way out of loop
break;
}

}

}

void Screen_13(){

Display.fillScreen(COLOR_BLACK);


Display.fillRect(55, 50, 218, 170, COLOR_WHITE);
Display.fillRect(59, 53, 211, 164, COLOR_RED);
Display.setFont(FONT_2);
Display.setTextColor(COLOR_WHITE);
int w = 0;
int h = 0;
w = Display.measureTextWidth("WARNING");
h = Display.measureTextHeight("WARNING");
Display.setCursor((214 - w) / 2 + 58, (26 - h) / 2 + 61);
Display.print(F("WARNING"));

Display.setFont(FONT_17);
Display.setTextColor(COLOR_WHITE);
w = Display.measureTextWidth("Temperature");
h = Display.measureTextHeight("Temperature");
Display.setCursor((214 - w) / 2 + 58, (22 - h) / 2 + 112);
Display.print(F("Temperature"));

Display.setFont(FONT_17);
Display.setTextColor(COLOR_WHITE);
w = Display.measureTextWidth("sensor failed to");
h = Display.measureTextHeight("sensor failed to");
Display.setCursor((214 - w) / 2 + 58, (22 - h) / 2 + 141);
Display.print(F("sensor failed to"));

Display.setFont(FONT_17);
Display.setTextColor(COLOR_WHITE);
w = Display.measureTextWidth("initialize.");
h = Display.measureTextHeight("initialize.");
Display.setCursor((214 - w) / 2 + 58, (22 - h) / 2 + 171);
Display.print(F("initialize."));

button_19.draw();

while(1) {

ProcessTouch();

if(ProcessButton(button_19)){
// to do... add code to perform actions
Serial.println("button_19 was pressed.");
// add way out of loop
break;
}

}

}

void Screen_14(){

Display.fillScreen(COLOR_WHITE);


Display.fillRect(7, 202, 305, 21, COLOR_13);
Display.fillRect(7, 147, 305, 21, COLOR_13);
Display.fillRect(7, 93, 305, 21, COLOR_13);
Display.fillRect(0, 0, 320, 46, COLOR_15);
Display.setFont(FONT_7);
Display.setTextColor(COLOR_WHITE);
Display.setCursor(7, 4);
Display.print(F(""));

Display.setFont(FONT_1);
Display.setTextColor(COLOR_BLACK);
Display.setCursor(17, 57);
Display.print(F("Car"));

Display.setFont(FONT_1);
Display.setTextColor(COLOR_BLACK);
Display.setCursor(66, 57);
Display.print(F("Lap"));

Display.setFont(FONT_1);
Display.setTextColor(COLOR_BLACK);
Display.setCursor(123, 57);
Display.print(F("Lap time"));

Display.setFont(FONT_1);
Display.setTextColor(COLOR_BLACK);
Display.setCursor(216, 57);
Display.print(F("Best time"));

Display.setFont(FONT_3);
Display.setTextColor(COLOR_BLACK);
Display.setCursor(13, 95);
Display.print(F("#21"));

Display.setFont(FONT_3);
Display.setTextColor(COLOR_BLACK);
Display.setCursor(60, 95);
Display.print(var_12);

Display.setFont(FONT_3);
Display.setTextColor(COLOR_BLACK);
Display.setCursor(115, 95);
Display.print(F("01:22.978"));

Display.setFont(FONT_3);
Display.setTextColor(COLOR_GREEN);
Display.setCursor(207, 95);
Display.print(F("01:20.012"));

Display.setFont(FONT_3);
Display.setTextColor(COLOR_BLACK);
Display.setCursor(13, 120);
Display.print(F("#44"));

Display.setFont(FONT_3);
Display.setTextColor(COLOR_BLACK);
Display.setCursor(60, 120);
Display.print(var_13);

Display.setFont(FONT_3);
Display.setTextColor(COLOR_BLACK);
Display.setCursor(115, 120);
Display.print(F("01:23.421"));

Display.setFont(FONT_3);
Display.setTextColor(COLOR_BLACK);
Display.setCursor(207, 120);
Display.print(F("01:22.421"));

Display.setFont(FONT_3);
Display.setTextColor(COLOR_BLACK);
Display.setCursor(13, 149);
Display.print(F("#65"));

Display.setFont(FONT_3);
Display.setTextColor(COLOR_BLACK);
Display.setCursor(60, 149);
Display.print(var_14);

Display.setFont(FONT_3);
Display.setTextColor(COLOR_BLACK);
Display.setCursor(115, 149);
Display.print(F("01:24.111"));

Display.setFont(FONT_3);
Display.setTextColor(COLOR_BLACK);
Display.setCursor(207, 149);
Display.print(F("01:24.111"));

Display.setFont(FONT_3);
Display.setTextColor(COLOR_BLACK);
Display.setCursor(13, 176);
Display.print(F("#51"));

Display.setFont(FONT_3);
Display.setTextColor(COLOR_BLACK);
Display.setCursor(60, 176);
Display.print(var_15);

Display.setFont(FONT_3);
Display.setTextColor(COLOR_BLACK);
Display.setCursor(115, 176);
Display.print(F("01:26.862"));

Display.setFont(FONT_3);
Display.setTextColor(COLOR_BLACK);
Display.setCursor(207, 176);
Display.print(F("01:26.753"));

Display.setFont(FONT_3);
Display.setTextColor(COLOR_BLACK);
Display.setCursor(13, 204);
Display.print(F("#88"));

Display.setFont(FONT_3);
Display.setTextColor(COLOR_BLACK);
Display.setCursor(60, 204);
Display.print(var_16);

Display.setFont(FONT_3);
Display.setTextColor(COLOR_BLACK);
Display.setCursor(115, 204);
Display.print(F("01:31.853"));

Display.setFont(FONT_3);
Display.setTextColor(COLOR_BLACK);
Display.setCursor(207, 204);
Display.print(F("01:35.756"));

Display.setFont(FONT_2);
Display.setTextColor(COLOR_WHITE);
Display.setCursor(7, 14);
Display.print(F("Example"));

button_20.draw();

while(1) {

ProcessTouch();

if(ProcessButton(button_20)){
// to do... add code to perform actions
Serial.println("button_20 was pressed.");
// add way out of loop
break;
}

}

}


// End Screen code


// Begin code to process button presses


bool ProcessButton(Button btn) {
if (btn.press(BtnX, BtnY)) {
btn.draw(B_PRESSED);
while (Touch.touched()) {
if (btn.press(BtnX, BtnY)) {
btn.draw(B_PRESSED);
} else {;
btn.draw(B_RELEASED);
return false;
}
ProcessTouch();
}
btn.draw(B_RELEASED);
return true;
}
return false;
}
// End of code to process button presses


// Begin code to process touch


void ProcessTouch() {
BtnX = -1;
BtnY = -1;
if (Touch.touched()) {
TP = Touch.getPoint();
BtnX = TP.x;
BtnY = TP.y;
// DEBUG_TOUCH, uncomment this section to shot the actual screen press coordinates in the Serial monitor
// use the max and min for both X and Y for the variables ScreenLeft, etc.
/*
Serial.print("Touched coordinates : ");
Serial.print(BtnX);
Serial.print(", ");
Serial.print(BtnY);
Serial.println();
*/
// end DEBUG_TOUCH
BtnX = map(BtnX, ScreenLeft, ScreenRight, 320, 0);
BtnY = map(BtnY, ScreenTop, ScreenBottom, 240, 0);
// Uncomment this next line to see where your resulting screen press is
// Display.fillCircle(BtnX, BtnY, 3, 0xFFFF);
  }
}


// End code to process touch


/*
End of the auto-generated code to convert Powerpoint slides to INO
*/

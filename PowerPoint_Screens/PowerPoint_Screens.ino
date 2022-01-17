/*
This code was automatically generated from graphic elements in a PowerPoint presentation
Generated: 17 January 2022 23:13:53
  Version: 1.0.4
Original autogenerate code written by Kris Kasprzak kris.kasprzak@yahoo.com
Use this code without warranty

Rev    Date         Author     Desc
1.0    06/06/2020   Kasprzak   Initial code
1.1    01/08/2022   Frank B    Improvements and TFT_eSPI_ext library
1.0.x  08/01/2022   Bodmer     Debugged and extended functionality

Requires library TFT_eSPI (can load via Arduino IDE library manager):
    https://github.com/Bodmer/TFT_eSPI
and Frank's font extension library:
    https://github.com/FrankBoesing/TFT_eSPI_ext
additional font files are available here:
    https://github.com/FrankBoesing/fonts/tree/main/ofl
*/

// You will need to include the appropriate .h files for the fonts
// This example uses the standard fonts that comes with TFT_eSPI_ext.

#include <font_Arial.h>
#include <font_ArialBold.h>
#include <font_ArialItalic.h>
#include <font_ArialBoldItalic.h>

#include <SPI.h>
#include <TFT_eSPI_ext.h>
TFT_eSPI_ext tft = TFT_eSPI_ext();

// Rounded rectangles will be turned into Adafruit buttons
// add code for touch screen processing

TFT_eSPI_Button Button1;
char buttonLabel1[] = "Label";
TFT_eSPI_Button Button2;
char buttonLabel2[] = "Button 2";
TFT_eSPI_Button Button3;
char buttonLabel3[] = "Button 3";
TFT_eSPI_Button Button4;
char buttonLabel4[] = "Setup";


void setup(){

  tft.begin();

  // use 1 or 3 for landscape mode
  // you will have to experiment as displays are different
  tft.setRotation(3);

  Button1.initButton(&tft,90, 60, 81, 23, 0xF800, 0x4398, 0xFFFF, buttonLabel1, 2);
  Button2.initButton(&tft,184, 60, 81, 23, 0xF800, 0x4398, 0xFFFF, buttonLabel2, 2);
  Button3.initButton(&tft,278, 60, 81, 23, 0xF800, 0x4398, 0xFFFF, buttonLabel3, 2);
  Button4.initButton(&tft,409, 30, 94, 43, 0xFFFF, 0x2A54, 0xFFFF, buttonLabel4, 2);

}

void loop(){


  // function call for Screen1
  Screen1();
  delay(5000);


  // function call for Screen2
  Screen2();
  delay(5000);


  // function call for Screen3
  Screen3();
  delay(5000);


  // function call for Screen4
  Screen4();
  delay(5000);


  // function call for Screen5
  Screen5();
  delay(5000);


  // function call for Screen6
  Screen6();
  delay(5000);

}

void Screen1(){


  tft.fillScreen(0xFFFF);

  // Isosceles Triangle 1
  tft.fillTriangle(21, 140, 162, 140, 91, 52, 0x4398);
  tft.drawTriangle(21, 140, 162, 140, 91, 52, 0x0000);
  tft.setTextColor(0xFFFF);
  tft.setTTFFont(Arial_14);
  tft.setCursor(67, 111);
  tft.print(F("TEST"));

  // Isosceles Triangle 2
  tft.fillTriangle(29, 152, 153, 152, 91, 294, 0xF800);
  // Right Triangle 3
  tft.fillTriangle(366, 59, 432, 118, 366, 118, 0xF800);
  tft.drawTriangle(366, 59, 432, 118, 366, 118, 0xF81F);
  // Right Triangle 4
  tft.fillTriangle(366, 185, 432, 125, 366, 125, 0x07E0);
  // Right Triangle 5
  tft.fillTriangle(357, 59, 357, 118, 291, 118, 0xFE00);
  tft.drawTriangle(357, 59, 357, 118, 291, 118, 0x0000);
  // Right Triangle 6
  tft.fillTriangle(357, 185, 357, 125, 291, 125, 0x001F);
  // TextBox 7
  tft.setTextColor(0x0000);
  tft.setTTFFont(Arial_14);
  tft.setCursor(27, 21);
  tft.print(F("Isosceles triangles"));

  // TextBox 8
  tft.setTextColor(0x001F);
  tft.setTTFFont(Arial_14);
  tft.setCursor(264, 22);
  tft.print(F("Right angle triangles"));

  // TextBox 9
  tft.setTextColor(0x0000);
  tft.setTTFFont(Arial_14);
  tft.setCursor(112, 284);
  tft.print(F("Shape outline and fill is optional"));

  tft.drawLine(251, 149, 163, 256, 0x001F);
  // TextBox 12
  tft.setTextColor(0x0000);
  tft.setTTFFont(Arial_14);
  tft.setCursor(180, 148);
  tft.print(F("Lines"));

  tft.drawLine(189, 183, 241, 237, 0x07E0);
  tft.drawLine(170, 226, 238, 208, 0xF800);
  // Oval 17
  tft.fillEllipse(361, 213, 51, 17, 0x001F);
  tft.fillEllipse(361, 213, 50, 16, 0xF81F);
  // Oval 18
  tft.drawEllipse(361, 257, 51, 17, 0xF800);
  // TextBox 19
  tft.setTextColor(0xF800);
  tft.setTTFFont(Arial_14);
  tft.setCursor(223, 244);
  tft.print(F("Ellipses"));

  // Rectangle 20
  tft.fillRect(163, 59, 116, 50, 0x2A91);
  tft.fillRect(164, 60, 114, 48, 0xC716);
  tft.setTextColor(0x0000);
  tft.setTTFFont(Arial_12);
  tft.setCursor(179, 77);
  tft.print(F("Rectangles"));



}

void Screen2(){


  tft.fillScreen(0xFFFF);

  // TextBox 1
  tft.fillRectHGradient(0, 16, 480, 51, 0xF800, 0xFE00);
  tft.setTextColor(0x0000);
  tft.setTTFFont(Arial_24);
  tft.setCursor(178, 29);
  tft.print(F("Text box"));

  // TextBox 8
  tft.setTextColor(0x0000);
  tft.setTTFFont(Arial_10);
  tft.setCursor(10, 104);
  tft.print(F("Text boxes with optional fill and outline  are supported"));

  // TextBox 10
  tft.setTextColor(0x0000);
  tft.setTTFFont(Arial_10);
  tft.setCursor(184, 130);
  tft.print(F("A gradient fill can be horizontal or vertical only"));

  // TextBox 14
  tft.drawRect(126, 229, 192, 45, 0xF800);
  tft.setTextColor(0xF800);
  tft.setTTFFont(Arial_10);
  tft.setCursor(136, 237);
  tft.print(F("Text wrapping like this in boxes not supported"));

  // TextBox 15
  tft.setTextColor(0xF800);
  tft.setTTFFont(Arial_10_Bold);
  tft.setCursor(59, 176);
  tft.print(F("Use a font face that will be available to sketch e.g. Arial"));

  // TextBox 18
  tft.setTextColor(0x0000);
  tft.setTTFFont(Arial_10);
  tft.setCursor(121, 78);
  tft.print(F("Text can be justified left, right or centre"));



}

void Screen3(){


  tft.fillScreen(0xFFFF);

  // TextBox 8
  tft.setTextColor(0x0000);
  tft.setTTFFont(Arial_12);
  tft.setCursor(15, 155);
  tft.print(F("Rounded rectangles create code for the library button class"));

  tft.drawLine(120, 80, 195, 153, 0x4398);
  tft.drawLine(195, 153, 266, 80, 0x4398);
  tft.drawLine(195, 153, 187, 84, 0x4398);

  tft.setTTFFont(Arial_10);
  Button1.drawButton();
  tft.setTTFFont(Arial_10);
  Button2.drawButton();
  tft.setTTFFont(Arial_10);
  Button3.drawButton();

}

void Screen4(){


  tft.fillScreen(0xFFFF);

  // TextBox 1
  tft.setTextColor(0x0000);
  tft.setTTFFont(Arial_14);
  tft.setCursor(145, 70);
  tft.print(F("Tables can be created"));

  // Table 3
  tft.drawFastHLine(57, 100, 344, 0xFFFF);
  tft.fillRect(57, 100, 86, 30, 0x4398);
  tft.setTextColor(0xFFFF);
  tft.setTTFFont(Arial_12_Bold);
  tft.setCursor(67, 111 );
  tft.print(F("Test"));

  tft.fillRect(143, 100, 86, 30, 0x4398);
  tft.setTextColor(0xFFFF);
  tft.setTTFFont(Arial_12_Bold);
  tft.setCursor(153, 111 );
  tft.print(F("Test"));

  tft.fillRect(229, 100, 86, 30, 0x4398);
  tft.setTextColor(0xFFFF);
  tft.setTTFFont(Arial_12_Bold);
  tft.setCursor(239, 111 );
  tft.print(F("Test"));

  tft.fillRect(315, 100, 86, 30, 0x4398);
  tft.setTextColor(0xFFFF);
  tft.setTTFFont(Arial_12_Bold);
  tft.setCursor(325, 111 );
  tft.print(F("Test"));

  tft.drawFastHLine(57, 130, 344, 0xFFFF);
  tft.fillRect(57, 130, 86, 30, 0xCEBD);
  tft.setTextColor(0x0000);
  tft.setTTFFont(Arial_12);
  tft.setCursor(67, 141 );
  tft.print(F("123"));

  tft.fillRect(143, 130, 86, 30, 0xCEBD);
  tft.setTextColor(0x0000);
  tft.setTTFFont(Arial_12);
  tft.setCursor(153, 141 );
  tft.print(F("456"));

  tft.fillRect(229, 130, 86, 30, 0xCEBD);
  tft.setTextColor(0x0000);
  tft.setTTFFont(Arial_12);
  tft.setCursor(239, 141 );
  tft.print(F("789"));

  tft.fillRect(315, 130, 86, 30, 0xCEBD);
  tft.setTextColor(0x0000);
  tft.setTTFFont(Arial_12);
  tft.setCursor(325, 141 );
  tft.print(F("…"));

  tft.drawFastHLine(57, 160, 344, 0xFFFF);
  tft.fillRect(57, 160, 86, 30, 0xEF5E);
  tft.setTextColor(0x0000);
  tft.setTTFFont(Arial_12);
  tft.setCursor(67, 171 );
  tft.print(F("abc"));

  tft.fillRect(143, 160, 86, 30, 0xEF5E);
  tft.setTextColor(0x0000);
  tft.setTTFFont(Arial_12);
  tft.setCursor(153, 171 );
  tft.print(F("def"));

  tft.fillRect(229, 160, 86, 30, 0xEF5E);
  tft.setTextColor(0x0000);
  tft.setTTFFont(Arial_12);
  tft.setCursor(239, 171 );
  tft.print(F("ghi"));

  tft.fillRect(315, 160, 86, 30, 0xEF5E);
  tft.setTextColor(0x0000);
  tft.setTTFFont(Arial_12);
  tft.setCursor(325, 171 );
  tft.print(F("…"));

  tft.drawFastHLine(57, 190, 344, 0xFFFF);
  tft.fillRect(57, 190, 86, 30, 0xCEBD);
  tft.setTextColor(0x0000);
  tft.setTTFFont(Arial_12);
  tft.setCursor(67, 201 );
  tft.print(F("…"));

  tft.fillRect(143, 190, 86, 30, 0xCEBD);
  tft.setTextColor(0x0000);
  tft.setTTFFont(Arial_12);
  tft.setCursor(153, 201 );
  tft.print(F("…"));

  tft.fillRect(229, 190, 86, 30, 0xCEBD);
  tft.setTextColor(0x0000);
  tft.setTTFFont(Arial_12);
  tft.setCursor(239, 201 );
  tft.print(F("…"));

  tft.fillRect(315, 190, 86, 30, 0xCEBD);
  tft.setTextColor(0x0000);
  tft.setTTFFont(Arial_12);
  tft.setCursor(325, 201 );
  tft.print(F("…"));

  tft.drawFastHLine(57, 220, 344, 0xFFFF);
  tft.drawFastHLine(57, 100, 344, 0xFFFF);
  tft.drawFastVLine(57, 100, 121, 0xFFFF);
  tft.drawFastVLine(143, 100, 121, 0xFFFF);
  tft.drawFastVLine(229, 100, 121, 0xFFFF);
  tft.drawFastVLine(315, 100, 121, 0xFFFF);
  tft.drawFastVLine(401, 100, 121, 0xFFFF);



}

void Screen5(){


  tft.fillScreen(0xFFFF);

  // Table 1
  tft.drawFastHLine(54, 53, 347, 0x0000);
  tft.fillRect(54, 53, 111, 41, 0xEBE6);
  tft.setTextColor(0xFFFF);
  tft.setTTFFont(Arial_12_Bold);
  tft.setCursor(70, 67 );
  tft.print(F("  integer"));

  tft.fillRect(165, 53, 117, 41, 0xEBE6);
  tft.setTextColor(0xFFFF);
  tft.setTTFFont(Arial_12_Bold);
  tft.setCursor(181, 67 );
  tft.print(F("    float"));

  tft.fillRect(282, 53, 118, 41, 0xEBE6);
  tft.setTextColor(0xFFFF);
  tft.setTTFFont(Arial_12_Bold);
  tft.setCursor(298, 67 );
  tft.print(F("     char"));

  tft.drawFastHLine(54, 94, 347, 0x0000);
  tft.fillRect(54, 94, 111, 41, 0xFF7D);
  tft.setTextColor(0x0000);
  tft.setTTFFont(Arial_12);
  tft.setCursor(70, 108 );
  static int tab11 = 0;
  tft.print(tab11);

  tft.fillRect(165, 94, 117, 41, 0xFF7D);
  tft.setTextColor(0x0000);
  tft.setTTFFont(Arial_12);
  tft.setCursor(181, 108 );
  static float tab21 = 0.00;
  tft.print(tab21);

  tft.fillRect(282, 94, 118, 41, 0xFF7D);
  tft.setTextColor(0x0000);
  tft.setTTFFont(Arial_12);
  tft.setCursor(298, 108 );
  const char tab31[] = "Text";
  tft.print(tab31);

  tft.drawFastHLine(54, 135, 347, 0x0000);
  tft.fillRect(54, 135, 111, 41, 0xFFFF);
  tft.setTextColor(0x0000);
  tft.setTTFFont(Arial_12);
  tft.setCursor(70, 149 );
  static int tab12 = 0;
  tft.print(tab12);

  tft.fillRect(165, 135, 117, 41, 0xFFFF);
  tft.setTextColor(0x0000);
  tft.setTTFFont(Arial_12);
  tft.setCursor(181, 149 );
  static float tab22 = 0.00;
  tft.print(tab22);

  tft.fillRect(282, 135, 118, 41, 0xFFFF);
  tft.setTextColor(0x0000);
  tft.setTTFFont(Arial_12);
  tft.setCursor(298, 149 );
  const char tab32[] = "Text";
  tft.print(tab32);

  tft.drawFastHLine(54, 176, 347, 0x0000);
  tft.fillRect(54, 176, 111, 41, 0xFF7D);
  tft.setTextColor(0x0000);
  tft.setTTFFont(Arial_12);
  tft.setCursor(70, 190 );
  static int tab13 = 0;
  tft.print(tab13);

  tft.fillRect(165, 176, 117, 41, 0xFF7D);
  tft.setTextColor(0x0000);
  tft.setTTFFont(Arial_12);
  tft.setCursor(181, 190 );
  static float tab23 = 0.00;
  tft.print(tab23);

  tft.fillRect(282, 176, 118, 41, 0xFF7D);
  tft.setTextColor(0x0000);
  tft.setTTFFont(Arial_12);
  tft.setCursor(298, 190 );
  const char tab33[] = "Text";
  tft.print(tab33);

  tft.drawFastHLine(54, 217, 347, 0x0000);
  tft.drawFastHLine(54, 53, 347, 0x0000);
  tft.drawFastVLine(54, 53, 165, 0x0000);
  tft.drawFastVLine(165, 53, 165, 0x0000);
  tft.drawFastVLine(282, 53, 165, 0x0000);
  tft.drawFastVLine(400, 53, 165, 0x0000);

  // TextBox 2
  tft.setTextColor(0x0000);
  tft.setTTFFont(Arial_20);
  tft.setCursor(50, 20);
  tft.print(F("Tables can contain variables"));

  // TextBox 3
  tft.setTextColor(0x0000);
  tft.setTTFFont(Arial_10);
  tft.setCursor(15, 227);
  tft.print(F("The =xxx means create an integer variable with name xxx in sketch"));

  // TextBox 12
  tft.setTextColor(0x0000);
  tft.setTTFFont(Arial_10);
  tft.setCursor(20, 249);
  tft.print(F("Add optional . for float and $ for a char array variable"));

  // TextBox 13
  tft.setTextColor(0xF800);
  tft.setTTFFont(Arial_10);
  tft.setCursor(147, 289);
  tft.print(F("See example on next sheet"));



}

void Screen6(){


  tft.fillScreen(0xFFFF);

  // TextBox 2
  tft.fillRect(0, 0, 480, 61, 0x39C7);
  tft.setTextColor(0xFFFF);
  tft.setTTFFont(Arial_20_Bold);
  tft.setCursor(6, 21);
  tft.print(F("HOME AUTOMATION"));

  // Rectangle 5
  tft.fillRectHGradient(13, 78, 221, 229, 0x0861, 0x4A69);
  tft.setTextColor(0xFFFF);
  tft.setTTFFont(Arial_18_Bold);
  tft.setCursor(13, 84);
  tft.print(F("TIME"));

  // Rectangle 11
  tft.fillRectHGradient(245, 78, 111, 231, 0x0861, 0x4A69);
  tft.setTextColor(0xFFFF);
  tft.setTTFFont(Arial_18_Bold);
  tft.setCursor(245, 84);
  tft.print(F("TEMP"));

  // Rectangle 12
  tft.fillRectHGradient(361, 78, 111, 231, 0x0861, 0x4A69);
  tft.setTextColor(0xFFFF);
  tft.setTTFFont(Arial_18_Bold);
  tft.setCursor(361, 84);
  tft.print(F("%RH"));

  // TextBox 19
  tft.setTextColor(0xFFFF);
  tft.setTTFFont(Arial_18);
  tft.setCursor(15, 107);
  const char timeNow[] = "Text";
  tft.print(timeNow);

  // TextBox 27
  tft.setTextColor(0xFFFF);
  tft.setTTFFont(Arial_18);
  tft.setCursor(251, 165);
  static float tmax = 0.00;
  tft.print(tmax);

  // TextBox 29
  tft.setTextColor(0xFFFF);
  tft.setTTFFont(Arial_18);
  tft.setCursor(252, 286);
  static float tnow = 0.00;
  tft.print(tnow);

  // TextBox 30
  tft.setTextColor(0xFFFF);
  tft.setTTFFont(Arial_18);
  tft.setCursor(367, 286);
  static int rhnow = 0;
  tft.print(rhnow);

  // Table 8
  tft.drawFastHLine(12, 136, 221, 0xFFFF);
  tft.fillRect(12, 136, 112, 43, 0x010C);
  tft.setTextColor(0xFFFF);
  tft.setTTFFont(Arial_13_Bold);
  tft.setCursor(23, 148 );
  tft.print(F("Door"));

  tft.fillRect(124, 136, 109, 43, 0x010C);
  tft.setTextColor(0xFFFF);
  tft.setTTFFont(Arial_13_Bold);
  tft.setCursor(135, 148 );
  tft.print(F("Status"));

  tft.drawFastHLine(12, 179, 221, 0xFFFF);
  tft.setTextColor(0xFFFF);
  tft.setTTFFont(Arial_13);
  tft.setCursor(18, 186 );
  tft.print(F("Front"));

  tft.setTextColor(0xF800);
  tft.setTTFFont(Arial_13);
  tft.setCursor(130, 186 );
  const char frontStat[] = "Text";
  tft.print(frontStat);

  tft.drawFastHLine(12, 204, 221, 0xFFFF);
  tft.setTextColor(0xFFFF);
  tft.setTTFFont(Arial_13);
  tft.setCursor(18, 211 );
  tft.print(F("Back"));

  tft.setTextColor(0x058A);
  tft.setTTFFont(Arial_13);
  tft.setCursor(130, 211 );
  const char backStat[] = "Text";
  tft.print(backStat);

  tft.drawFastHLine(12, 229, 221, 0xFFFF);
  tft.setTextColor(0xFFFF);
  tft.setTTFFont(Arial_13);
  tft.setCursor(18, 236 );
  tft.print(F("Garage"));

  tft.setTextColor(0xF800);
  tft.setTTFFont(Arial_13);
  tft.setCursor(130, 236 );
  const char gargStat[] = "Text";
  tft.print(gargStat);

  tft.drawFastHLine(12, 254, 221, 0xFFFF);
  tft.setTextColor(0xFFFF);
  tft.setTTFFont(Arial_13);
  tft.setCursor(18, 261 );
  tft.print(F("Side"));

  tft.setTextColor(0x058A);
  tft.setTTFFont(Arial_13);
  tft.setCursor(130, 261 );
  const char sideStat[] = "Text";
  tft.print(sideStat);

  tft.drawFastHLine(12, 279, 221, 0xFFFF);
  tft.setTextColor(0xFFFF);
  tft.setTTFFont(Arial_13);
  tft.setCursor(18, 286 );
  tft.print(F("Porch"));

  tft.setTextColor(0xF800);
  tft.setTTFFont(Arial_13);
  tft.setCursor(130, 286 );
  const char porchStat[] = "Text";
  tft.print(porchStat);

  tft.drawFastHLine(12, 304, 221, 0xFFFF);
  tft.drawFastHLine(12, 136, 221, 0xFFFF);
  tft.drawFastVLine(12, 136, 171, 0xFFFF);
  tft.drawFastVLine(124, 136, 171, 0xFFFF);
  tft.drawFastVLine(233, 136, 171, 0xFFFF);

  // TextBox 32
  tft.setTextColor(0xFFFF);
  tft.setTTFFont(Arial_18);
  tft.setCursor(368, 165);
  static int rhmax = 0;
  tft.print(rhmax);

  // TextBox 33
  tft.setTextColor(0xFFFF);
  tft.setTTFFont(Arial_18);
  tft.setCursor(252, 225);
  static float tmin = 0.00;
  tft.print(tmin);

  // TextBox 34
  tft.setTextColor(0xFFFF);
  tft.setTTFFont(Arial_18);
  tft.setCursor(367, 225);
  static int rhmin = 0;
  tft.print(rhmin);

  // TextBox 23
  tft.setTextColor(0xFFFF);
  tft.setTTFFont(Arial_18_Bold);
  tft.setCursor(366, 262);
  tft.print(F("NOW"));

  // TextBox 24
  tft.setTextColor(0xFFFF);
  tft.setTTFFont(Arial_18_Bold);
  tft.setCursor(367, 142);
  tft.print(F("MAX"));

  // TextBox 25
  tft.setTextColor(0xFFFF);
  tft.setTTFFont(Arial_18_Bold);
  tft.setCursor(366, 202);
  tft.print(F("MIN"));

  // TextBox 26
  tft.setTextColor(0xFFFF);
  tft.setTTFFont(Arial_18_Bold);
  tft.setCursor(248, 262);
  tft.print(F("NOW"));

  // TextBox 28
  tft.setTextColor(0xFFFF);
  tft.setTTFFont(Arial_18_Bold);
  tft.setCursor(248, 142);
  tft.print(F("MAX"));

  // TextBox 31
  tft.setTextColor(0xFFFF);
  tft.setTTFFont(Arial_18_Bold);
  tft.setCursor(248, 202);
  tft.print(F("MIN"));


  tft.setTTFFont(Arial_20);
  Button4.drawButton();

}
/*
End of the auto-generated sketch!
*/

/*
This code was automatically generated from graphic elements in a PowerPoint presentation
and for a Teensy MCU, and a display with ILI9341 driver

Autogenerate code written by Kris Kasprzak kris.kasprzak@yahoo.com
Use this code without warranty

Rev  Date         Author     Desc
1.0  06/06/2020   Kasprzak   Initial code

Connections:
Teensy   Display
3v3      Vcc
GND      GND
7        LED (can be 3v3)
8        RST (can be 3v3)
9        DC
10       CS
11       MOSI
12       MISO
11       SCK

Notes
1. To use SD card replace Resistors 1,2,3 with 0 ohm
2. Solder J1 closed
*/

// You will need to include the appropriate .h files for the fonts
// This example useds a combination of the stardard fonts that comes with the ILI9341_t3 and
// the custom fonts that come with ILI9341_Fonts library.

#include <SPI.h>
#include <ILI9341_t3.h>
#include <font_ArialBold.h>
#include <font_ArialItalic.h>
#include <font_ArialBoldItalic.h>
#include <font_Arial.h>

#define PIN_LCD 7
#define PIN_RST 8
#define PIN_DC 9
#define PIN_CS 10


// note remove 240, 320 as I've customized my lib to accept a screen size
ILI9341_t3 Display = ILI9341_t3(PIN_CS, PIN_DC, 240, 320, PIN_RST);

// Rounded rectangles will be turned into Adafruit buttons
// add code for touch screen processing

Adafruit_GFX_Button Button1;


void setup(){

pinMode(PIN_LCD, OUTPUT);

Display.begin();
delay(100);

digitalWrite(PIN_LCD, HIGH);

// use 1 or 3 for landscape mode
// you will have to experiment as displays are different
Display.setRotation(3);

Button1.initButton(&Display,267, 22, 94, 32,65535, 10836, 65535, "SETUP", 2);

}

void loop(){


// function call for Screen1
Screen1();
delay(5000);


// function call for Screen2
Screen2();
delay(5000);

}

void Screen1(){


Display.fillScreen(65535);

// Rectangle 5
Display.fillRect(41, 44, 250, 153, 63488);
Display.fillRect(41, 44, 250, 9, 17304);
Display.fillRect(41, 197, 250, 9, 17304);
// Isosceles Triangle 6
Display.fillTriangle(217, 109, 280, 109, 248, 57, 65504);
// Oval 7
Display.fillCircle(248, 91, 5, 0);
// TextBox 19
// you may want to specify the background color
// Display.setTextColor(ForeColor, BackColor);
Display.setTextColor(65535);
Display.setFont(Arial_16_Bold);
Display.setCursor(70, 80);
Display.print(F("Warning"));

// TextBox 20
// you may want to specify the background color
// Display.setTextColor(ForeColor, BackColor);
Display.setTextColor(65535);
Display.setFont(Arial_16);
Display.setCursor(73, 126);
Display.print(F("Restart the system."));



}

void Screen2(){


Display.fillScreen(0);

// TextBox 2
Display.fillRect(0, 0, 320, 45, 14791);
// you may want to specify the background color
// Display.setTextColor(ForeColor, BackColor);
Display.setTextColor(65535);
Display.setFont(Arial_14_Bold);
Display.setCursor(7, 10);
Display.print(F("HOME AUTOMATION"));

// Rectangle 5
// note displays handle rotations differently so you may have to swap fillRectHGradient for fillRectVGradient
Display.fillRectHGradient(9, 59, 147, 172, 2145, 19049);
// you may want to specify the background color
// Display.setTextColor(ForeColor, BackColor);
Display.setTextColor(65535);
Display.setFont(Arial_12_Bold);
Display.setCursor(9, 59);
Display.print(F("TIME"));

// Rectangle 11
// note displays handle rotations differently so you may have to swap fillRectHGradient for fillRectVGradient
Display.fillRectHGradient(163, 59, 73, 173, 2145, 19049);
// you may want to specify the background color
// Display.setTextColor(ForeColor, BackColor);
Display.setTextColor(65535);
Display.setFont(Arial_12_Bold);
Display.setCursor(163, 59);
Display.print(F("TEMP"));

// Rectangle 12
// note displays handle rotations differently so you may have to swap fillRectHGradient for fillRectVGradient
Display.fillRectHGradient(241, 59, 73, 173, 2145, 19049);
// you may want to specify the background color
// Display.setTextColor(ForeColor, BackColor);
Display.setTextColor(65535);
Display.setFont(Arial_12_Bold);
Display.setCursor(241, 59);
Display.print(F("%RH"));

// TextBox 19
// you may want to specify the background color
// Display.setTextColor(ForeColor, BackColor);
Display.setTextColor(65535);
Display.setFont(Arial_12);
Display.setCursor(20, 76);
Display.print(F("8:44 PM"));

// TextBox 27
// you may want to specify the background color
// Display.setTextColor(ForeColor, BackColor);
Display.setTextColor(65535);
Display.setFont(Arial_12);
Display.setCursor(178, 119);
Display.print(F("82.1"));

// TextBox 29
// you may want to specify the background color
// Display.setTextColor(ForeColor, BackColor);
Display.setTextColor(65535);
Display.setFont(Arial_12);
Display.setCursor(179, 210);
Display.print(F("80.2"));

// TextBox 30
// you may want to specify the background color
// Display.setTextColor(ForeColor, BackColor);
Display.setTextColor(65535);
Display.setFont(Arial_12);
Display.setCursor(255, 210);
Display.print(F("32"));

// Table 8
Display.drawFastHLine(8, 102, 147, 65535);
Display.fillRect(8, 102, 75, 32, 268);
// you may want to specify the background color
// Display.setTextColor(ForeColor, BackColor);
Display.setTextColor(65535);
Display.setFont(Arial_8_Bold);
Display.setCursor(15, 112 );
Display.print(F("Door"));

Display.fillRect(83, 102, 72, 32, 268);
// you may want to specify the background color
// Display.setTextColor(ForeColor, BackColor);
Display.setTextColor(65535);
Display.setFont(Arial_8_Bold);
Display.setCursor(90, 112 );
Display.print(F("Status"));

Display.drawFastHLine(8, 134, 147, 65535);
// you may want to specify the background color
// Display.setTextColor(ForeColor, BackColor);
Display.setTextColor(65535);
Display.setFont(Arial_8);
Display.setCursor(12, 140 );
Display.print(F("Front"));

// you may want to specify the background color
// Display.setTextColor(ForeColor, BackColor);
Display.setTextColor(1418);
Display.setFont(Arial_8);
Display.setCursor(87, 140 );
Display.print(F("Closed"));

Display.drawFastHLine(8, 153, 147, 65535);
// you may want to specify the background color
// Display.setTextColor(ForeColor, BackColor);
Display.setTextColor(65535);
Display.setFont(Arial_8);
Display.setCursor(12, 159 );
Display.print(F("Back"));

// you may want to specify the background color
// Display.setTextColor(ForeColor, BackColor);
Display.setTextColor(1418);
Display.setFont(Arial_8);
Display.setCursor(87, 159 );
Display.print(F("Closed"));

Display.drawFastHLine(8, 172, 147, 65535);
// you may want to specify the background color
// Display.setTextColor(ForeColor, BackColor);
Display.setTextColor(65535);
Display.setFont(Arial_8);
Display.setCursor(12, 178 );
Display.print(F("Garage"));

// you may want to specify the background color
// Display.setTextColor(ForeColor, BackColor);
Display.setTextColor(63488);
Display.setFont(Arial_8);
Display.setCursor(87, 178 );
Display.print(F("Open"));

Display.drawFastHLine(8, 191, 147, 65535);
// you may want to specify the background color
// Display.setTextColor(ForeColor, BackColor);
Display.setTextColor(65535);
Display.setFont(Arial_8);
Display.setCursor(12, 197 );
Display.print(F("Side"));

// you may want to specify the background color
// Display.setTextColor(ForeColor, BackColor);
Display.setTextColor(1418);
Display.setFont(Arial_8);
Display.setCursor(87, 197 );
Display.print(F("Closed"));

Display.drawFastHLine(8, 210, 147, 65535);
// you may want to specify the background color
// Display.setTextColor(ForeColor, BackColor);
Display.setTextColor(65535);
Display.setFont(Arial_8);
Display.setCursor(12, 216 );
Display.print(F("Porch"));

// you may want to specify the background color
// Display.setTextColor(ForeColor, BackColor);
Display.setTextColor(63488);
Display.setFont(Arial_8);
Display.setCursor(87, 216 );
Display.print(F("Closed"));

Display.drawFastHLine(8, 229, 147, 65535);
Display.drawFastHLine(8, 102, 147, 65535);
Display.drawFastVLine(8, 102, 128, 65535);
Display.drawFastVLine(83, 102, 128, 65535);
Display.drawFastVLine(155, 102, 128, 65535);

// TextBox 32
// you may want to specify the background color
// Display.setTextColor(ForeColor, BackColor);
Display.setTextColor(65535);
Display.setFont(Arial_12);
Display.setCursor(256, 119);
Display.print(F("55"));

// TextBox 33
// you may want to specify the background color
// Display.setTextColor(ForeColor, BackColor);
Display.setTextColor(65535);
Display.setFont(Arial_12);
Display.setCursor(178, 165);
Display.print(F("79.8"));

// TextBox 34
// you may want to specify the background color
// Display.setTextColor(ForeColor, BackColor);
Display.setTextColor(65535);
Display.setFont(Arial_12);
Display.setCursor(255, 164);
Display.print(F("51"));

// TextBox 23
// you may want to specify the background color
// Display.setTextColor(ForeColor, BackColor);
Display.setTextColor(65535);
Display.setFont(Arial_12_Bold);
Display.setCursor(255, 193);
Display.print(F("NOW"));

// TextBox 24
// you may want to specify the background color
// Display.setTextColor(ForeColor, BackColor);
Display.setTextColor(65535);
Display.setFont(Arial_12_Bold);
Display.setCursor(255, 102);
Display.print(F("MAX"));

// TextBox 25
// you may want to specify the background color
// Display.setTextColor(ForeColor, BackColor);
Display.setTextColor(65535);
Display.setFont(Arial_12_Bold);
Display.setCursor(255, 147);
Display.print(F("MIN"));

// TextBox 26
// you may want to specify the background color
// Display.setTextColor(ForeColor, BackColor);
Display.setTextColor(65535);
Display.setFont(Arial_12_Bold);
Display.setCursor(176, 193);
Display.print(F("NOW"));

// TextBox 28
// you may want to specify the background color
// Display.setTextColor(ForeColor, BackColor);
Display.setTextColor(65535);
Display.setFont(Arial_12_Bold);
Display.setCursor(176, 102);
Display.print(F("MAX"));

// TextBox 31
// you may want to specify the background color
// Display.setTextColor(ForeColor, BackColor);
Display.setTextColor(65535);
Display.setFont(Arial_12_Bold);
Display.setCursor(176, 147);
Display.print(F("MIN"));


Button1.drawButton();

}
/*
End of the auto-generated code for ILI9341_t3 screens
*/

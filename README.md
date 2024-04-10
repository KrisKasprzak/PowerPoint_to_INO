<b><h2><center>Code Generator for Converting PowerPoint Slides to .ino for 320 x 240 and 480 x 320 Displays</center></h1></b>
Speed creating graphical screens for your MCU projects by first creating screens in PowerPoint. This utility will convert PowerPoint slide graphics to code that can be compiled and uploaded to common MCU's such as Teensy and ESP-32's. This code generator is written in VBA and embedded in PowerPoint as a macro. Most common PowerPoint objects are supported. This utility is great for creating screens for monitoring systems, control systems, reporting systems, and more. See the examples below.

<b><h3>Tested with</b></h3>
<li>Tested with Teensy 3.2 and ILI9341_t3 (320 x 240)</li>
<li>Tested with ESP32 and Adafruit_ILI9341 (320 x 240)</li>
<li>Tested with Teensy 3.2 and ILI9488_t3 (480 x 320)</li>
<li>Support for Adafruit_HX8357 is coming soon...</li>

<b><h3>Revision</b></h3>
<li>v1.0 Kasprzak 06/06/2020 Initial code</li>
<li>v2.0 Kasprzak 04/04/2024 Support for fonts, colors, variables, buttons, local and global definitions, more</li>

<b><h3>Known issues</b></h3>
<li>Horizontal gradients where w > h not working--bug in display lib?</li>
<li>Teensy Arial fonts match the PowerPoint very well, Adafruit FreeSans--not as good.</li>


<b><h3>Usage</b></h3>
<br>Enable macros: File | Options, Trust Center the navigate to Trust Center Settings, Enable “Enable all macros"
<br>Enable Developer toolbar: RMB on toolbar Select customize the ribbon, enable Developer Toolbar from right selection group
<br>Put PowerPoint into presentation mode and click the Generate .INO button or select Developer Tab, Macros, select BuildINO and click Run. 

The resulting code is for a display with pixel size of 320 x 240. Do not adjust PowerPoint slide size, the odd size is intended to make PowerPoint font sizes realistic in the INO (a 12 point font in the .ino code will look similar to a 12 point font in PowerPoint). A different PowerPoint utility (coming soon) is available for 480 x 320 size displays.

<b><h3>Highlights</b></h3>
<li>Support for display library ILI9341_t3</li>
<li>Support for display library Adafruit_ILI9341</li>
<li>Font support for Teensy Arial fonts in many sizes</li>
<li>Font mapping for Arial to basic Adafruit fonts in 4 sizes</li>
<li>Option to create Adafruit or custom library buttons from Rectangles with text</li>
<li>Option to create button processing code for Touchscreens</li>
<li>Option to include XPT2046 touchscreen driver
<li>Default orientation is Landscape, but Presentation can be change to portrait mode--a user setting will allow switching screen orientation</li>
<li>Option to create variables from numbers in text boxes
<li>Option to create button and variables global or in screen functions
<li>Font list created and listed in #defines</li>
<li>Color list created and listed in #defines</li>
<li>Optional variables created for int and float</li>
<li>ILI9341_t1 (Teensy) will specify fonts based on PowerPoint fonts</li>
<li>Adafruit_ILI9341 (ESP32) can specify either fonts based on PowerPoint fonts or map to closes size delivered with the Adafruit GFX library</li>
<li>In either driver case, if PowerPoint fonts do not match delivered display fonts, simply #include the font and change the #defines</li>
<li>Option to draw place-holder graphics (square with x) for unsupported PowerPoint Objects</li>
<li>char button text created if buttons are created</li>
<li>Code generated to create Button objects and initialization</li>
<br>


<b><h3>Supported objects</b></h3>
To give examples of what objects and parameters are supported, here are examples of generated code (images on the left), and the origianl slide created in PowerPoint (images on the right). These images will help indicated what is supported and tips on usage. You may delete all slides and create your own, but DO NOT delete slide number 1. Keep this first slide for instructions and the "create" button also the code is hard coded to start at slide number 2. The code generator will do the best job possible in creating .ino graphics to mimic PowerPoint objects, however some parameters for PowerPoint objects are simply not exposed through the API, margins and radius values for rectangles for example. Below are some tips in how to get the most accurate rendition. All screens were first created in PowerPoint the converted to .ino code using this utility. Zero code edits were made to the results.
<br>

![header image](https://raw.github.com/KrisKasprzak/PowerPoint_to_INO_320x240/master/Images/Screen_2.jpg)
![header image](https://raw.github.com/KrisKasprzak/PowerPoint_to_INO_320x240/master/Images/Screen_2p.JPG)
<br>
![header image](https://raw.github.com/KrisKasprzak/PowerPoint_to_INO_320x240/master/Images/Screen_3.jpg)
![header image](https://raw.github.com/KrisKasprzak/PowerPoint_to_INO_320x240/master/Images/Screen_3p.JPG)
<br>
![header image](https://raw.github.com/KrisKasprzak/PowerPoint_to_INO_320x240/master/Images/Screen_4.jpg)
![header image](https://raw.github.com/KrisKasprzak/PowerPoint_to_INO_320x240/master/Images/Screen_4p.JPG)
<br>
![header image](https://raw.github.com/KrisKasprzak/PowerPoint_to_INO_320x240/master/Images/Screen_5.jpg)
![header image](https://raw.github.com/KrisKasprzak/PowerPoint_to_INO_320x240/master/Images/Screen_5p.JPG)
<br>
![header image](https://raw.github.com/KrisKasprzak/PowerPoint_to_INO_320x240/master/Images/Screen_6.jpg)
![header image](https://raw.github.com/KrisKasprzak/PowerPoint_to_INO_320x240/master/Images/Screen_6p.JPG)
<br>
![header image](https://raw.github.com/KrisKasprzak/PowerPoint_to_INO_320x240/master/Images/Screen_7.jpg)
![header image](https://raw.github.com/KrisKasprzak/PowerPoint_to_INO_320x240/master/Images/Screen_7p.JPG)
<br>
![header image](https://raw.github.com/KrisKasprzak/PowerPoint_to_INO_320x240/master/Images/Screen_8.jpg)
![header image](https://raw.github.com/KrisKasprzak/PowerPoint_to_INO_320x240/master/Images/Screen_8p.JPG)
<br>
![header image](https://raw.github.com/KrisKasprzak/PowerPoint_to_INO_320x240/master/Images/Screen_9.jpg)
![header image](https://raw.github.com/KrisKasprzak/PowerPoint_to_INO_320x240/master/Images/Screen_9p.JPG)
<br>
![header image](https://raw.github.com/KrisKasprzak/PowerPoint_to_INO_320x240/master/Images/Screen_10.jpg)
![header image](https://raw.github.com/KrisKasprzak/PowerPoint_to_INO_320x240/master/Images/Screen_10p.JPG)
<br>
<br>
<b><h3>Example screen shots</b></h3>
Here are examples of generated code (images on the left), and the origianl slide created in PowerPoint (images on the right) of some use cases. Create monitoring screens, warning screens, graphical view of an irrigation system, reporting systems, and more...All screens were first created in PowerPoint the converted to .ino code using this utility. Zero code edits were made to the results.
<br>
<br>

![header image](https://raw.github.com/KrisKasprzak/PowerPoint_to_INO_320x240/master/Images/Screen_11.jpg)
![header image](https://raw.github.com/KrisKasprzak/PowerPoint_to_INO_320x240/master/Images/Screen_11p.JPG)
<br>


![header image](https://raw.github.com/KrisKasprzak/PowerPoint_to_INO_320x240/master/Images/Screen_12.jpg)
![header image](https://raw.github.com/KrisKasprzak/PowerPoint_to_INO_320x240/master/Images/Screen_12p.JPG)
<br>
![header image](https://raw.github.com/KrisKasprzak/PowerPoint_to_INO_320x240/master/Images/Screen_13.jpg)
![header image](https://raw.github.com/KrisKasprzak/PowerPoint_to_INO_320x240/master/Images/Screen_13p.JPG)
<br>
![header image](https://raw.github.com/KrisKasprzak/PowerPoint_to_INO_320x240/master/Images/Screen_14.jpg)
![header image](https://raw.github.com/KrisKasprzak/PowerPoint_to_INO_320x240/master/Images/Screen_14p.JPG)
<br>
![header image](https://raw.github.com/KrisKasprzak/PowerPoint_to_INO_320x240/master/Images/Screen_15.jpg)
![header image](https://raw.github.com/KrisKasprzak/PowerPoint_to_INO_320x240/master/Images/Screen_15p.JPG)
<br>
![header image](https://raw.github.com/KrisKasprzak/PowerPoint_to_INO_320x240/master/Images/Screen_16.jpg)
![header image](https://raw.github.com/KrisKasprzak/PowerPoint_to_INO_320x240/master/Images/Screen_16p.JPG)
<br>
![header image](https://raw.github.com/KrisKasprzak/PowerPoint_to_INO_320x240/master/Images/Screen_1.jpg)
![header image](https://raw.github.com/KrisKasprzak/PowerPoint_to_INO_320x240/master/Images/Screen_1p.JPG)
<br>
<br>
<br>

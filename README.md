<b><h2><center>Code Generator for converting PowerPoint slides to .INO coder</center></h1></b>
This utility will convert PowerPoint slide graphics to code that can be compiled and uploaded to common MCU's such as Teensy and ESP-32's. This code generator is written in VBA and embedded in PowerPoint as a macro.

<b>Usage</b>
<br>Enable macros
<br>File|Options, Trust Center -> Trust Center Settings, Enable “Enable all macros…
<br>Enable Developer toolbar: RMB on toolbar Select customize the ribbon, enable Developer Toolbar from right selection group
<br>Select Developer Tab, Macros, select BuildINO and click Run. Or put PowerPoint into presentation mode and click the Generate .INO button.

The resulting code is for a display with pixel size of 320 x 240. Do not adjust slide size, the odd size is intended to make font sizes realistic in the INO. A different PowerPoint utility is available for 480 x 320 size displays.

Highlights
<li>Support for display library ILI9341_t3</li>
<li>Support for display library xxx</li>
<li>Support for display library Adafruit_ILI9341</li>
<li>Support for display library Adafruit_ILI9341</li>
<li>Font support for Teensy Arial fonts in many sizes</li>
<li>Font mapping for Arial to basic Adafruit fonts in 4 sizes</li>
<li>Option to create Adafruit or custom library buttons from Rectangles with text</li>
<li>Option to create button processing code for Touchscreens</li>
<li>Option to include XPT2046 touchscreen driver
<li>Option to add rich comments to the .ino code</li>
<li>Option to create variables from numbers in text boxes
<li>Option to create button and variables global or in screen functions
<li>Font list created and listed in #defines</li>
<li>Color list created and listed in #defines</li>
<li>Optional variables created for int and float</li>
<li>char button text created if buttons are created</li>
<li>Code generated to create Button objects and initialization</li>
<br>


Here are examples of generated code (images on the left), and the origianl slide created in PowerPoint (images on the right). These images will help indicated what is supported and tips on usage. You may delete all slides and create your own, but DO NOT delete slide 1. Keep this first slide for instructions and the "create" button. The code is hard coded to start at slide 2. The code generator will do the best job possible in creating .ino graphics to mimic PowerPoint objects, however some parameters for PowerPoint objects are simply not exposed through the API, margins and radius values for rectangles for example. Below are some tips in how to get the most accurate rendition.

![header image](https://raw.github.com/KrisKasprzak/PowerPoint_to_INO_320x240/master/Images/Screen_1.jpg)
![header image](https://raw.github.com/KrisKasprzak/PowerPoint_to_INO_320x240/master/Images/Screen_1p.JPG)
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


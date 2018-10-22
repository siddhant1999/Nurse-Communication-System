# Nurse-Communication-System

## Wrist Pager: a Request for Assistance System for Kensington Gardens

### Introduction
Kensington Gardens is a long-term care home housing residents majority of whom are in the ages of 80 to 96 years old. The Home currently has a Request for Assistance System which is causing delays in the measured and perceived response time by residents due to the following reasons:
* Residents are unaware of whether a staffers member is coming to help them
* Staffers need to walk to a ticker tape that provides the room that requires assistance
* Staffers are unaware of the type of request and respond to requests for which they are not qualified
* The system does not prevent multiple staffers from responding to the same request, preventing staff answering other requests

The Wrist Pager is a solution to the aforementioned problem. This post outlines the functionality of the Wrist Pager and the design process.


[![Demo](http://img.youtube.com/vi/hHtFfm6M06w/0.jpg)](http://www.youtube.com/watch?v=hHtFfm6M06w "Video Title")



The Wrist Pager is a device worn by the staffers which receives wireless alerts via Bluetooth when a service button is pressed in a resident’s room. When the call is ‘accepted’, it is removed from other pagers, and the needs of the residents are tended to.

If a staffer requires assistance at any point they may hold down both buttons and notify other staffers that their assistance is required.

The Wrist Pager reduces the average response time by a factor 8 by addressing several of the issues faced by the current system:
* Residents are notified when help is coming via a speaker
* Staffers are notified of requests via the wrist pager, so they do not have to physically walk to the ticker for the room number
* Allows for staff communication, preventing multiple staffers from answering the same call
* Unqualified staffers can reject a call and respond to the next call in the queue
* Further assistance can be requested

For more information on the triage of different calls refer to the 3 flowcharts that outline this process.

### Discrete Devices
* Wrist Pager: Bluetooth Wrist Pager with Accept/Reject buttons
* Caller: Speaker and 3 button resident interface
* Hub to connect devices in a network (not developed for the prototype here)

#### Caller (resident side)
* 3 LED lights (red, yellow, green)
* 3 pushbutton switches
* HC-12 bluetooth transmitter
* ATTINY85 microcontroller
* 8 pin holder
* Battery Pack
* 3 AA batteries
* Protoboard
* 100 microfarad capacitor
* Vibration motor
* Power source

#### Wrist Pager (staffer side)
* 2 LED lights (red, green)
* 2 long pushbutton switches
* [3D printed enclosure with back panel](https://github.com/siddhant1999/Nurse-Communication-System/blob/master/enclosure%20prototype.stl) 
* 1.44" color TFT display (ILI9163C)
* HC-12 Bluetooth transmitter
* 16 MHz ocsillating crystal
* 2 22pF capacitors
* Protoboard

#### Supplies
* Soldering iron
* flux + lead
* Arduino UNO (preferably 2)
* Ample Wiring
* Breadboard

### How it's Made

#### Caller
The set up for the caller is fairly straightforward. We have included the schematic here for you to follow. The corresponding software for the ATTINY85 is [here](https://github.com/siddhant1999/Nurse-Communication-System/blob/master/Caller%20ATTINY.ino)
Follow [this](https://www.instructables.com/id/Learn-How-to-Use-the-ATtiny85-in-UNDER-4-Minutes/) tutorial on how to configure an ATTINY85. Forgetting to load the bootloader is common error you want to avoid.

##### Full Schematic
`schematic here`

#### Wrist Pager
##### Enclosure
3D print [the outside enclosure] (https://github.com/siddhant1999/Nurse-Communication-System/blob/master/enclosure%20prototype.stl) in standard PLA with a minimum 0.15mm line height. Since the design does not assume the size or location of your buttons, you will need to either:
* edit the STL file to include holes or
* carefully drill the holes in afterwards

##### Bluetooth Communications
The communication between the two bluetooth controllers is the bedrock of the system and can be difficult to get working. The RXD and TXD pins on the Arduino are used for serial communication. Use these pins with the H-C12 Bluetooth transmitters with 2 Arduninos to establish a connection. [HC-12 Setup](https://howtomechatronics.com/tutorials/arduino/arduino-and-hc-12-long-range-wireless-communication-module/)

Given a serial input from one Ardunio you should see the same message appear in the serial monitor of the other.If the communication is successful but the correct characters are not appearing on the second Serial Monitor ensure that both Serial Monitors are operating at the same baud rate (recommended: `9600`)

If there are communication errors: solder the wires into the appropriate terminals. Faulty wiring is often the cause or failure since the serial communication is easily interupted by slight flucuations in power.

##### LED Screen
Ensure that you have all of the necessary dependancies installed the TFT screen and follow the following video on how to correctly wire the [TFT screen](https://www.youtube.com/watch?v=DSYB6sWGemU&t=77s).

###### Screen Dependancies
`<SPI.h>`
`<Adafruit_GFX.h>`
`<TFT_ST7735.h>`
`<avr/pgmspace.h>`

##### ATMEGA328
Since the Wrist Pager needs to small and portable we can't put an entire Ardunio in there. The great thing about Ardunio is how easy it makes testing and debugging. Thus we will use the microcontroller of an Ardunio Uno without the bulk of a board and pins. In order to configure the ATMEGA328 refer to this [info page](https://www.arduino.cc/en/Tutorial/ArduinoToBreadboard) by Arduino.

##### Full Schematic

`schematic here`

What I need:
I need to create a schematic for the watch and the hub
The best way to create a schematic for the watch is to look at the code
I need the circuit connection diagram of the atmega328

Upload
images (labeled)
diagrams
schematics
watch code
caller code
links to other resources
the PDF one pager
The images used for the symbols
The image of the ATMEGA diagram
The image of the ATTINY diagram

Remember to also go through ArduinoISP
Remember to show how the files are compressed and vectorized
How does the screen work
Also include the flowchart


![](images/IMG_0940.JPG?raw=true)

![](images/IMG_0949.JPG?raw=true)

![](images/IMG_0950.JPG?raw=true)

![](images/IMG_0951.JPG?raw=true)

![](images/IMG_0954.JPG?raw=true)

![](images/IMG_0956.JPG?raw=true)

![](images/IMG_0957.JPG?raw=true)


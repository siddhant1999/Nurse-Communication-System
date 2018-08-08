# Nurse-Communication-System

## Wrist Pager: a Request for Assistance System for Kensington Gardens

### Introduction
Kensington Gardens is a long-term care home housing residents majority of whom are in the ages of 80 to 96 years old. The Home currently has a Request for Assistance System which is causing delays in the measured and perceived response time by residents due to the following reasons:
* Residents are unaware of whether a staffers member is coming to help them
* Staffers need to walk to a ticker tape that provides the room that requires assistance
* Staffers are unaware of the type of request and respond to requests for which they are not qualified
* The system does not prevent multiple staffers from responding to the same request, preventing staff answering other requests

The Wrist Pager is a solution to the aforementioned problem. This post outlines the functionality of the Wrist Pager and the design process.
The Wrist Pager is a device worn by the staffers which receives wireless alerts via bluetooth when a service button is pressed in a resident’s room. When the call is ‘accepted’, it is removed from other pagers, and the needs of the residents are tended to. The Wrist Pager reduces the average response time by addressing several of the issues faced by the current system:
Residents are notified when help is coming via a speaker
Staffers are notified of requests via the wrist pager, so they do not have to physically walk to the ticker for the room number
Allows for staff communication, preventing multiple staffers from answering the same call
Unqualified staffers can reject a call and respond to the next call in the queue


### Discrete Components
* Bluetooth Wrist Pager with Accept/Reject
* Speaker and 3 button resident interface
* Hub to connect devices in a network (not developed for the prototype here)

#### Caller
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

#### Wrist Pager
* 2 LED lights (red, green)
* 2 long pushbutton switches
* 3D printed enclosure with back panel
* 1.44" color TFT display (ILI9163C)
* HC-12 bluetooth transmitter
* 16 MHz ocsillating crystal
* 2 22pF capacitors
* Protoboard

#### Supplies
* Soldering iron
* flux + lead
* Arduino UNO (preferably 2)
* Ample Wiring
* Breadboard

### How it's made

#### Caller
`schematic here`

#### Wrist Pager
3D print the outside enclosure (find STL file above)
The communication between the two bluetooth controllers can be difficult to get working
Ensure that the RXD and TXD communication work on your Arduino controller before proceeeding
This can be verified by connecting the TXD of one ardunio to the RXD on the other and vice versa.
Given a serial input from one computer you should see the same message apprear on the other
If the communication is successful but the correct characters are not appearing on the second Serial Monitor ensure that bost Serial Monitors are operating at the same baud rate (recommended 9600)

Once you have ensured successful communication do the same by connecting each Arduino to a HC-12 transmitter
If there are communication errors: solder the wires into the appropriate terminals
The serial communication is easily interupted by slight flucuations in power


Ensure that you have all of the necessary dependancies installed the TFT screen

Citations
How to use bluetooth
the LCD video
TFT packages
How to use ATMEGA328 as an Arduino

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

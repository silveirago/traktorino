# Traktorino

Welcome to the Traktorino project! The Traktorino is a low-cost, DIY MIDI controller for DJs. It can control any software that accepts MIDI, such as Traktor, Serato, or Ableton Live. This project is open-source, so you can download all the files for the schematics, enclosure, and code to build one yourself.

## Table of Contents
- [Introduction](#introduction)
- [Parts List](#parts-list)
- [Assembly Instructions](#assembly-instructions)
- [Programming the Arduino](#programming-the-arduino)
- [Setting Up MIDI](#setting-up-midi)
- [Enclosure Assembly](#enclosure-assembly)
- [Troubleshooting](#troubleshooting)
- [Support and Contributions](#support-and-contributions)

## Introduction
Watch the video series on how to build your Traktorino:
1. [Video 1: Introduction and Assembly](https://www.youtube.com/watch?v=example)
2. [Video 2: Programming the Arduino](https://www.youtube.com/watch?v=example)
3. [Video 3: Setting Up MIDI](https://www.youtube.com/watch?v=example)
4. [Video 4: Enclosure Assembly](https://www.youtube.com/watch?v=example)

## Parts List
- 1 Traktorino PCB
- 11 B10k rotary potentiometers
- 3 B10k slide potentiometers
- 2 cd4067 multiplexers
- 3 74HC595 bit shifters
- 13 tactile buttons
- 24 220 ohms resistors
- 1 1k resistor
- 11 blue LEDs
- 10 green LEDs
- 2 yellow LEDs
- 2 red LEDs

## Assembly Instructions
1. **Resistors**: Insert and solder the 220 ohm resistors. Place a 1k resistor in the specified position.
2. **Arduino Pin Headers**: Solder the pin headers to the Arduino and snap it onto the PCB.
3. **Multiplexers and Bit Shifters**: Solder these components onto the PCB.
4. **LEDs**: Ensure correct polarity and solder the LEDs.
5. **Tactile Buttons**: Solder the tactile buttons, ensuring correct orientation.
6. **Potentiometers**: Solder the slide and rotary potentiometers.
7. **Rotary Encoder**: Solder the rotary encoder.

## Programming the Arduino
1. Download and install the [Arduino IDE](https://www.arduino.cc/en/software).
2. Clone the Traktorino GitHub repository: `git clone https://github.com/your-repo/traktorino`.
3. Open the Arduino IDE and load the Traktorino code.
4. Install the required libraries: ShiftPWM, MIDI, Multiplexer4067, Thread, and Encoder.
5. Verify the code and upload it to the Arduino Uno.

## Setting Up MIDI
1. **USB MIDI Compatibility**: Use an Arduino Uno with the ATmega16U2 for true USB MIDI compatibility.
2. **DFU Programmer**: Download and install the DFU programmer.
3. **Upload Firmware**: Use the provided `.hex` file to flash the firmware to the ATmega16U2.
4. **Test MIDI**: Use a DAW or MIDI monitoring software to test the MIDI signals from the Traktorino.

## Enclosure Assembly
1. Assemble the plywood enclosure using the provided PDF files.
2. Install the diffusers, spacers, and screws as specified.
3. Attach the button caps and potentiometer knobs.

## Troubleshooting
- If the Traktorino is not functioning, use a multimeter to check for connectivity issues.
- Verify that all components are correctly soldered and oriented.

## Support and Contributions
- Subscribe to the [YouTube channel](https://www.youtube.com/channel/your-channel) for updates and tutorials.
- Purchase a Traktorino kit from our [store](https://www.yourstore.com).
- Check out the [DIY MIDI Controller Workshop](https://www.yourworkshop.com) for more in-depth learning.

Thank you for your interest in the Traktorino project! Feel free to open issues or contribute to the repository.

---

**Author**: Gustavo Silveira

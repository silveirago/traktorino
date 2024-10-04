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
1. [Video 1: Introduction and Assembly](https://youtu.be/pawsvbFrXVM)
2. [Video 2: Programming the Arduino](https://youtu.be/B8oFYNJLdgw)
3. [Video 3: Setting Up MIDI](https://youtu.be/18OKo9sQ_s0)
4. [Video 4: Enclosure Assembly](https://youtu.be/xLqzVqaUnkY)

## Parts List
- 1x Traktorino PCB
- 1x Arduino Uno ATmega16U2
- 11x b10k vertical rotary pots
- 3x b10k slide pots - 45mm - 30mm travel (C3031N-1A2-B10K-GP)
- 1x Rotary Encoder
- 2x cd4067 be multiplexers
- 3x 74hc595 bit shifters
- 13x tactile buttons 6x6x9
- 24x 220ohm resistors 
- 1x 1k resistor
- 11x 3mm blue leds 
- 10x 3mm green leds
- 2x 3mm yellow leds
- 2x 3mm red leds

### Parts suggestion

- **Pot 25mm**
https://lcsc.com/product-detail/Potentiometers-Variable-Resistors_ALPS-Electric-RK09D1130C2P_C361173.html

- **Encoder 25mm**
https://www.mouser.com/ProductDetail/Bourns/PEC12R-4025F-N0024?qs=Zq5ylnUbLm4HSBD7%2FFgU%2FA%3D%3D

- **Encoder 20mm**
https://www.mouser.com/ProductDetail/Bourns/PEC11H-4120F-S0020?qs=7MVldsJ5Uaxh8cksqYCfvg%3D%3D 20mm

- **Slide Pot**
https://www.sparkfun.com/products/11621

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
- Subscribe to the [YouTube channel](https://www.youtube.com/channel/UCyqCwyBJ98fR-CPoyXUxY5w) for updates and tutorials.
- Purchase a Traktorino kit from our store. (Out of stock)
- Check out the [DIY MIDI Controller Workshop](https://go.musiconerd.com/diy-midi-controller-workshop) for more in-depth learning.

## Code Explanation

### PWM Bit Shifter
The code uses a PWM bit shifter for controlling LEDs:
- `ShiftPWM_latchPin`: Set to pin 8.
- To avoid using the SPI port and change the pin numbers, uncomment `#define SHIFTPWM_NOSPI` and set `ShiftPWM_dataPin` and `ShiftPWM_clockPin`.
- `ShiftPWM_invertOutputs`: Set to `false`. Change to `true` if your LEDs turn on when the pin is low.
- `ShiftPWM_balanceLoad`: Set to `false`. Set to `true` to distribute current peaks.

### Libraries
The following libraries are included:
- **ShiftPWM** for PWM control.
- **MIDI** by Forty Seven Effects for MIDI communication.
- **Multiplexer4067** for handling the CD4067 multiplexer.
- **Thread** and **ThreadController** by Ivan Seidel for managing multiple tasks.
- **Encoder** by Paul Stoffregen for handling rotary encoders.

### Buttons
- `muxNButtons`: Number of digital inputs used in the multiplexer.
- `NButtons`: Number of direct digital inputs used.
- `muxButtonPin` and `buttonPin`: Arrays to store the pins used for buttons.

### Debounce
- `lastDebounceTime` and `debounceDelay`: Used to handle debounce for button presses.

### Potentiometers
- `NPots`: Number of analog inputs used.
- `muxPotPin`: Array to store the pins used for potentiometers.

### Potentiometer Reading
- `TIMEOUT`: Time the potentiometer will be read after exceeding `varThreshold`.
- `varThreshold`: Threshold for potentiometer signal variation.

### Encoder
- `myEnc`: Instance of the `Encoder` library using pins 3 and 2.
- `oldPosition`: Previous position of the encoder.

### MIDI Configuration
- `midiCh`, `note`, and `cc`: MIDI channel, note, and CC configurations.

### LEDs
- Configuration for controlling 24 LEDs with PWM.
- VU meter and button LED pins are defined.

### Multiplexer
- Instances of `Multiplexer4067` for pots and buttons.

### Threads
- `ThreadController` for managing tasks.
- Separate threads for reading potentiometers and buttons.

### Setup and Loop
In `setup()`, the serial communication is initialized, MIDI thru is turned off, multiplexers and LEDs are initialized, and threads are configured.

In `loop()`, the main tasks such as reading MIDI, encoder, and running threads are handled.

### Functions
- `readButtons()`: Reads button states and sends MIDI note messages.
- `readPots()`: Reads potentiometer states and sends MIDI control change messages.
- `readEncoder()`: Reads encoder values and sends MIDI control change messages.
- `handleControlChange()`, `handleNoteOn()`, and `handleNoteOff()`: Handle LED feedback for MIDI control changes and note messages.

## Usage
- Connect your Arduino and load the provided code.
- Ensure all components (buttons, potentiometers, LEDs) are connected to the specified pins.
- Install the required libraries mentioned above.
- Upload the code to your Arduino and start using your Traktorino MIDI controller with your favorite DJ software.

Feel free to modify the code and configurations to fit your specific needs. Happy DJing!


---

**Author**: Gustavo Silveira

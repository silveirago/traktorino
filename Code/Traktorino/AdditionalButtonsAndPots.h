#ifndef _ADDITIONBUTTONSANDPOTS_H_
#define _ADDITIONBUTTONSANDPOTS_H_

/**
 * Additional buttons and potentiometers can be added to the Traktorino
 * via the broken-out pins at the bottom of the PCB.
 * Available pins include 13, A2, A3, A4, and A5
 * Even more pins are available if you use an Arduino Mega
 */

// uncomment to enable additional buttons and potentiometers on Arduino digital / analog pins
//#define ADDITIONALBUTTONSANDPOTS

#ifdef ADDITIONALBUTTONSANDPOTS

// these fields should be customized to reflect what you've attached to the Arduino pins
const byte NButtons = 0; // *coloque aqui o numero de entradas digitais utilizadas
const byte buttonPin[NButtons] = {}; // *neste array coloque na ordem desejada os pinos das portas digitais utilizadas

const byte NPots = 0;
const byte potPin[NPots] = {};

// settings for Underdog Mod Shop Mega Traktorino
//const byte NButtons = 12;
//const byte buttonPin[NButtons] = {14, 15, 16, 17, 18, 19, 20, 21, 23, 25, 27, 29};
//
//const byte NPots = 4;
//const byte potPin[NPots] = {A6, A7, A8, A9};
#endif

#endif

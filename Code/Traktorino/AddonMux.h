#ifndef _ADDONMUX_H_
#define _ADDONMUX_H_

/**
 * An additional 4067 multiplexer can be added to the Traktorino via broken-out mux pins at the bottom of the PCB.
 * Pins 10, 11, 14, and 13 correspond to the address lines on the 4067 mux, e.g. S0, S1, S2, and S3, respectively.
 */
 
// uncomment to enable add-on multiplexer
//#define ADDONMUX

#ifdef ADDONMUX
#include <Multiplexer4067Fast.h>

// these fields should be customized to reflect which pin you're reading from and what you've attached to your add-on multiplexer
const byte addonMuxPin = A5;

const byte muxNAddonButtons = 16;
const byte muxAddonButtonPin[muxNAddonButtons] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};

const byte muxNAddonPots = 0;
const byte muxAddonPotPin[muxNAddonPots] = {};

Multiplexer4067Fast<4, 5, 6, 7> mplexAddon(addonMuxPin);
#endif

#endif

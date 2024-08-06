#include "setting.h"

// Touchscreen pins
#define XPT2046_IRQ 36 // T_IRQ
#define XPT2046_CS 33  // T_CS
#define XPT2046_MOSI 32 // T_DIN
#define XPT2046_MISO 39 // T_OUT
#define XPT2046_CLK 25  // T_CLK

// Create a new SPI port with:
// Pin 2 = MOSI,
// Pin 3 = MISO,
// Pin 4 = SCK


void printTouchToDisplay(TFT_eSPI* tft, int touchX, int touchY, int touchZ);
void printTouchToSerial(TFT_eSPI* tft, int touchX, int touchY, int touchZ);

#include "touchfunctions.h"
#include "setting.h"

// Print Touchscreen info about X, Y and Pressure (Z) on the Serial Monitor
void printTouchToSerial(TFT_eSPI *tft, int touchX, int touchY, int touchZ)
{
    Serial.print("X = ");
    Serial.print(touchX);
    Serial.print(" | Y = ");
    Serial.print(touchY);
    Serial.print(" | Pressure = ");
    Serial.print(touchZ);
    Serial.println();
}

// Print Touchscreen info about X, Y and Pressure (Z) on the TFT Display
void printTouchToDisplay(TFT_eSPI *tft, int touchX, int touchY, int touchZ)
{
    // Clear TFT screen
    tft->fillScreen(TFT_WHITE);
    tft->setTextColor(TFT_BLACK, TFT_WHITE);
    tft->loadFont("Times-30");

    int centerX = SCREEN_WIDTH / 2;
    int textY = 60;

    String tempText = "X = " + String(touchX);
    tft->drawCentreString(tempText, centerX, textY, FONT_SIZE);

    textY += 30;
    tempText = "Y = " + String(touchY);
    tft->drawCentreString(tempText, centerX, textY, FONT_SIZE);

    textY += 30;
    tempText = "Pressure = " + String(touchZ);
    tft->drawCentreString(tempText, centerX, textY, FONT_SIZE);
}

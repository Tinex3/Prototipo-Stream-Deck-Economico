#include <Arduino.h>
#include "Keyboard.h" // lib para usar funciones de teclado 

void setup()
{
    // todas las entradas con resistencias pull up para usar los push button conectados a gnd
    pinMode(9, INPUT_PULLUP);
    pinMode(8, INPUT_PULLUP);
    pinMode(7, INPUT_PULLUP);
    pinMode(6, INPUT_PULLUP);
}

void loop()
{
    if (digitalRead(9) == 0) // organizar el codigo en visual
    {
        Keyboard.press(KEY_LEFT_ALT);
        Keyboard.press(KEY_LEFT_SHIFT);
        Keyboard.press('f');
        delay(500);
    }
    // teclas de funcion extras o sin usar del telcado
    if (digitalRead(8) == 0)
    {
        Keyboard.press(KEY_F15);
        delay(500);
    }
    if (digitalRead(7) == 0)
    {
        Keyboard.press(KEY_F16);
        delay(500);
    }
    if (digitalRead(6) == 0)
    {
        Keyboard.press(KEY_F17);
        delay(500);
    }
    Keyboard.releaseAll(); // soltamos las telcas presionadas
}

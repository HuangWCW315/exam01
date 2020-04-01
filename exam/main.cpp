#include "mbed.h"
#include "uLCD_4DGL.h"

uLCD_4DGL uLCD(D1, D0, D2); // serial tx, serial rx, reset pin;
PwmOut PWM1(D6);

float ADC[128];
float data;


int main()
{


    uLCD.line(5,5, 5, 50, 0xFFFFFF);
    uLCD.line(5,50, 50, 50, 0xFFFFFF);
    uLCD.line(5,5, 50, 5, 0xFFFFFF);
    uLCD.line(50,5, 50, 50, 0xFFFFFF);

    uLCD.locate(20, 10);
    uLCD.printf("\n107061247\n");


    while (true)
    {
        
        PWM1.period(0.001);

        for (float i = 0; i < 1; i += 0.1)
        {
            PWM1 = i;
            wait(0.1);
        }

        for (float i = 1; i > 0; i -= 0.1)
        {
            PWM1 = i;
            wait(0.1);
        }
    }
}
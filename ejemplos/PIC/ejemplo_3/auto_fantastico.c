/*
 * File:   barra_led.c
 * Author: tigarto
 *
 * Created on 22 de agosto de 2015, 12:07 AM
 */

/*
 Paginas consultadas:
 * http://www.instructables.com/id/Programming-PIC-Microcontrollers/step10/Read-a-Digital-Value/
 * http://www.teaformyrobot.com/tutorials/pic18f2550/basic-digital-io/
 * http://www.mikroe.com/chapters/view/17/chapter-4-examples/#c4v3
 * http://pic-microcontroller.com/projects/led-projects/
 * http://www.best-microcontroller-projects.com/led-dot-matrix-display.html
 * http://www.maximintegrated.com/en/app-notes/index.mvp/id/2791
 * 
 */

#include <xc.h>

#define _XTAL_FREQ 4000000

// BEGIN CONFIG
#pragma config FOSC = HS // Oscillator Selection bits (HS oscillator)
#pragma config WDTE = OFF // Watchdog Timer Enable bit (WDT disabled)
#pragma config PWRTE = OFF // Power-up Timer Enable bit (PWRT disabled)
#pragma config BOREN = ON // Brown-out Reset Enable bit (BOR enabled)
#pragma config LVP = OFF // Low-Voltage (Single-Supply) In-Circuit Serial Programming Enable bit (RB3 is digital I/O, HV on MCLR must be used for programming)
#pragma config CPD = OFF // Data EEPROM Memory Code Protection bit (Data EEPROM code protection off)
#pragma config WRT = OFF // Flash Program Memory Write Enable bits (Write protection off; all program memory may be written to by EECON control)
#pragma config CP = OFF // Flash Program Memory Code Protection bit (Code protection off)



void main(void) {    
    /* Inicializacion de los perifericos I/O para la aplicacion */
    TRISB = 0; // Todos los pines son configurados como salida   
    PORTB = 0b00000001; // Inicializacion del puerto B
    unsigned char ban = 0;
    for(;;) {
        __delay_ms(1000);
        if (ban == 0) {
            PORTB <<= 1;
        }
        else {
            PORTB >>= 1;
        }        
        if (PORTB == 0b10000000) {
            ban = 1;
        }
        else if (PORTB == 0b00000001) {
            ban = 0;
        }
    }    
}

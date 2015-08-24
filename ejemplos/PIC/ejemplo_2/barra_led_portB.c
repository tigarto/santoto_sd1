/*
 * File:   barra_led_portB.c
 * Author: tigarto
 *
 * Created on 22 de agosto de 2015, 09:14 PM
 */

/*
 Paginas consultadas:
 * http://www.instructables.com/id/Programming-PIC-Microcontrollers/step10/Read-a-Digital-Value/
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
    PORTB = 0b00000001; // Inicializacion del puerto A    
    __delay_ms(1000);
    while(1) {                       
        if (PORTB >= 0b10000000) {
            PORTB = 0b00000001;
        } else {
            PORTB <<= 1;         
        }           
        __delay_ms(1000);        
    }    
}
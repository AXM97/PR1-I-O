/*
 * File:   PR1 BOTONES.c
 * Author: ALEX AXM
 *PRACTICA PARA CONOCER LA CONFIGURACION DEL MICROCONTROLADOR PIC16F1938 CODING BOARD XRED
 * Created on 25 de agosto de 2020, 10:33 AM
 */ 

// <editor-fold defaultstate="collapsed" desc="LIBRERIAS">
#include <xc.h>

// </editor-fold>

// <editor-fold defaultstate="collapsed" desc="PALABRA DE CONFIGURACION">
// #pragma config statements should precede project file includes.
// Use project enums instead of #define for ON and OFF.

// CONFIG1
#pragma config FOSC = INTOSC    // Oscillator Selection (INTOSC oscillator: I/O function on CLKIN pin)
#pragma config WDTE = OFF       // Watchdog Timer Enable (WDT disabled)
#pragma config PWRTE = ON       // Power-up Timer Enable (PWRT enabled)
#pragma config MCLRE = ON       // MCLR Pin Function Select (MCLR/VPP pin function is MCLR)
#pragma config CP = OFF         // Flash Program Memory Code Protection (Program memory code protection is disabled)
#pragma config CPD = OFF        // Data Memory Code Protection (Data memory code protection is disabled)
#pragma config BOREN = ON       // Brown-out Reset Enable (Brown-out Reset enabled)
#pragma config CLKOUTEN = OFF   // Clock Out Enable (CLKOUT function is disabled. I/O or oscillator function on the CLKOUT pin)
#pragma config IESO = ON        // Internal/External Switchover (Internal/External Switchover mode is enabled)
#pragma config FCMEN = ON       // Fail-Safe Clock Monitor Enable (Fail-Safe Clock Monitor is enabled)

// CONFIG2
#pragma config WRT = OFF        // Flash Memory Self-Write Protection (Write protection off)
#pragma config VCAPEN = OFF     // Voltage Regulator Capacitor Enable (All VCAP pin functionality is disabled)
#pragma config PLLEN = ON       // PLL Enable (4x PLL enabled)
#pragma config STVREN = ON      // Stack Overflow/Underflow Reset Enable (Stack Overflow or Underflow will cause a Reset)
#pragma config BORV = HI        // Brown-out Reset Voltage Selection (Brown-out Reset Voltage (Vbor), high trip point selected.)
#pragma config LVP = OFF        // Low-Voltage Programming Enable (High-voltage on MCLR/VPP must be used for programming)
// </editor-fold>

// <editor-fold defaultstate="collapsed" desc="DEFINES RETARDOS">
#define _XTAL_FREQ 32000000		//FRECUENCIA DE OPERACION 32MHZ
#define retardo_ms(x) _delay((unsigned long)((x)*(_XTAL_FREQ/4000.0))) //DEFINICION DE RETARDO MILISEGUNDOS
#define retardo_us(x) _delay((unsigned long)((x)*(_XTAL_FREQ/4000000.0)))	//DEFINICION DE RETARDO MICROSEGUNDOS
// </editor-fold>

// <editor-fold defaultstate="collapsed" desc="DEFINES DE PINES">
/*#DEFINE ALIAS REFERENCIA EJEMPLO: #DEFINE LED RA0*/
#define LED LATCbits.LATC0	//ETIQUETA LED
#define BOTON PORTBbits.RB0	//ETIQUETA BOTON 1
#define BOTON1 PORTBbits.RB1	//ETIQUETA BOTON 2
// </editor-fold>

// <editor-fold defaultstate="collapsed" desc="LIBRERIAS PROPIAS">
#include "SOUNDS.h"		//BIBLIOTECA PARA MUSICA 8BITS
#include "COMUNICACION_SERIAL.h"	//BIBLIOTECA PARA COMUNICACION SERIAL XCTU MONITOR SERIAL
// </editor-fold>

// <editor-fold defaultstate="collapsed" desc="PROTOTIPADO DE VARIABLES">
/*DECLARACION DE VARIABLES TIPO DE VARIABLE CHAR INT FLOAT BOUBLE Y PREFIJO SIGNED UNSIGNED CONST LONG SHORT*/ 
/* EJEMPLO UNSIGNED CHAR I; DONDE I ES UN GPR GENERAL PURPOSE REGISTER RECUERDA QUE PUEDE ASIGNARSELE UN VALOR INICIAL I=10*/
unsigned char dato;	//DATO SERIAL
char contador_rx=0;	//CONTADOR RX
char cadena_rx[6];	//CADENA CARACTERES RX
const char hola[]={"hola"};	//CONTRASENA ENTRADA
const char adios[]={"adios"};	//CONTRASENA SALIDA
// </editor-fold>

// <editor-fold defaultstate="collapsed" desc="PROTOTIPADO DE FUNCIONES">
void sistema_ini(void);	//INICIALIZAR SISTEMA
void buzzer(void);	//ZUMBIDO
void domisol(void);	//DO-MI-SOL
// </editor-fold>

// <editor-fold defaultstate="collapsed" desc="PROGRAMA PRINCIPAL">
void main (void)
{
    sistema_ini();
    INICIALIZA_COMUNICACION_SERIAL9600();
    LED=1;
    retardo_ms(500);
    ENVIAR_DATO(0x0D);
    ENVIAR_CADENA(" INTRODUCE CONTRASENA ");
    ENVIAR_DATO(0x0D);
   
    // <editor-fold defaultstate="collapsed" desc="CICLO INFINITO">
    while (1)
    {
        
        if (BOTON==0)
        {
            retardo_ms (250);	//RETARDO ANTIREBOTE
            while (BOTON==0);
            LATA=0XF0;		//ENCIENDE MITAD MSB DE PUERTO A
            buzzer(); 
            ENVIAR_DATO(0x0D);
            ENVIAR_CADENA(" BOTON 1 PRESIONADO ");
            
        }
        if (BOTON1==0)
        {
            retardo_ms (250);	//RETARDO ANTIREBOTE
            while (BOTON1==0);
            LATA=0X0F;		//ENCIENDE MITAD LSB DE PUERTO A
            domisol();
            ENVIAR_DATO(0x0D);
            ENVIAR_CADENA(" BOTON 2 PRESIONADO ");
            
        }
        
        
    }
     // </editor-fold>
}
// </editor-fold>

// <editor-fold defaultstate="collapsed" desc="INTERRUPCIÓN">
void __interrupt() my_isr(void){	//SEGMENTO DEL PROGRAMA CON COMUNICACION SERIAL CONTRASENA
    if (PIR1bits.RCIF)
    {
      PIR1bits.RCIF=0;
      dato=RCREG;
      if(dato==0x0D)
      {
          if((strcmp(hola,cadena_rx))==0)
          {
            LED=0; 
            buzzer(); 
            ENVIAR_DATO(0x0d);
            ENVIAR_CADENA(" BIENVENIDO ");
            ENVIAR_DATO(0x0d);
            
            
          }
          else if((strcmp(adios,cadena_rx))==0)
          {
              LED=1;
              domisol();
              ENVIAR_DATO(0x0d);
            ENVIAR_CADENA(" HASTA PRONTO ");
            ENVIAR_DATO(0x0d);
             
          }
          else{
             
             ENVIAR_DATO(0x0d);
             ENVIAR_CADENA(" CONTRASENA INCORRECTA ");
             ENVIAR_DATO(0x0d);
     
              
                SOUND('C',0,3,15);
                SOUND('S',0,3,10);
                SOUND('C',0,3,15);

          }
          for (char i=0;i<6;i++)
          {
              cadena_rx[i]=0;
          }
          contador_rx=0;
      }
      else
      {
      cadena_rx[contador_rx]=dato;
      contador_rx++;
      }
    }
}
// </editor-fold>

// <editor-fold defaultstate="collapsed" desc="FUNCIONES">
void sistema_ini(void)
{
    OSCCON=0b01110000; /*COMBINACION PARA 8 MHZ O 32 MHZ DE FRECUENCIA*/
    APFCON=0;          /*ALTERNATE PIN FUNCTION CONTROL REGISTER LO COLOCAMOS EN 0 PARA DESHABILITAR LAS FUNCIONES ALTERNATIVAS DE CADA PIN*/
    LATA=0;
    LATB=0;
    LATC=0;
    TRISA=0;            /*CONFIGURADO COMO SALIDA*/
    TRISB=0b00000011;   //ENTRADAS SON RB1 Y RB0
    TRISC=0;   /*CONFIGURADO COMO SALIDA*/
    ANSELA=0;		//NO USAMOS CANALES ANALOGICOS
    ANSELB=0;   	//NO USAMOS CANALES ANALOGICOS
}

void buzzer(void)
{
SOUND('C',0,5,50);
SOUND('C',0,6,10);
SOUND('C','#',6,10);
SOUND('D',0,6,10);
SOUND('D','#',6,10);
SOUND('E',0,6,10);
SOUND('F',0,6,10);
SOUND('F','#',6,10);
SOUND('G',0,6,10);
SOUND('G','#',6,10);
SOUND('A',0,6,10);
SOUND('A','#',6,10);
SOUND('B',0,6,10);
SOUND('C',0,7,10);
SOUND('C','#',7,10);
SOUND('D',0,7,10);
SOUND('D','#',7,10);
SOUND('E',0,7,10);
SOUND('D','#',7,10);
SOUND('D',0,7,10);
SOUND('C','#',7,10);
SOUND('C',0,7,10);
SOUND('B',0,6,10);
SOUND('A',0,6,10);
SOUND('G',0,6,10);
SOUND('F',0,6,10);
SOUND('E',0,6,10);
SOUND('D',0,6,10);
SOUND('C',0,6,10);

SOUND('C',0,3,15);
SOUND('S',0,3,10);
SOUND('C',0,3,15);

}

void domisol(void)
{

SOUND('C',0,3,25);
SOUND('S',0,3,10);
SOUND('E',0,3,25);
SOUND('S',0,3,10);
SOUND('G',0,3,25);

}

// </editor-fold>





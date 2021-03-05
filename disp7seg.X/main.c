/*
 * File:   main.c
 * Author: 19267692
 *
 * Created on 25 de Fevereiro de 2021, 14:51
 */


#include <xc.h>
#include "config.h"
#include "delay.h"
#include "display7seg.h"

int cont = 0;
int estado = 0;

void main(void) 
{ 
    while ( 1 )
    {   
        switch ( estado )
        {
            case 0:
                PORTB = 0x3F;
                    estado = 1;
                break;
            case 1:
                init_display();
                    estado = 2;
                break;
            case 2:
                if( botao_up() == 1 )
                     estado = 3;
                 break;
            case 3:
                cont++;
                display7seg(cont);
                    estado = 4;
                break;
            case 4:
                if( botao_up() == 0 )
                    estado = 0;
                break;
        }
    }
}
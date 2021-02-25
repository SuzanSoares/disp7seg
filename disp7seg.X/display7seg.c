/*
 * File:   display7seg.c
 * Author: 19267692
 *
 * Created on 25 de Fevereiro de 2021, 15:51
 */


#include <xc.h>

void init_display(void)
{
    TRISD = 0x00;
    PORTD = 0x00;        
}


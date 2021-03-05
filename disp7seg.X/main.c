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

 

void main(void) 
{
    init_display();
    
    while ( 1 )
    {   
        if( botao_up() == 1 )
        display7seg(8);
    }
}

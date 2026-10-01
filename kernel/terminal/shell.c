/*
*   Shell Geral Code
*   Speak no to Vibecode
*/
#include <shell.h>
void shell(uint8_t comando[]){
    comando = teclas;
    if(strcmp(comando,'help' == 0))
        {
            vga_set_color(VGA_WHITE,VGA_BLACK);        
            kprintf("Now, it's first Command\z");
        }
}
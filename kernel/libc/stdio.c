#include <stdio.h>

/*
* PRINTF TYPES
* %d type = int
* %f type = double 
* %c types = char
* %s type = String
* %x Unsignet interger in hexadecimal (optional)
* %p type = Pointer    
*/

int kprintf(const char* restrict format, ...)
{
    va_list args;
    va_start(args,format);
    while(*format != '\0'){
        if(*format != '%')
        {
            vga_kputchar(*format);
        }
        if(*format == '%')
        {
                if(format[1] == 'i')
                {
                    int num = va_arg(args,int);
                    char *s = itoa(num); // s e o ponteiro que o itoa (que está em stdlib.h ) devolve de int para este ponteiro 
                    while(*s != '\0'){
                        vga_kputchar(*s);
                        s++;
                    }
                    format++;
                }

            
        }
        format++;
    }
}
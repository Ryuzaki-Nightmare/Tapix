/*
 *   Shell Geral Code
 *   Speak no to Vibecode
 */
#include <shell.h>
void shell(void) {

  /*
  *Use strncmp, third argument is len of second parameter
  *Use else if
  */
  if (strncmp(teclas , "help",4) == 0) {
    vga_set_color(VGA_LIGHT_BLUE, VGA_BLACK);
    kprintf("Now, it's first Command\z");
  }
  else if(strncmp(teclas, "fah",3) == 0)
  {
    vga_set_color(VGA_LIGHT_BLUE,VGA_BLACK);
    kprintf("FAHHHHHHHH\z");
  } 
  else
  {

    vga_set_color(VGA_RED, VGA_BLACK);
    kprintf("Unknown command\z");
  }
}

/*
 *   Shell Geral Code
 *   Speak no to Vibecode
 */
#include <shell.h>
void shell(void) {

  if (strncmp(teclas , "help",4) == 0) {
    //Use strncmp, third argument is len of second parameter
    vga_set_color(VGA_LIGHT_MAGENTA, VGA_BLACK);
    kprintf("Now, it's first Command\z");
  } else {

    vga_set_color(VGA_RED, VGA_BLACK);
    kprintf("Unknown command\z");
  }
}

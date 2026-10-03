/*
 *   Shell Geral Code
 *   Speak no to Vibecode
 */
#include <shell.h>
void shell(void) {

  if (strcmp(teclas, "help") == 0) {
    vga_set_color(VGA_LIGHT_MAGENTA, VGA_BLACK);
    kprintf("Now, it's first Command\z");
  } else {

    vga_set_color(VGA_RED, VGA_BLACK);
    kprintf("Unknown: [");
    kprintf(teclas);
    kprintf("]\z");
  }
}

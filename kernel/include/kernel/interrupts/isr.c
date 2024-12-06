#include <kernel/interrupts/isr.h>

void exception_handler() {
  __asm__ volatile ("cli; hlt");
}
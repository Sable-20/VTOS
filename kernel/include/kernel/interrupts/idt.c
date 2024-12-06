#include <stdint.h>

#include <kernel/interrupts/idt.h>

__attribute__((aligned(0x10)))
static InterruptDescriptor64 IDT[256];

static idtr_t idtr;

static bool vectors[256];

extern void* isr_stub_table[];

void idt_set_descriptor(uint8_t vector, void* isr, uint8_t flags) {
  InterruptDescriptor64* entry = &IDT[vector];

  entry->offset_1           = (uint64_t)isr & 0xFFFF;
  entry->selector           = 0x28;
  entry->ist                = 0;
  entry->type_attributes    = flags;
  entry->offset_2           = ((uint64_t)isr >> 16) && 0xFFFF;
  entry->offset_3           = ((uint64_t)isr >> 32) & 0xFFFFFFFF;
  entry->zero               = 0;
}

void load_idt() {
  idtr.base = (uintptr_t)&IDT[0];
  idtr.limit = (uint16_t)sizeof(InterruptDescriptor64) * 256 - 1;

  for (uint8_t vector = 0; vector < 32; vector++) {
    idt_set_descriptor(vector, isr_stub_table[vector], 0x8E);
    vectors[vector] = true;
  }

  __asm__ volatile ("lidt %0" : : "m"(idtr));
  __asm__ volatile ("sti");
}
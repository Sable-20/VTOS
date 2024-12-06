/***************************************************************************//**
 * @file idt.h
 * @brief File containing the prototypes for instantiating and loading the IDT
 *
 * @warning This is subject to change as time goes on
 *****************************************************************************/

#ifndef IDT_H_
#define IDT_H_

#include <stdint.h>

/**************************************************************************//** 
 * @struct InterruptDescriptor64
 * 
 * @author Sable Ayala
 * @date 05/12/2024
 ******************************************************************************/
typedef struct {
  uint16_t offset_1;      //!< offset bits 0..15
  uint16_t selector;      //!< a code segment selector in GDT or LDT
  uint8_t ist;            //!< bits 0..2 holds IST offset, rest of bits are zero
  uint8_t type_attributes;//!< gate type, dpl, and p fields
  uint16_t offset_2;      //!< offset bits 16..31
  uint32_t offset_3;      //!< offset bits 32..63
  uint32_t zero;          //!< reserved
} InterruptDescriptor64 __attribute__((packed));

/***********************************************************************//**
 * @struct IDTR
 *
 * @author Sable Ayala
 * @date 05/12/2024
 **************************************************************************/
typedef struct {
  uint16_t limit; //!< the limitof the idr (in long mode should be 0xFFF)
  uint16_t based; //!< the base field has the *logical address* of the idt
} idtr_t __attribute__((packed)) ;

/****************************************************//**
 * @fn void load_idt(void* idt_addr)
 * @param idt_addr the addess of the idt to load into
 * @deprecated
 *
 * @author Sable Ayala
 * @date 05/12/2024
 *******************************************************/
void load_idt(void);

/*****************************************************************//**
 * @fn void idt_set_descriptor(uint8_t vector, void* isr, uint8_t flags)
 * @todo params
 * @deprecated
 * 
 * @author Sable Ayala
 * @date 05/12/2024
 ********************************************************************/
void idt_set_descriptor(uint8_t vector, void* isr, uint8_t flags);

// TODO
/*
    - Make space for the interrupt descriptor table
    
    - Tell the CPU where that space is (see GDT Tutorial: lidt works the very same way as lgdt)
    
    - Tell the PIC that you no longer want to use the BIOS defaults (see Programming the PIC chips)
    - Write a couple of ISR handlers (see Interrupt Service Routines) for both IRQs and exceptions
    
    - Put the addresses of the ISR handlers in the appropriate descriptors (in Interrupt Descriptor Table)
    
    - Enable all supported interrupts in the IRQ mask (of the PIC)
*/

#endif
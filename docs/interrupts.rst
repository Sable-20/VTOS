.. _interrupts:

=========================
include/kernel/interrupts 
=========================

idt.h 
======

Structs
-------

.. doxygenstruct:: idt_entry_t
   :project: VTOS 
   :members:

.. doxygenstruct:: idtr_t
   :project: VTOS 
   :members:

Functions
---------

.. doxygenfunction:: idt_set_descriptor
   :project: VTOS 

.. doxygenfunction:: idt_init 
   :project: VTOS

.. doxygenfunction:: exception_handler
   :project: VTOS
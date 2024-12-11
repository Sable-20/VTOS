.. _interrupts:

=========================
include/kernel/interrupts 
=========================

idt.h 
======

Structs
-------

.. doxygenstruct:: InterruptDescriptor64
   :project: VTOS 
   :members:

.. doxygenstruct:: idtr_t
   :project: VTOS 
   :members:

Functions
---------

.. doxygenfunction:: load_idt
   :project: VTOS 

.. doxygenfunction:: idt_set_descriptor
   :project: VTOS 

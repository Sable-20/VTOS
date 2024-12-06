.. raw:: html

   <div align="center">
      <img src="static/imgs/logo.svg" width="300px" alt="Project Logo" />
       <!-- <h1>VTOS</h1> -->
   </div>

.. raw:: html

   <br>
   <h1 align="center"><strong><i>VTOS</i></strong></h1>

.. raw:: html

   <div align="center">
      <img alt="GitHub code size in bytes" src="https://img.shields.io/github/languages/code-size/Sable-20/VTOS?style=for-the-badge">
   </div>

Description
-----------

VTOS is a hobby operating system being designed by myself simply because
I think it's fun and it gives me a project. Maybe one day it'll be
usable but for now that intention is just to have fun programming and
give myself a project so that my skills don't get rusty. I do fully
intend one day to try and make it have modules and be able to use Rust
and all those *fancy* things.

Installation
------------

Build the project into an iso

.. code:: bash

   # if you are on Mac
   ./mac.sh 
   # other systems
   make

Roadmap
-------

Here's a glimpse into the exciting journey ahead for our project:

Upcoming Milestones
~~~~~~~~~~~~~~~~~~~

:Q4 2024:

   |UNCHECKED_BOX| kprint() and serial output

      |UNCHECKED_BOX| Use `SSFN <https://wiki.osdev.org/Scalable_Screen_Font>`__ to
         render things for ease
   
   |CHECKED_BOX| Complete using sphinx documentation for clarity and buildability
   |UNCHECKED_BOX| Write and load IDT (GDT is provided according to `Limine Boot Protocol Specification <https://github.com/limine-bootloader/limine/blob/trunk/PROTOCOL.md#machine-state-at-entry>`__ 

> IDT is not provided by |LBP| according to the specification

> SSFN may not be used, if memory management is completed first PSF will be used instead

:FY 2025:

   |UNCHECKED_BOX|  Terminal Scrolling
   |CHECKED_BOX|  paging 
   |UNCHECKED_BOX|  memory management and use `PSF` fonts 
      - `liballoc <https://github.com/blanham/liballoc/tree/master>`__ used for memory management
   

:Long Term:
   |UNCHECKED_BOX| modules
   |UNCHECKED_BOX| Rust
   |UNCHECKED_BOX| Support and use `jemalloc <https://jemalloc.net/>`__ instead of liballoc

> paging provided by |LBP|

We're excited about what's coming and will keep you updated as we
progress. Your feedback and support are crucial as we build the future!

Contributors
------------

-  **Sable-20**: `Contributer <https://github.com/Sable-20>`__

A big thank you to everyone who made this project possible!


.. |LBP| raw:: html

   <abbr title="Limine Boot Protocol">LBP</abbr>

.. |UNCHECKED_BOX| raw:: html
   
   <p>&#9744</p>

.. |CHECKED_BOX| raw:: html

   <p>&#9745</p>
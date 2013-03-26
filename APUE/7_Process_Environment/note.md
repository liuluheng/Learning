7.3 Process Termination
--------------------------

Historically, the *exit* function has always performed a clean shutdown of the standard I/O library: the *fclose* function is called for all open streams. And all buffered output data to be flushed.

    #include <stdlib.h>
    int atexit(void (\*func)(void));

With ISO C, a process can register up to 32 functions that are automatically called by *exit* in **reverse order** of their registration.


7.6 Memory Layout of a C program
--------------------------------

A C program has been composed of the following pieces:

* Text segment

    the machince instructions, usually as shareable so and read only

* Initialized data segment

    usually global variables

* Unintialized data segment

    often called bss, stands for "block started by symbol". Data in this segment is initialized by the kernel to arithmetic 0 or null pointers before program starts executing.

* Stack

    automatic variables stored, along with information that is saved each time a function is called
    
* Heap

    dynamic memory allocation, this segment is usually located between unintialized data and the stack

With Linux on Intel x86 processor, the text segment starts at location *0x8048000* and the bottom of the stack starts just below *0xC0000000*. The stack grows from higher-numbered addresses to lower numbered address.

high address|   | stack |  | heap | bss | initialized data | text |  low address

We can use *size* command reports the size of each segment.

7.7 Shared Libraries
--------------------
Compile shared lib on Linux

    gcc -Wall -fPIC -c *.c
    gcc -shared -Wl,-soname,libctest.so.1 -o libctest.so.1.0   *.o
    mv libctest.so.1.0 /opt/lib
    ln -sf /opt/lib/libctest.so.1.0 /opt/lib/libctest.so.1
    ln -sf /opt/lib/libctest.so.1.0 /opt/lib/libctest.so


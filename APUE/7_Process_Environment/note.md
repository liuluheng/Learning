7.3 Process Termination
--------------------------

Historically, the *exit* function has always performed a clean shutdown of the standard I/O library: the *fclose* function is called for all open streams. And all buffered output data to be flushed.

    #include <stdlib.h>
    int atexit(void (*func)(void));

With ISO C, a process can register up to 32 functions that are automatically called by *exit* in **reverse order** of their registration.


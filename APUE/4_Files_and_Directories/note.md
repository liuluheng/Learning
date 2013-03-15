4.8 umask Function
-------------------
    #include <sys/stat.h>
    mode_t umask(mode_t cmask);

The umask function sets the file mode creation mask for the process and returns the previous value. ( This is one of the few functions that does **not** have an error return )

Changing the file mode creation mask of a process does not affect the mask of its parent.

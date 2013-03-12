S3.1 Introduction
-----------------
Basic five functions: *open*, *read*, *write*, *lseek*, and *close*.
Notice that they are not part of ISO C, but are part of POSIX.1 and the Sigle UNIX Specification.

S3.2 File Descriptors
---------------------
File descriptors range from 0 to *OPEN_MAX*. We can get it by:

    #include <unistd.h>
    long openmax = sysconf(_SC_OPEN_MAX_ )

S3.3 Open Function
------------------
Notice that the header file is \<fcntl.h\>

    #include <fcntl.h>
    int open(const char *pathname, int oflag, ... /* mode_t mode */);

The file descriptor returned by open is guaranteed to be the **lowest-numbered unused** descriptor.

S3.6 lseek Function
-------------------
Since the offset argument could be negtive, we should be careful to compare the return value from lseek as being equal to or not equal to -1 and not test if it is less than 0.



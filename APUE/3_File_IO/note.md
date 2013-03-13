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

S3.10 File Sharing
------------------
If a file is opened with the O_APPEND flag, a corresponding flag is set in the file status flags of the file table entry. This would **force every write** to be appended to the current end of file.

But if we using lseek, all happens is just the current file offset in the file table entry is set to the current file size read from i-node. No I/O takes place.

file descriptor flags and file status flags, the former only apply to a single descriptor in a single process, whereas the latter aplly to all descriptors in any process that point to the given file table entry.

S3.11 Atomic Operations
In general, the term atomic operation refers to an operation that might be composed of multiple steps. If the operation is performed atomically, either all the steps are performed, or non are performed.


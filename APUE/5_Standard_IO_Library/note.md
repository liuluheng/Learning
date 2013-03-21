5.5 Buffering
----------------
Three types of buffering are provided:
1. Fully buffered. 
2. Line buffered. Usually for standard input and standard output of a terminal
3. Unbuffered. Standard error, for example.

5.6 Reading and Writing a Stream
--------------------------------
    
    #include <stdio.h>
    int getc(FILE *fp);
    int fgetc(FILE *fp);
    int getchar(void);

The difference between *getc* and *fgetc* is that *getc* can be implemented as a macro, whereas *fgetc* cannot be implemented as a macro.

These three function return the next character as an *unsigned char* converted to an *int*. The reason for specifying unsigned is so that the high-oder bit, if set, does not cause the return value to be negative. The constant **EOF** in <stdio.h> is required to be a negative value, usually -1.

    int ungetc(int c, FILE *fp);

The characters that are pushed back are returned by subsequent reads on the stream in reverse order their pushing. Be aseare, however, that although ISO C allows an implementation to support any amount of pushback, an implementation is required to provide only a single character of pushback. We should not count on more than a single character.


5.7 Line-at-a-Time IO
---------------------
The *gets* function should never be used. The problem is that it does not allow the caller to specify the buffer size. This allows the buffer to overflow.


5.9 Bianry IO
--------------
A fundamental problem with binary I/O is that it can be used to read only data that has been written on the same system.
Two reasons:
1. offset of member within a structre can differ between compilers and systems.
2. big-endian and little-endian machine

The real solution for exchanging binary data among different systems is to use a higher-level protocol

5.13 Temporary Files
-------------------
gcc issue a warning for tmpnam

    warning: the use of 'tmpnam' is dangerous, better use 'mkstemp'

The tmpnam() function generates a different string each time it is called, up to TMP_MAX times. If it is called more than TMP_MAX times, the behavior is implementation defined.

Although tmpnam() generates names that are difficult to guess, it is nevertheless possible that between the time that tmpnam() returns a pathname, and the time that the program opens it, another program might create that pathname using open(2), or create it as a symbolic link. This can lead to security holes. To avoid such possibilities, use the open(2) O_EXCL flag to open the pathname. Or better yet, use mkstemp(3) or tmpfile(3).

The standard technique often used by the *tmpfile* function is to create a unique pathname by calling *tmpnam*, then create the file, and immediately *unlink* it. Recall from Section 4.15 that unlinking a file does not delete its contents until the file is closed. This way, when the file is closed, either explicitly or on program termination, the contents of the file are deleted.


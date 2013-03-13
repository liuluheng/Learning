1. When reading or writing a disk file, are the functions described in this chapter really unbuffered? Explain.
    No, they all buffered to kernel block buffers. To be specified, the unbuffered I/O refers to the lack of automatic buffering in the user process with these two functions. Each read or wirte invokes a single system call.

2. Write you own dup2 function that perfoms the same service as the dup2 function described in Section 3.12 without calling the fcntl function. Be sure to handle errors correctly.
    Since we cannot get the process table entry directly, here we can use dup to simulate dup2, see 3_2.c


3. Assume that a process executes the following three functions calls:

        fd1 = open(pathname, oflags);
        fd2 = dup(fd1);
        fd3 = open(pathname, oflags);

    Draw the resulting picture, similar to Figure 3.8. Which descriptors are affected by fcntl on fd1 with a command of F_SETFD? Which descriptors are affected by an fcntl on fd1 with a command of F_SETFL? 
    
    fd1 and fd2 point to same file table, while fd3 point to another file table. These two file tables point to the same v-node table

    F_SETFD on fd1 affects only the file descriptor flags for fd1, but F_SETFL on fd1 affects the file table entry that both fd1 and fd2 point to

4. The following sequence of code has been observed in various programs:

        dup2(fd, 0);
        dup2(fd, 1);
        dup2(fd, 2);
        if ( fd > 2)
            close(fd);

    To see why the if test is needed, assume that fd is 1 and draw a picture of what happens to the three descriptor entries and the corresponding file table entry with each call to dup2. Then assume that fd is 3 and draw the same picture.

    If fd is 1, then dup2(fd, 1) will do nothing and just return 1, so we have three file descriptors point to the same file table entry

    But if fd is 3, we have four, that is to say, we need close fd 4

5. The Bourne shell, Bourne-again shell, and Korn sheel notation
        digit1 >& digit2
    says to redirect descriptor digit1 to the same file as descriptor digit2. What is the difference between the two commands:
        ./a.out > outfile  2>&1
        ./a.out 2>1& > outfile
    (Hint: the shell process their command lines from left to right)
    
    First one, let A be the file table entry of outfile. As the command line imply, stand output is pointed to A, then stand error is pointed to A. That is to say, all fd points to A

    Second one, let B be the file table entry of outfile, T be the terminal file table entry, firstly, stand error is pointed to T, then stand out point to B

6. If you open a file for read-write with the append flag, can you still read from anywhere in the file using lseek? Can you use lseek to replace existing data in the file? Write a program to verify this.
    wirte will automatically set the file offset to the end of file before any write behavior. This makes it impossible to wirte anywhere other than the end of the file.

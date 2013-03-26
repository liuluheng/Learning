1. On an Intel x86 system under both FreeBSD and Linux, if we execute the program that prints "hello, world" and do not call *exit* or *return*, the termination satus of the program, wehich we can examine with the shell, is 13. Why?

    I can reproduce this issue by -std=c89 compile option.
    It looks lik the return value of *printf* became the return value of this program.
    "hello, world" contains 13 character with the null end


2. When is the output from the *printf* in Figure 7.3 actually output?

    For a shell, the standard output is line buffered, so output occurs when each newline encounter.
    If standard output is directed to file, then it is fully buffered, output occurs *exit* call *fclose* to clean the output

3. Is there any way for a function that is called by *main* to examine the command-line arguments without (a) passing *argc* and *argv* as arguments from *main* to the function or (b) having *main* copy *argc* and *argv* into global variables.

    Looks like we can only hack the stack to get the two variables. But this is not portable and I think on UNIX-like system there is no way to do this directly.

4. Some UNIX system implementation purposely arrange that, when a program is executed, location 0 in the data segment is not accessible. Why?

    This could terminate the program is it tries to dereference NULL pointer.

5. Use the *typedef* facility of C to define a new data type *Exitfunc* for an exit handler. Redo the prototype for *atexit* using this type.

        typdef void Exitfunc(void);
        int atexit(Exitfunc *func);

6. If we allocate an array of *longs*s using *calloc*, is the array initialized to 0? If we allocate an array of pointers using *calloc*, is the array initialized to null pointers?

    All bits are set to 0. 

7. In the output from the *size* command at the end of Section 7.6, why are not any sizes given for the heap and stack?

    The process is not started yet.

8. In Section 7.7, the two file size (475570 and 11410) do not equal the sums of their respective text and data sizes. Why?

    The binary file contain other symbols such as debug info. We can strip these information by *strip* command

9. In Section 7.7, why is there such a difference in the size of the executable file when using shared libraries for such a trivial program?

    The standard IO occupied large portion of the binary file.

10. At the end of Secion 7.10, we showed how a function cannot return a pointer to an automatic variable. Is the following code correct?

        int
        f1(int val)
        {   
            int *ptr;
            if (val == 0)
            {
                int val;
                val = 5;
                ptr = &val;
            }
            return (\*ptr + 1)
        }

   Wrong code. ptr dereference an automatic variable 


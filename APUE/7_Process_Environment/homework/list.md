1. On an Intel x86 system under both FreeBSD and Linux, if we execute the program that prints "hello, world" and do not call *exit* or *return*, the termination satus of the program, wehich we can examine with the shell, is 13. Why?

    I can reproduce this issue by -std=c89 compile option.
    It looks lik the return value of *printf* became the return value of this program.
    "hello, world" contains 13 character with the null end


2. When is the output from the *printf* in Figure 7.3 actually output?

    For a shell, the standard output is line buffered, so output occurs when each newline encounter.
    If standard output is directed to file, then it is fully buffered, output occurs *exit* call *fclose* to clean the output

3.

    

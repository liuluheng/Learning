Exercies
--------

1. Verify on your system that the directories dot and dot-dot are not the same, except in the root directory.

    Since dot means cwd, and dot-dot means parent dir, so only root has the same dot and dot-dot, that is itself
    
    We can use  belowing command to print the i-node number to check if they are the same
        ls -ldi 

2. In the output from the program in Figure 1.6, what happened to the processes with process IDs 852 and 853?

    We run the program twice, the first time pid is 851 but the second with 854, this means other program occupied that two numbers. And UNIX is multi-user OS.

3. In Section 1.7 the argument to perror is defined with the ISO C attribute const, whereas the integer argument to strerror is not defined with this atrribute. Why?

    C only has pass-by-value mechanism, the const in perror means the string msg could not be changed
        void perror(const char *msg);

    But for strerror, there is no need add const for int errnum, since C pass it by value
        char *strerror(int errnum);

4. In the err- logging function log_doit in Appendix B, why is the value of errno saved when the function is called?
    
        static void
        log_doit(int errnoflag, int priority, const char *fmt, va_list ap)
        {
    	    int		errno_save;
    	    char	buf[MAXLINE];
    
    	    errno_save = errno;		/* value caller might want printed */
    	    vsnprintf(buf, MAXLINE, fmt, ap);
    	    if (errnoflag)
    		    snprintf(buf+strlen(buf), MAXLINE-strlen(buf), ": %s",
    		    strerror(errno_save));
        }

    Because fflush(), fprintf(), or vsnprintf() might change the value of errno

5. If the calendar time is stored as signed 32-bit integer, in what year will it overflow? What ways can be used to extend the overflow point? Are they compatible with existing applications?

        2^31 / ( 24 * 60 * 60 * 365) + 1970 = 68 + 1970 = 2038
    
    We can update the time_t data type to 64bit integer, but this might cause some problems for old software.

6. If the process time is tored as a signed 32-bit integer, and if the system counts 100 ticks per second, after how many days will the value overflow?

        2^31 / ( 24 * 60 * 60 * 100) = 248


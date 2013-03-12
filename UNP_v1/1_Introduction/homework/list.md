3.  Modifty the first argument of socket in Figure 1.5 to be 9999. Compile and run the programm. What happens? Find the *errno* value corresponding to the error taht is printed. How can you find more information on this error?

        cailu@THINK$ ./a.out 127.0.0.1
        socket error: Address family not supported by protocol

    We could man errno on Linux and found:
        EAFNOSUPPORT    Address family not supported (POSIX.1)

4. See source code 1_4.c 
    Looks like counter always print 1

5. See source code 1_5_cli.c and 1_5_srv.c
    Since I run the client and server on same host, the counter is 1. But it might be another value on different host


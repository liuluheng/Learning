1. We mentioned in Section 2.8 that some of the primitive system data types are defined more than on header. For example, on FreeBSD 5.2.1, size_t is defined in 26 different headers. Because all 26 headers could be included in a program and because ISO C does not allow  multiple typedefs for the same name, how must the headers be written?

We can use below techneical to avoid duplication:
    #ifndef _SIZE_T_DECLARDED_
    typedef _size_t_ size_t
    #define _SIZE_T_DECLARDED_
    #endif

2. Examine your system headers and list the catual data types used to implement the primitive system data types.
    /usr/include/sys/types.h

3. Update the program in Figure 2.16 to avoid the needless processing that occurs when *sysconf* returns LONG_MAX as the limit for OPEN_MAX.
Use getrlimit(RLIMIT_NOFILE, &rl)


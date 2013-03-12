S3.2 Socket Address Structures
------------------------------
An IPv4 socket address structure, commonly called an "Internet socket address stuctrue", is named **sockaddr_in** and is defined by including the \<netinet/in.h\>

Generic Socket Address Structure: 

    struct sockaddr{
        uint8_t     sa_len;
        sa_family_t sa_family; /* address family: AF_xxx value */
        char        sa_data[14]; /* protocol-specific address */
        };

From the view of an application coder, the **only use** of this generic socket address structs is to cast pointers to protocol-specific structures. And we have a new generic socket address structure:
    
    struct sockaddr_storage{
       unit8_t      ss_len;
       sa_family    sa_family;
       ...
       };

S3.3 Value-Result Argument
--------------------------
Three functions, *bind*, *connect*, *sendto*, pass a socket address struct from the process to the kernel
    
    struct sockaddr_in serv;
    /* fill in serv{} */
    connect(sockfd, (struct sockaddr*)&serv, sizeof(serv));

Four functions, *accept*, *recvfrom*, *getsockname*, *getpeername*, pass a socket address struct from the kernel to the process
    
    struct sockaddr_un cli; /* UNIX domain */
    sockelen_t len;
    
    len = sizeof(cli);
    getpeername(unixfd, (struct sockaddr*)&cli, &len);
    /* len may have changed, should be less or equal to sizeof(cli) */

S3.4 Byte Ordering Functions
---------------------------
**Little-endian**: lower-order byte at the starting address

**Big-endian**: high-order byte at the sarting address

S3.5 Byte Manipulation Functions
--------------------------------
**memcpy** is similar to **bcopy**, but the order of thw two pointer arguments is swapped. bcopy correctly handles overlapping fields, while the behavior of memcpy is undefined if the source and destination overlap. The ANSI C memmove function must be used when the fields overlap.
    
    void bcopy(const void *src, void *dest, size_t ntytes);
    void *memcpy(void *dest, const void *src, size_t nbytes);

One way to remember the order of thw two pointers for memcpy is to remember that they are written in the same left-to-right order as an assignment statement in C:
    
    dest = src

S3.7 inet_pton and Inet_ntop
    
    foo.sin_addr.s_addr = inet_addr(cp);
    ==>
    inet_pton(AF_INET, cp, &foo.sin_addr);

    ptr = inet_ntoa(foo.sin_addr);
    ==>
    char str[INET_ADDRSTRLEN];
    ptr = inet_ntop(AF_INET, &foo.sin_addr, str, sizeof(str));


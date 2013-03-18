1. We said that a descriptor set can be assigned to another descriptor set across an equals sign in C. How is this done if a descriptor set is an arrya of integers? (Hints: Look at your system  <sys/select.h> or <sys/types.h> header)

        typedef struct
        {
            /* XPG4.2 requires this member name.  Otherwise avoid the name
               from the global namespace.  */
        #ifdef __USE_XOPEN
            __fd_mask fds_bits[__FD_SETSIZE / __NFDBITS];
        # define __FDS_BITS(set) ((set)->fds_bits)
        #else
            __fd_mask __fds_bits[__FD_SETSIZE / __NFDBITS];
        # define __FDS_BITS(set) ((set)->__fds_bits)
        #endif
        } fd_set;

    The array is contain in a struct, so C could use assign operator

2. When describing the conditions for which select returns "writable" in Section 6.3, why did we need the qualifier that the socket had to be nonblocking for a write operation to return a positive value.

3. What happens in Figure 6.9 if we prepend the word "else" before the word "if" on line 19?

4. In our example in Figure 6.21 add code to allow the server be able to use as many descriptors as currently allowed by the kernel. (Hints: Look at the setrlimit function)

5. Let us see what happens when the second argument to shutdown is SHUT_RD. Start with the TCP client in Figure 5.4 and make the following changes: Change the port number from SERV_PORT to 19, the chargen server; then, replace the call to str_cli with a call to the pause function. Run this program sepcifying the IP address of a local host that runs the chargen server. Watch the packets with a tool such as tcpdump. What happens?

6. Why would an application call shutdown with an argument of SHUT_RDWR instead of just calling close?

7. What happens in Figure 6.22 when the client sends an RST to terminate the connection?


8. Recode Figure 6.26 to call sysconf to determine the maximum number of descriptors and allocate the client array accordingly.


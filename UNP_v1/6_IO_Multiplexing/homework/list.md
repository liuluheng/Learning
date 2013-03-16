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



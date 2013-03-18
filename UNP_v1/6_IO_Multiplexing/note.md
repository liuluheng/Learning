S6.2 I/O Models
---------------
* blocking I/O
* nonblock I/O
* I/O multiplexing(select and poll)
* signal driven I/O (SIGIO)
* asynchronous I/O (the POSIX aio_ function)

The main difference of asynchronous model and the signal driven model is  that with signal-driven I/O, the kernel tells us when an I/O operation can be **initiated**, but with asynchronous I/O, the kernel tells us when an I/O operation is **complete**.

POSIX defines these two terms as following:
- A **synchronous** I/O operation causes the requesting process to be blocked until that I/O operation completes

- An **asynchronous** I/O operation doest not cause the requesting process to be blocked

S6.3 select function
--------------------
    #include <sys/select.h>
    #include <sys/time.h>
    int select(int maxfdp1, fd_set *readset, fd_set *writeset, fd_set *exceptset, const struct timeval *timeout);
        
        Returns: postive count of ready descriptos, 0 on timeout, -1 on error

The two common programming erros when using select are to forget to add one to the largest descriptor number and to forget that the descriptor sets are value-result arguments.

Mixing stdio and select is considered very error-prone and should only be done with great care.



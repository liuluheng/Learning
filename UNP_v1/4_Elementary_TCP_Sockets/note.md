S4.1 Introduction
-----------------
TCP Server: socket() -> bind() -> listen() -> accept() -> read() -> write() -> read() -> close()

TCP Client:                       socket() -> connect() ->write() -> read() -> close()

S4.3 Connect Function
---------------------
If connect fails, the socket is no longer usable and must be closed. That is to say, we must close the socket descriptor and call socket again.

S4.5 listen Function
--------------------
    #include <sys/socket.h>
    int listen(int sockfd, int backlog);

Do not specify a **backlog** of 0, as different implemenattions interpret this differently.

1. Build teh TCP server from Figures 5.2 and 5.3 and the TCP client from Figure 5.4 and 5.5. Start the server and then start the client. Type in a few lines to verify that the client and server work. Terminate the client by typing your EOF character and note the time. Use *netstat* on the client host to verify that the client end of the connection goest through the TIME_WAIT state. Execute netstat every five seconds or so to see when the TIME_WATI state ends . What is the  MSL for this implementation?

    The build is in src, and we run the server and client.

        $netstat -a
        tcp        0      0 THINK:45185             THINK:9877              TIME_WAIT 
    
    The duration of the TIME_WAIT state should be between 1 and 4 minutes, giving an MSL(maximum segment lifetime) between 30 seconds and 2 minutes.

2. What happens with our echo client/server if we run the client and redirect standard input to a binary file?
    If we use od the check the byte format of binary file such as tcpcli01:

        $od -c tcpcli01 
        0000000 177   E   L   F 002 001 001  \0  \0  \0  \0  \0  \0  \0  \0  \0
        0000020 002  \0   >  \0 001  \0  \0  \0 340 024   @  \0  \0  \0  \0  \0
        0000040   @  \0  \0  \0  \0  \0  \0  \0 300 370  \0  \0  \0  \0  \0  \0

    Notice that there are a lot of null byte. The call of Fgets in Fig5.5 reads up to MAXLINE - 1 characters, or until a new line is encountered, or up through the EOF.
    Assume the first 3 bytes of the binary file are binary 1, binary 0 and a newline. Then the fgets will read the first three characters and then terminate the string with a null byte. But, our call to strlen in Figure 5.5 return1, since it stops at the first null byte. One byte is sent to the server, but the server blocks in its call to readline, waiting for a newline character. The client blocks wating for the reply from the server. This is called ad **deadlock**: Both processes are blocked waiting for something that will never arrive from the other one. The problem here is that fgets signifies the end of the data that is returns with a null byte, so the data that is reads cannot contain any null bytes.

3. What is the difference between our echo client/server and using the Telnet client to communicate with our echo server?
    Use telnet IP-address port-number such as:

        $telnet 127.0.0.0 9877

    Then we can communicate with our echo server.
    This time we can redirect the stdin to binary file, but looks like telnet would parse some characters to build-in command.

4. In our example in Section 5.12, we verified that the first two segments of the connection termination are sent (the FIN from the server that is then ACKed by the client) by looking at the socket states using netstat. Are the final two segments exchanged (a FIN from the client that is ACKed by the server)? If so, when, and if not, why?

    No, the final two segments of the connection termination sequence are not sent. Since the server is killed, it reply client with RST. The RST aborts the connection and also prevent the server end of the connection from passing through the TIME_WAIT state.

5. What happens in the example outlined in Section 5.14 if between Steps 2 and 3 we restart our server application on the server host?
    Since all socket descriptors are lost in the server side, it would reply the client with RST.
    Then client would return the error ECONNRESET

6. To verify what we claimed happens with SIGPIPE in Section 5.13, modify Figure 5.4 as follows: Write a signal handler for SIGPIPE that just prints a message and returns. Establish this signla handler before calling *connect*. Change the server port number to 13, the daytime serve. When the connection is established, sleep for two seconds, write a few bytes to the socket, sleep for another two seconds and write a few more bytes to the socket. Run the program, what happens?



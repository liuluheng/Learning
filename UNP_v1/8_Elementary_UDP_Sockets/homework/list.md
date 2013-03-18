1. We have two applications, one using TCP and the other using UDP. 4,096 bytes are in the receive buffer for the TCP socket and two 2,048-byte datagram are in the receive buffer for the UDP socket. The TCP application calls rad with a third argument of 4,096 and the UDP application calls recvfrom with a third argument of 4,096. Is there any difference?

    TCP read would returns 4,096 bytes of data, but UDP recvrromo returns 2,048 bytes. A recvfrom on a datagram socket never returns more than on datagram, regardless of how much the application asks for.

2. What happens in Figure 8.4 if we replace the final argument to sendto(which we show as len) with clilen?

    Do not impact the function, but might seems weired.

3. Compile and run the UDP server in Figures 8.3 and 8.4 and then the UDP client in Figures 8.7 and 8.8. Verify that the client and server wokr together.

    See the source code. Use the following build command:
        
        $gcc 8_4.c ../../lib/*.c -o srv

4. Run the *ping* program in one window, specifying the -i 60 option(send one packet every 60 seconds; some systems use -I instead of -i), the -v options (print all received ICMP errors), and the loopback address(normally 127.0.0.1). We will use this program to see the ICMP port unreachable returned by the server host. Next, run our client from the previous execise in aanother window, specifying the IP address of some host that is not running the server. What happens?

    Looks like my OS is very lazy. It print nothing about the ICMP errors

5. We said with Figure 8.5 that each connected TCP socket has its own socket receive buffer. What about the listening socket; do you think it has its own socket receive buffer?

    I think this depends on the implemtation.

6. Uset the *sock* program (Section C.3) and a tool such as *tcpdump* (Section C.5) to test what we claimed in Section 8.10: If the clietn binds and IP address to its socket but sends a datagram that goest out some other interface, the resulting IP datagram stil contains the IP address that was bound to the socket, even though this doest no t correspond to the outgoing interface.


1. In Section 4.4, we stated that the INADDR_ constats defined by the <netinet/in.h> header are in host byte order. How can we tell this?

2. Modify Figure 1.5 to call getsockname after connect returns successfully. Print the local IP address and local port assigned to the TCP socket using sock_ntop. In what range(Figure 2.10) are your system ephemeral ports?

3. In a concurrent server, assume the child runs first after the call to fork. The child then completes the service of the client before the call to fork returns to the parent. What happens in the two calls to close in Figure 4.13?

4. In Figure 4.11, first change the server port from 13 to 9999(so that we do not need superuser privileges to start the program). Remove the call to listen. What happens?

5. Continue the previous exercise. Remove the call to bind, but allow the call to listen. What happens?


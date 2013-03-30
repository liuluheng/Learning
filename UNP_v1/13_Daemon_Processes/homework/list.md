1. What happens in Figure 13.5 if we move the call to *daemon_init* before the command-line arguments have been checked, so that the call to *err_quit* comes after it?

    The error message would be printed by syslog and user cannot catch it in the terminal stand out

2. For the five services handled internally by *inetd*, considering the TCP version and the UDP version of each service, which of the 10 servers do you think are implemented with a call to fork, and which od not require a fork?

    All UDP and time and daytime of TCP are handle directly by inetd, others are called by fork

3. What happens if we create a UDP socket, bind port 7 to the socket ( the standard echo server in Figure 2.18 ), and send a UDP datagram to a chargen server?

    denial-of-service attack.

4. The Solaris 2.x man pange for *inetd* describes a *-t* flag that cause *inetd* to call *syslog* to log the client IP address and port for any TCP service that ined handles. How does inetd obtainthis information? The man page also says that inetd cannot do this for a UDP service. Why?

    It must call accpet and mark the peer address, while UDP do not have this function

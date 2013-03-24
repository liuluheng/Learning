1. Modify the program in Figure 11.3 to call *gethostbyaddr* for each returned address, and then print the *h_name* that is returned. First run the program specifying a host name with just one IP address and then run the program specifying a host name that has more than on IP address. What happens?

    the struct *hostent* is shared by *gethostbyname* and *gethostbyaddress*, so the behavior of this program is undefined

2. Fix the problem shown in the preceding exercise.

    use the *gethostbyname_r* and *gethostbyaddr_r*

3. Run Figure 11.4 specifying a service name of *chargen*.

    *chargen* stands for character generator, the server would send client arbitrary characters unitl the client closes the connection.

4. Run Figure 11.4 specifying a dotted-decimal IP address as the hostname. Does your resolver allow this? Modify Figure 11.4 to allow a dotted-decimal IP address as the host-name and a decimal port number string as the service name. In testing the IP address for either a dotted-decimal string or a hostname, in what order should these two test be performed?

    The program could use dotted-decimal IP address as the hostname but could not use the numerical port number.
    But this is not a reliable feature. We can call inet_pton firstly to chech if it is a dotted-decimal IP address, since this function is in memory and very fast. Only when it fails, we call gethostbyname.

5. Modify Figure 11.4 to work with either IPv4 or IPv6

6. Modify Figure 8.9 to query the DNS and compare the return IP address with all the destination host IP addresses. That is, call *gethostbyaddr*ing the IP address returned by *recvfrom*, followed by *gethostbyname* to find all the IP address for the host.

7. In Figure 11.12, the caller must pass a pointer to an integer to obtain the size of the protocol address. If the caller does not do this(i.e., passes a null pointer as the inal argument), how can the caller still obtain the catual size of the protocol addresses?

8. Modify Figure 11.14 to call *getnameinfo* instead of *sock_ntop* What flags should you pass to *getnameinfo*?

9. In Section 7.5, we discussed port stealing with the SO_REUSEADDR socketoption. To see how this works, build the protocol-independent UDP daytime server in Figure 11.19. Start on instance of the server in on window, binding the wildcard address and some port of your choosing. Start a client in another window and verify that this server is handling the client(note the *printf* in the server). Next, start another instance of the server in another window, this time binding one of the host unicast addresses and the sam eport as the first server. What problem do you immediately encounter? Fix this porblem and restart hsi second server. Start a client, send a datagram, and verify that the second server has stolen the port from the first server. If possible, start the second server again from a different login account on the first server to see if the stealing still succeeds. Some vendors will not allow the second bind unless the user ID is them same as that of the process that has already bound the port.

10. At the end of Section 2.12, we showed two *telnet* examples, to the daytime server and to the echo server. Knowing that a client goest through the two steps *gethostbynmae* and *connect*, which lines output by the client indicate which steps?

11. *getnameinfo* can take a long time (up to 80 seconds) to return an error if a hostname cannot be found for an IP address. Write a new function named getnameinfo_timeo that takes an additional integer argument specifying the maxmum number of seconds to wait for a reply. If the timer expires and the NI_NAMEREQD flag is not specified, just call inet_ntop and return an address string.



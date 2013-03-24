1. Modify the program in Figure 11.3 to call *gethostbyaddr* for each returned address, and then print the *h_name* that is returned. First run the program specifying a host name with just one IP address and then run the program specifying a host name that has more than on IP address. What happens?

    the struct *hostent* is shared by *gethostbyname* and *gethostbyaddress*, so the behavior of this program is undefined

2. Fix the problem shown in the preceding exercise.

    use the *gethostbyname_r* and *gethostbyaddr_r*

3. Run Figure 11.4 specifying a service name of *chargen*.

    *chargen* stands for character generator, the server would send client arbitrary characters unitl the client closes the connection.

4. Run Figure 11.4 specifying a dotted-decimal IP address as the hostname. Does your resolver allow this? Modify Figure 11.4 to allow a dotted-decimal IP address as the host-name and a decimal port number string as the service name. In testing the IP address for either a dotted-decimal string or a hostname, in what order should these two test be performed?

    The program could use dotted-decimal IP address as the hostname but could not use the numerical port number.
    But this is not a reliable feature. We can call inet_pton firstly to chech if it is a dotted-decimal IP address, since this function is in memory and very fast. Only when it fails, we call gethostbyname.


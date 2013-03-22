11.2 Domain Name System (DNS)
-------------------------------
The DNS is used primaarily to map between hostnames and IP address

FQDN: full qualified domain name

11.3 gethostbyname function
----------------------------

    #include <netdb.h>
    struct hostenv *gethostbyname(const char* hostname);

This function is limited to IPv4 addresses, and POSIX specification cautions that *gethostbyname* may be withdrawn in a future version of the spec.

*gethostbyname* differs from the other socket functions that we have described in that itt does not set *errno* when an error occurs. Instead, it sets the global integer *h_errno* which is included by <netdb.h>

Most modern resolvers provide the function *hstrerror*, which takes an *h_errno* value as its only argument and returns a const char* pointer to a description of the error.



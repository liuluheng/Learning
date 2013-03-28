12.2 IPv4 Client, IPv6 server
-----------------------------
Most dual-stack hosts should use the following rules in dealing with listening socket:

1. A listening IPv4 socket can accept incoming connections from only IPv4 clients

2. If aserver has a listening IPv6 socket that has bound the wildcard address and the IPV6_V6ONLY socket option(Section 7.8) is not set, that socket can accept incoming connections from either IPv4 clients or IPv6 clients. For a connection from IPv4 client, the local address of the server for the connection will be the coresponding IPv4-mappped IPv6 address.

3. If a server has a listening IPv6 socket that has bound an PIv6 address other than an IPv4-mapped IPv6 address, or has bound the wildcard address but has set the IPV6_V6ONLY socket ooption, that socket can accept incoming connections from IPv6 clients only.

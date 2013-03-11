1. We have mentioned IP version 4 and 6. What happend to version 5 and what were versions 0, 1, 2, 3?

The gap in version sequence between IPv4 and IPv6 resulted from the assignment of number 5 to the experimental Internet Stream Protocol in 1979, which however was never referred to as IPv5.

IPv1, 2, & 3 would actually be part of the TCP/IP protocols, of which there were 3 versions. IPv4 is were they split the 2 in to separate protocols and created an updated IP protocol.

2. Where would you look to find more information about the protocol that is assigned IPv5?

http://en.wikipedia.org/wiki/Internet_Stream_Protocol

3. With Figure 2.15, we said that TCP assumes an MSS of 536 if it does nott receive an MSS option from the perr. Why is this value used?

The IPv4 minimum reassembly buffer size is 576 bytes, substract 20 bytes of the header of IPv4 and 20 bytes of heaader of TCP, so we get 536 bytes



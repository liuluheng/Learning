#include "../../lib/unp.h"

int main(int argc, const char *argv[])
{
    int sockfd;
    socklen_t len;
    struct sockaddr_in cliaddr, servaddr;

    if (argc != 2)
        err_quit("usage: %s <IPaddress>", argv[1]);

    sockfd = Socket(AF_INET, SOCK_DGRAM, 0);
    
    bzero(&servaddr, sizeof(servaddr));
    servaddr.sin_family = AF_INET;
    servaddr.sin_port = htons(SERV_PORT);
    Inet_pton(AF_INET, argv[1], &servaddr.sin_addr);

    Connect(sockfd, (SA*)&servaddr, sizeof(servaddr));

    len = sizeof(cliaddr);
    Getsockname(sockfd, (SA*)&cliaddr, &len);
    printf("local address %s\n", Sock_ntop((SA*)&cliaddr, len));
    return 0;
}

#include <sys/types.h>
#include <sys/socket.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <arpa/inet.h>

#define MAXLINE 4096
#define SA struct sockaddr

int main(int argc, const char *argv[])
{
    int sockfd, n;
    char recvline[MAXLINE + 1]; 
    struct sockaddr_in servaddr;

    if ( argc != 2 )
    {
        printf("usage: %s <IP address\n>", argv[0]);
        exit(-1);
    }

    if ( (sockfd = socket(AF_INET, SOCK_STREAM, 0)) < 0 )
    {
        printf("socket error\n>");
        exit(-1);
    }

    bzero(&servaddr, sizeof(servaddr));
    servaddr.sin_family = AF_INET;
    servaddr.sin_port = htons(13);
    if ( inet_pton(AF_INET, argv[1], &servaddr.sin_addr) <= 0)
    {
        printf("inet_pton error for %s\n>", argv[1]);
        exit(-1);
    }

    if ( connect(sockfd, (SA*)&servaddr, sizeof(servaddr)) < 0)
    {
        printf("connect error\n>");
        exit(-1);
    }

    while ( (n = read(sockfd, recvline, MAXLINE)) > 0)
    {
        recvline[n] = 0; 
        if ( fputs(recvline, stdout) == EOF )
        {
            printf("fputs error");
            exit(0);
        }
    }

    if ( n < 0 )
    {
        printf("read error");
        exit(0);
    }
    return 0;
}

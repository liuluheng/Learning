
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include "../../include/apue.h"

char buf1[] = "abcdefghij";
char buf2[] = "ABCDEFGHIJ";


int main(int argc, const char *argv[])
{
    int fd;
    if ( (fd = creat("append_test", FILE_MODE)) < 0) 
        err_sys("create error");
    if ( write(fd, buf1, 10) != 10)
        err_sys("buf1 write error");

    close(fd);

    if ( (fd = open("append_test", O_RDWR | O_APPEND)) < 0) 
        err_sys("open error");

    /* set to beginning */
    if ( lseek(fd, 0, SEEK_SET) == -1)
        err_sys("lseek error");

    if ( write(fd, buf2, 10) != 10)
        err_sys("buf2 write error");

    return 0;
}

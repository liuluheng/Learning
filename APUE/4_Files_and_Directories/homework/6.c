#include "../../include/apue.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main(int argc, const char *argv[])
{
    int fd1, fd2, n;
    char c;
    if (argc != 3) 
        err_quit("usage: %s from to\n", argv[0]);
    
    if ( (fd1 = open(argv[1], O_RDONLY)) < 0) 
        err_quit("error : open %s", argv[1]);
    if ( (fd2 = open(argv[2], O_WRONLY | O_CREAT)) < 0) 
        err_quit("error : open %s", argv[2]);

    while ( n = read(fd1, &c, 1) == 1 )
    {
        if ( c != 0 )
            write(fd2, (void*)&c, 1); 
        else
            lseek(fd2, 1, SEEK_CUR);
    }
    return 0;
}

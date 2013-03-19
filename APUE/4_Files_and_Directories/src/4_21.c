#include "../../include/apue.h"
#include <stdio.h>
#include <fcntl.h>
#include <utime.h>

int main(int argc, const char *argv[])
{
    int i,fd;
    struct stat statbuf;
    struct utimbuf timebuf;

    for (i=1;i<argc;i++)
    {
        if(stat(argv[i], &statbuf)<0)
        {
            err_ret("%s, stat errror", argv[i]);
            continue;
        }
        if ((fd=open(argv[i], O_RDWR | O_TRUNC))<0)
        {
            err_ret("%s: open error", argv[i]);
            continue;
        }
        close(fd);
        timebuf.actime = statbuf.st_atime;
        timebuf.modtime = statbuf.st_mtime;
        if (utime(argv[i], &timebuf) < 0 )
        {
            err_ret("%s, utime error");
            continue;
        }
    }
    return 0;
}


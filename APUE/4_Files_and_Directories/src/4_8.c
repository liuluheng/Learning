#include "../../include/apue.h"
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main(int argc, const char *argv[])
{
    if ( argc != 2 )
        err_quit("usage: %d <pathname>", argv[0]);
    if ( access(argv[1], R_OK))
        err_ret("access error for %s", argv[1]);
    else
        printf("read access OK\n");
    if (open(argv[1], O_RDONLY) < 0)
        err_ret("open error for %s", argv[1]);
    else
        printf("open for reading OK\n");
    return 0;
}

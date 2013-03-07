#include <stdio.h>
#include <errno.h>
#include <string.h>

extern int errno;

int main(int argc, const char *argv[])
{
    fprintf(stderr, "EACCES: %s\n", strerror(EACCES));
    errno = ENOENT;
    perror(argv[0]);
    return 0;
}

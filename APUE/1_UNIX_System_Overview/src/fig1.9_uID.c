#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main(int argc, const char *argv[])
{
    printf("uid = %d, gid = %d\n", getuid(), getgid());
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <dirent.h>  // dir entry

int main(int argc, const char *argv[])
{
    DIR *dp;
    struct dirent *dirp;

    // TODO refactor message handle system
    if ( argc != 2 )
    {
        printf("usage: ls directory_name\n");
        exit(-1);
    }

    if ( (dp = opendir(argv[1])) == NULL )
    {
        printf("can't open %s\n", argv[1]);
        exit(-1);
    }

    while ( (dirp = readdir(dp)) != NULL )
        printf("%s\n", dirp->d_name);
    closedir(dp);
    return 0;
}

#include <stdio.h>

extern char **environ;

int main(int argc, const char *argv[])
{
    char** pc = environ;
    for ( ;*pc != NULL; ++pc)
        printf("%s\n", *pc);
    printf("\n");
    return 0;
}

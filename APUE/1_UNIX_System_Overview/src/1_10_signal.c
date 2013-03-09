
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include "../../include/apue.h"

static void sig_int(int);

int main(int argc, const char *argv[])
{
    char buf[MAXLINE];
    pid_t pid;
    int status;

    if ( signal(SIGINT, sig_int) == SIG_ERR)
        err_quit("signal error");

    printf("%% "); // printf requires %% to print %
    while ( fgets(buf, MAXLINE, stdin) != NULL)
    {
        if (buf[strlen(buf) - 1] == '\n')
            buf[strlen(buf) - 1] = '\0';

        if ( (pid = fork()) < 0)
            err_quit("fork error");
        else if ( pid == 0) // child
        {
            execlp(buf, buf, (char*)0);
            printf("couldn't execute: %s\n", buf);
            exit(127);
        }

        // parent
        if ( (pid = waitpid(pid, &status, 0)) < 0 )
            err_quit("waitpid error");
        printf("%%");
    }

    return 0;
}

void sig_int(int signo)
{
    printf("interrupt\n%%");
}

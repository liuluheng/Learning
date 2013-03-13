
// haven't test yet
void clean_fd(int from, int to)
{
    int fd;
    for ( fd = from; fd < to; fd++ )
        close(fd);
}

int my_dup2(int oldfd, int newfd)
{
    int lower, upper;
    int fd, last_success_fd;
    if ( (lower = dup(oldfd)) == -1 )
        return -1;
    else if ( lower > newfd )
    {
        /* new fd is using */
        close(newfd);
        if ( (newfd = dup(oldfd)) == -1 )
            return -1;
        close(lower);
        return newfd;
    }
    else
    {
        /* dup until newfd */
        fd = lower + 1;
        last_success_fd = lower + 1;
        while ( fd < newfd )
        {
            if ( (fd = dup(oldfd)) == -1)
            {
                clean_fd(lower, last_success_fd + 1);
                return -1;
            }
            last_success_fd = fd;
        }
        clean_fd(lower, fd);
        return fd;
    }
}

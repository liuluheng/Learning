13.4 daemon_init Function
-------------------------
Some Unix system provide a C library function called *daemon*, such as Linux:
    
    #include <unistd.h>
    int daemon(int nochdir, int noclose);


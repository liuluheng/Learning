S5.8 POSIX Signal Handling
--------------------------
1. We can provide a funtion that is called whenever a specific signal occurs. This function is called a **signal handler** and this action is called catching a signal. The two signals **SIGKILL** and **SIGSTOP** cannot be caught. 

2. We can ignore a signal by setting its dispostion to SIG_IGN, The two signals SIGKILL and SIGSTOP cannot be ignored.


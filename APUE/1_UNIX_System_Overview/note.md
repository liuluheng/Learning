S1.3 - Loggin in
---------------
**/etc/passwd**

seven colon-separated field:

the login name : encrypted password : numeric user ID : numeric group ID : a comment field : home dir : shell program 
 
    e.g. tomcat:x:91:91:Tomcat:/usr/share/tomcat5:/bin/sh
    
We can use awk to print selected columns:

    awk  -F: '{print $1,$3,$6}' OFS="\t" /etc/passwd

S1.4 - Files and Directories
-----------------------------
The only two characters that cannot appear in filename are the slash character (/) and null character.
    
A pathname that begins with a slash is called an absolute pathname; otherwise, it is called a relative pathname.

Use "echo $?" check the exit status of last program

S1.7 - Error Handling
---------------------
On Linux, the error constants are listed in the errno(3) manual page .

Since the value of errno is never cleared by a routine if an error does not occur.

Therefore, we should examin its value onlu when the return value from a funtion indicates that an error occurred

S1.10 - Time Values
-------------------
Two different time values:

1. **Calendar time**: Number of seconds from Jan.1, 1970

2. **Process time**: measured in clock ticks, as following three:

        Clock time - elapsed time

        User CPU time - CPU time contribute to user instruction

        System CPU time - CPU time attributed to the kernel when it executes on behalf of the process


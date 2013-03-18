4.8 umask Function
-------------------
    #include <sys/stat.h>
    mode_t umask(mode_t cmask);

The umask function sets the file mode creation mask for the process and returns the previous value. ( This is one of the few functions that does **not** have an error return )

Changing the file mode creation mask of a process does not affect the mask of its parent.

4.9 chmod and fchmod Function
-----------------------------
chmod function updates only the time that the i-node was last changed. By default. ls -l lists the time when the contents of the file were last modified.

That is to say, if we use chmod change the stat of some file, the ls -l command will show the same time as before.

chmod automatically clear two of the permission bits under following conditions:

1. On system, such as Solaris, that place special meaning on the sticky bit when used with regular files. This means that only the superuser can set the sticky bit of a regular file. OnFreeBSD 5.2.1, Mac OS X10.3 and Solaris 9, only the superuser can set the sticky bit on a regular file. Linux 2.4.22 places no such restriction on the etting of the sticky bit, because the bit has no meaning when applied to regular files on Linux.

2. Prevent a user from creating a set-group-ID file owned by a group that the user does not belong to. If a process taht does not have superuser privileges writes to a file, the set-group-ID or a set-user-ID bits are automatically turned off.

4.10 Sticky Bit
---------------
An old technical of loading binary into swap permannetely. Also called **save-text bit**, S_ISVTX

On contemporary systems, if the bit is set for a directory, a file in the directory can be removed or renamed only if the user was write permiison for the directory and one of the following:

+ Owns the file
+ Owns the directory
+ Is the superuser

The directories /tmp and /var/spool/uucppublic are typical candidates for the sticky bit.

4.14 File Systems
--------------------
The operation of "unlinking a file" does not always mean "deleting the blocks associated with the file". This is why the function that removes a directory entry is called **unlink**, not delete.

Because the i-node number in the directory entry points to an i-node in the same file system, we cannot have a directory entry point to an i-node in a different file system. This is whye the **ln** command cannot cross file systems.



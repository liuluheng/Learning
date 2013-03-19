1. Modifty the program in Figure 4.3 to use stat instead of lstat. What changes if one of the command-line arguments is a symbolic link?
    If *stat* is called, the targeted of the symbolic link is followed instead of the symbolic itself.

2. What happens if the file mode creation mask is set to 777(octal)? Verify the result using your shell *umask* command.
    All the bits are masked.
        $ umask 777
        $ touch new; ls -l new
        ---------- 1 cailu cailu    0 Mar 18 20:22 new

3. Verify that turning off user-read permission for a file that you own denies your access to the file.
        $ touch new
        $ ls -l new
        -rw-r--r-- 1 cailu cadence1 0 Mar 18 20:25 new
        $ chmod u-r new 
        $ ls -l new
        --w-r--r-- 1 cailu cadence1 0 Mar 18 20:25 new
        $ cat new 
        cat: new: Permission denied

4. Run the program in Figure 4.9 after creating the files foo and bar. What happens?

5. In Section 4.12, we said that a file size of 0 is valid for a regular file. We also said that the st_size field is defined for directories and symbolic links. Should we ever see a file size of 0 for a directory or symbolic link?


6. Write a utility like *cp* that copies a file containing holes, without writing the bytes of 0 to the output file.

7. Note in output from the *ls* command in Section 4.12 that the files *core* and *core.copy* have different access permissions. If the *umask* value did not change between the creation of the two files, explain how the differentce could have occurred?

8. When running the program in Figure 4.16, we chech the available disk space with the *df* command. Why did not we use the *du* command?

9. Figure 4.20, we show the *unlink* function as modifying the changed-status time of the file itself. How can this happend?

10. In Section 4.21, how does the system limit on the number of open files affect the myftw functions?

11. In Section 4.21, our version of *ftw* never changes its directory. Modify this routine so that each time it encounters a directory, it does a chdir to that directory, allowing it use the filename and not the pathname for each call to *lstat*. When all the entries in a directory have been processed, execute chdir(".."). Compare the time used by this version and the version in the text.

12. Each process also has a root directory that is used for resolution of absolute pathnames. This root directory can be changed with the *chroot* function. Look up the description for this funtion in your manuals. When might this function be useful.

13 How can you set only one of the two time values with *utime* funtion?

14. Some versions of the *finger* command output "New mail received ..." adn "unread since ... " where ... are the corresponding times and dates. How can the program determine these two times and dates?

15. Examine the archive formats by the *cpio* and *tar* commands. How many of the three possible time values are saved for each file? When a file is restored, what value do you think the access time is set to, why?

16. Does the UNIX System have a fundamental limitation on the depth of a directory tree? To find out, write a program that creates a directory and then changes to that directory, in a loop. Make certain that the length of the absolute pathname of the leaf of this directory is greater than your system PATH_MAX limit. Cna you call getcwd to fetch the directory pathname? How do the standard UNIX System tools deal with this long pathname? Can you archive the directory using either tar or cpio?

17. In Section 3.16, we described the /dev/fd feature. For any user to be able to acess these files, their permission must be rw-rw-rw-. Some programs that create an output file delete the file first, in case it already exists. ignoring the return code:
        unlink(path);
        if ((fd = creat(path, FILE_MODE)) < 0)
            err_sys("...");
    What happens if path is /dev/fd/1

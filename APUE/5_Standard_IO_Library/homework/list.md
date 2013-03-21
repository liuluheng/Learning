1. Implement *setbuf* using *setvbuf*.

        setbuf(FILE *restrict fp, char *restrict buf)
        {
            if (buf)
                setvbuf(fp, buf, _IOFBF, BUFSIZ);
            else
                setvbuf(fp, buf, _IONBF, 0);
        }

2. Type in the program that copies a file using line-at-a-time I/O (*fgets* and *fputs*) from Section 5.8, but use a MAXLINE of 4. What happens if you copy lines that exceed this length? Explain what is happening?

    Nothing change. The *fgets* function reads up through and includeing the next newline or until the buffer is full.
    *fputs* write everything in the buffer until it hits a null byte.


3. What does a return value of 0 from *printf* mean?

    Upon successful return, these functions return the number of characters printed (not including the trailing '\0' used to end output  to  strings).
    
    So printf("") would return 0

4. The following code works correctly on some machines, but not on others. What could be the problem? 

        #include <stdio.h>
        int main(void)
        {
            char c;
            while ( (c = getchar() != EOF )
                putchar(c);
        }

    Since *getchar* return int instead of char, if the machine define char as signed char, then EOF would be catched
    
    Otherwise, the while loop would never break

5.5 Why does *tempnam* restrict the *prefix* to five characters?

    to limit the file name length

5.6 How would you use the *fsync* function with a standard I/O stream?

    firstly call fflush and then use *fileno* get the file descripter to call fsync

    from the description of man page, it is unecessary to call fflush, but we should call it for defence

5.7 In the programs in Figures 1.7 and 1.10, the promp that is printed does not contain a newline, and we do not call *fflush*, what causes the prompt to be output?

    *fgets* will automatically flush the standard output


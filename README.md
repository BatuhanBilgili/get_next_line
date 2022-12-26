# get_next_line

![get_next_linee](https://user-images.githubusercontent.com/91786686/209575703-7acaafd9-a636-46ad-9180-cae73e90640a.png)

## 42 Curses Get_next_line 

This project is about programming a function that returns a line
read from a file descriptor.While doing this project, we will learn static variables, reading and printing from multiple files line by line.

### Allow Function

```c
read(), malloc(), free()
```

### Mandatory part

> <i> Rules:
> - **Function name**: get_next_line
> - **Prototype**: char *get_next_line(int fd);
> - **Turn in files**: get_next_line.c, get_next_line_utils.c, get_next_line.h
> - **Parameters**: fd: The file descriptor to read from
> - **Return value**: Read line: correct behavior NULL: there is nothing else to read, or an error occurred
> - **Description**: Write a function that returns a line read from a
file descriptor
> - Repeated calls (e.g., using a loop) to your get_next_line() function should let you read the text file pointed to by the file descriptor, one line at a time
> - Your function should return the line that was read. If there is nothing else to read or if an error occurred, it should return NULL.
> - Make sure that your function works as expected both when reading a file and when reading from the standard input.
> - **Please note** that the returned line should include the terminating \n character, except if the end of file was reached and does not end with a \n character
> - Your header file **get_next_line.h** must at least contain the prototype of the **get_next_line()** function.
> - Add all the helper functions you need in the **get_next_line_utils.c** file.
> - A good start would be to know what a [static variable](https://www.geeksforgeeks.org/static-variables-in-c/) is.

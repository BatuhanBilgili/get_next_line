# get_next_line

![get_next_linee](https://user-images.githubusercontent.com/91786686/209575703-7acaafd9-a636-46ad-9180-cae73e90640a.png)

## 42 Curses Get_next_line 

This project is about programming a function that returns a line
read from a file descriptor.

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
> -

# libft

---

### <ctype.h>

| func name                                                                       | description                                        |
| ------------------------------------------------------------------------------- | -------------------------------------------------- |
| [ft_isalnum](https://github.com/dimadem/libft/blob/main/src/ctype/ft_isalnum.c) | checks for an alphanumeric character               |
| [ft_isalpha](https://github.com/dimadem/libft/blob/main/src/ctype/ft_isalpha.c) | checks for an alphabetic character                 |
| [ft_isascii](https://github.com/dimadem/libft/blob/main/src/ctype/ft_isascii.c) | checks whether c fits into the ASCII character set |
| [ft_isdigit](https://github.com/dimadem/libft/blob/main/src/ctype/ft_isdigit.c) | checks for a digit (0 through 9)                   |
| [ft_isprint](https://github.com/dimadem/libft/blob/main/src/ctype/ft_isprint.c) | checks for any printable character                 |
| [ft_tolower](https://github.com/dimadem/libft/blob/main/src/ctype/ft_tolower.c) | convert char to lowercase                          |
| [ft_toupper](https://github.com/dimadem/libft/blob/main/src/ctype/ft_toupper.c) | convert char to uppercase                          |

### <string.h>

| func name      | description                                             |
| -------------- | ------------------------------------------------------- |
| [ft_bzero]()   | zero a byte string                                      |
| [ft_memchr]()  | scan memory for a character                             |
| [ft_memcmp]()  | compare memory areas                                    |
| [ft_memcpy]()  | copy memory area                                        |
| [ft_memmove]() | copy memory area                                        |
| [ft_memset]()  | fill memory with a constant byte                        |
| [ft_strchr]()  | locate character in string                              |
| [ft_strdup]()  | creates a dupplicate for the string passed as parameter |
| [ft_strlcat]() | concatenate string to an specific size                  |
| [ft_strlcpy]() | copy string to an specific size                         |
| [ft_strlen]()  | calculate the length of a string                        |
| [ft_strnstr]() | locate a substring in a string                          |
| [ft_strrchr]() | locate character in string                              |
| [ft_strncmp]() | compare two strings                                     |

### <stdlib.h>

| func name     | description                                      |
| ------------- | ------------------------------------------------ |
| [ft_atoi]()   | convert a string to an integer                   |
| [ft_calloc]() | allocates memory and sets its bytes' values to 0 |

### <stdio.h>

| func name     | description               |
| ------------- | ------------------------- |
| [ft_printf]() | output a formatted string |

### non-standard

| func name         | description                                                      |
| ----------------- | ---------------------------------------------------------------- |
| [ft_substr]()     | returns a substring from a string                                |
| [ft_strjoin]()    | concatenates two strings                                         |
| [ft_strtrim]()    | trims the beginning and end of string with specific set of chars |
| [ft_split]()      | splits a string using a char as parameter                        |
| [ft_itoa]()       | converts a number into a string                                  |
| [ft_strmapi]()    | applies a function to each character of a string                 |
| [ft_striteri]()   | applies a function to each character of a string                 |
| [ft_putchar_fd]() | output a char to a file descriptor                               |
| [ft_putstr_fd]()  | output a string to a file descriptor                             |
| [ft_putendl_fd]() | output a string to a file descriptor, followed by a new line     |
| [ft_putnbr_fd]()  | output a number to a file descriptor                             |

### linked list

| func name           | description                                  |
| ------------------- | -------------------------------------------- |
| [ft_lstnew]()       | creates a new list element                   |
| [ft_lstadd_front]() | adds an element at the beginning of a list   |
| [ft_lstsize]()      | counts the number of elements in a list      |
| [ft_lstlast]()      | returns the last element of the list         |
| [ft_lstadd_back]()  | adds an element at the end of a list         |
| [ft_lstclear]()     | deletes and free list                        |
| [ft_lstiter]()      | applies a function to each element of a list |
| [ft_lstmap]()       | applies a function to each element of a list |

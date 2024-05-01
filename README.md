# libft
---

### <ctype.h>

| func name   | description |
| ----------- | ----------- |
| [ft_isalnum](https://github.com/dimadem/libft/blob/main/src/ctype/ft_isalnum.c) | checks for an alphanumeric character |
| [ft_isalpha](https://github.com/dimadem/libft/blob/main/src/ctype/ft_isalpha.c) | checks for an alphabetic character |
| [ft_isascii](https://github.com/dimadem/libft/blob/main/src/ctype/ft_isascii.c) | checks whether c fits into the ASCII character set |
| [ft_isdigit](https://github.com/dimadem/libft/blob/main/src/ctype/ft_isdigit.c) | checks for a digit (0 through 9) |
| [ft_isprint](https://github.com/dimadem/libft/blob/main/src/ctype/ft_isprint.c) | checks for any printable character |
| [ft_tolower](https://github.com/dimadem/libft/blob/main/src/ctype/ft_tolower.c) | convert char to lowercase |
| [ft_toupper](https://github.com/dimadem/libft/blob/main/src/ctype/ft_toupper.c) | convert char to uppercase |

### <string.h>

| func name   | description |
| ----------- | ----------- |
| [ft_bzero](https://github.com/dimadem/libft/blob/main/src/string/ft_bzero.c) | zero a byte string |
| [ft_memchr](https://github.com/dimadem/libft/blob/main/src/string/ft_memchr.c) | scan memory for a character |
| [ft_memcmp](https://github.com/dimadem/libft/blob/main/src/string/ft_memcmp.c) | compare memory areas |
| [ft_memcpy](https://github.com/dimadem/libft/blob/main/src/string/ft_memcpy.c) | copy memory area |
| [ft_memmove](https://github.com/dimadem/libft/blob/main/src/string/ft_memmove.c) | copy memory area |
| [ft_memset](https://github.com/dimadem/libft/blob/main/src/string/ft_memset.c) | fill memory with a constant byte |
| [ft_strchr](https://github.com/dimadem/libft/blob/main/src/string/ft_strchr.c) | locate character in string |
| [ft_strdup](https://github.com/dimadem/libft/blob/main/src/string/ft_strdup.c) | creates a dupplicate for the string passed as parameter |
| [ft_strlcat](https://github.com/dimadem/libft/blob/main/src/string/ft_strlcat.c) | concatenate string to an specific size |
| [ft_strlcpy](https://github.com/dimadem/libft/blob/main/src/string/ft_strlcpy.c) | copy string to an specific size |
| [ft_strlen](https://github.com/dimadem/libft/blob/main/src/string/ft_strlen.c) | calculate the length of a string |
| [ft_strncmp](https://github.com/dimadem/libft/blob/main/src/string/ft_strncmp.c) | compare two strings |
| [ft_strnstr](https://github.com/dimadem/libft/blob/main/src/string/ft_strnstr.c) | locate a substring in a string |
| [ft_strrchr](https://github.com/dimadem/libft/blob/main/src/string/ft_strrchr.c) | locate character in string |

### <stdlib.h>

| func name   | description |
| ----------- | ----------- |
| [ft_atoi](https://github.com/dimadem/libft/blob/main/src/stdlib/ft_atoi.c) | convert a string to an integer |
| [ft_calloc](https://github.com/dimadem/libft/blob/main/src/stdlib/ft_calloc.c) | allocates memory and sets its bytes' values to 0 |

### <stdio.h>

| func name   | description |
| ----------- | ----------- |
| [ft_printf](https://github.com/dimadem/libft/blob/main/src/stdio/ft_printf/ft_printf.c) | output a formatted string |

### non-standard

| func name   | description |
| ----------- | ----------- |
| [ft_get_next_line](https://github.com/dimadem/libft/blob/main/src/nonstandart/ft_get_next_line.c) | returns next line as string |
| [ft_itoa](https://github.com/dimadem/libft/blob/main/src/nonstandart/ft_itoa.c) | converts a number into a string |
| [ft_putchar_fd](https://github.com/dimadem/libft/blob/main/src/nonstandart/ft_putchar_fd.c) | output a char to a file descriptor |
| [ft_putendl_fd](https://github.com/dimadem/libft/blob/main/src/nonstandart/ft_putendl_fd.c) | output a string to a file descriptor, followed by a new line |
| [ft_putnbr_fd](https://github.com/dimadem/libft/blob/main/src/nonstandart/ft_putnbr_fd.c) | output a number to a file descriptor |
| [ft_putstr_fd](https://github.com/dimadem/libft/blob/main/src/nonstandart/ft_putstr_fd.c) | output a string to a file descriptor |
| [ft_split](https://github.com/dimadem/libft/blob/main/src/nonstandart/ft_split.c) | splits a string using a char as parameter |
| [ft_striteri](https://github.com/dimadem/libft/blob/main/src/nonstandart/ft_striteri.c) | applies a function to each character of a string |
| [ft_strjoin](https://github.com/dimadem/libft/blob/main/src/nonstandart/ft_strjoin.c) | concatenates two strings |
| [ft_strmapi](https://github.com/dimadem/libft/blob/main/src/nonstandart/ft_strmapi.c) | applies a function to each character of a string |
| [ft_strtrim](https://github.com/dimadem/libft/blob/main/src/nonstandart/ft_strtrim.c) | trims the beginning and end of string with specific set of chars |
| [ft_substr](https://github.com/dimadem/libft/blob/main/src/nonstandart/ft_substr.c) | returns a substring from a string |

### linked list

| func name   | description |
| ----------- | ----------- |
| [ft_lstadd_back](https://github.com/dimadem/libft/blob/main/src/linkedlist/ft_lstadd_back.c) | adds an element at the end of a list |
| [ft_lstadd_front](https://github.com/dimadem/libft/blob/main/src/linkedlist/ft_lstadd_front.c) | adds an element at the beginning of a list |
| [ft_lstclear](https://github.com/dimadem/libft/blob/main/src/linkedlist/ft_lstclear.c) | deletes and free list |
| [ft_lstdelone](https://github.com/dimadem/libft/blob/main/src/linkedlist/ft_lstdelone.c) | deletes one node |
| [ft_lstiter](https://github.com/dimadem/libft/blob/main/src/linkedlist/ft_lstiter.c) | applies a function to each element of a list |
| [ft_lstlast](https://github.com/dimadem/libft/blob/main/src/linkedlist/ft_lstlast.c) | returns the last element of the list |
| [ft_lstmap](https://github.com/dimadem/libft/blob/main/src/linkedlist/ft_lstmap.c) | applies a function to each element of a list |
| [ft_lstnew](https://github.com/dimadem/libft/blob/main/src/linkedlist/ft_lstnew.c) | creates a new list element |
| [ft_lstsize](https://github.com/dimadem/libft/blob/main/src/linkedlist/ft_lstsize.c) | counts the number of elements in a list |

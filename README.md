# LIBFT

## Implementation of some of the Standard C Library functions

Libft is an individual project at 42 that requires us to re-create some standard C library functions including some additional ones that can be used later to build a library of useful functions for the rest of the program.

All functions are created in accordance with Norm - the bunch of rules how code should be formatted.

**!NOTE** <br />
Because of 42 School norm requirements: <br />
* All variables are declared and aligned at the top of each function <br />
* Each function can't have more then 25 lines of code <br />
* C++ style code commenting is forbidden <br />
* Project should be created just with allowed functions otherwise it's cheating. <br />

### The project consists of 3 main logical parts:
* Standart Libc functions
* Additional functions
* Bonus part functions

### How to compile library:

Using Makefile you can create library file libft.a<br/>
Makefile has 4 main options:<br/>
* **make** - to compile C files - create object files and library libft.a<br/>
* **make clean** - to remove object files<br/>
* **make fclean** - remove libft.a file<br/>
* **make re** - recompile the library<br/>

---

# :bookmark_tabs: List of Functions

## Functions from `<ctype.h>`

- [x] [`ft_isalpha`](/ft_isalpha.c)	- checks for an alphabetic character.
- [x] [`ft_isdigit`](/ft_isdigit.c)	- check for a digit (0 through 9).
- [x] [`ft_isalnum`](/ft_isalnum.c)	- checks for an alphanumeric character.
- [x] [`ft_isascii`](/ft_isascii.c)	- checks whether c fits into the ASCII character set.
- [x] [`ft_isprint`](/ft_isprint.c)	- checks for any printable character.
- [x] [`ft_toupper`](/ft_toupper.c)	- convert char to uppercase.
- [x] [`ft_tolower`](/ft_tolower.c)	- convert char to lowercase.

## Functions from `<string.h>`

- [x] [`ft_strlen`](/ft_strlen.c)	- calculate the length of a string.
- [x] [`ft_memset`](/ft_memset.c)	- fill memory with a constant byte.
- [x] [`ft_bzero`](/ft_bzero.c)	- zero a byte string.
- [x] [`ft_memcpy`](/ft_memcpy.c)	- copy memory area.
- [x] [`ft_memmove`](/ft_memmove.c)	- copy memory area.
- [x] [`ft_strlcpy`](/ft_strlcpy.c)	- copy string to a specific size.
- [x] [`ft_strlcat`](/ft_strlcat.c)	- concatenate a string to a specific size.
- [x] [`ft_strchr`](/ft_strchr.c)	- locate character in a string.
- [x] [`ft_strrchr`](/ft_strrchr.c)	- locate character in a string.
- [x] [`ft_strncmp`](/ft_strncmp.c)	- compare two strings.
- [x] [`ft_memchr`](/ft_memchr.c)	- scan memory for a character.
- [x] [`ft_memcmp`](/ft_memcmp.c)	- compare memory areas.
- [x] [`ft_strnstr`](/ft_strnstr.c)	- locate a substring in a string.
- [x] [`ft_strdup`](/ft_strdup.c)	- creates a duplicate for the string passed as a parameter.

## Functions from `<stdlib.h>`
- [x] [`ft_atoi`](/ft_atoi.c)	- convert a string to an integer.
- [x] [`ft_calloc`](/ft_calloc.c)	- allocates memory and sets its bytes' values to 0.

## Non-standard functions
- [x] [`ft_substr`](/ft_substr.c)	- returns a substring from a string.
- [x] [`ft_strjoin`](/ft_strjoin.c)	- concatenates two strings.
- [x] [`ft_strtrim`](/ft_strtrim.c)	- trims the beginning and end of a string with a specific set of chars.
- [x] [`ft_split`](/ft_split.c)	- splits a string using a char as parameter.
- [x] [`ft_itoa`](/ft_itoa.c)	- converts a number into a string.
- [x] [`ft_strmapi`](/ft_strmapi.c)	- applies a function to each character of a string.
- [x] [`ft_striteri`](/ft_striteri.c)	- applies a function to each character of a string.
- [x] [`ft_putchar_fd`](/ft_putchar_fd.c)	- output a char to a file descriptor.
- [x] [`ft_putstr_fd`](/ft_putstr_fd.c)	- output a string to a file descriptor.
- [x] [`ft_putendl_fd`](/ft_putendl_fd.c)	- output a string to a file descriptor, followed by a new line.
- [x] [`ft_putnbr_fd`](/ft_putnbr_fd.c)	- output a number to a file descriptor.

## Linked list functions

- [x] [`ft_lstnew`](/ft_lstnew.c)	- creates a new list element.
- [x] [`ft_lstadd_front`](/ft_lstadd_front.c)	- adds an element at the beginning of a list.
- [x] [`ft_lstsize`](/ft_lstsize.c)	- counts the number of elements in a list.
- [x] [`ft_lstlast`](/ft_lstlast.c)	- returns the last element of the list.
- [x] [`ft_lstadd_back`](/ft_lstadd_back.c)	- adds an element at the end of a list.
- [x] [`ft_lstclear`](/ft_lstclear.c)	- deletes and free list.
- [x] [`ft_lstiter`](/ft_lstiter.c)	- applies a function to each element of a list.
- [x] [`ft_lstmap`](/ft_lstmap.c)	- applies a function to each element of a list.

---


#### More about School 42 you can find here: https://en.wikipedia.org/wiki/42_(school)

*This project was created as part of the 42 Common Core curriculum.*

# Libft
## Description

Libft is a C programming project that consists of creating a personal library by reimplementing several standard C library functions and developing additional utility functions.

The purpose of the project is to improve understanding of fundamental C concepts such as pointers, memory management, strings, dynamic memory allocation, file descriptors, function pointers, static libraries, Makefiles, and linked lists.

The final result is a static library called `libft.a`, which can be reused in future C projects.

---

## Functions

### Character Checks and Conversions

- `ft_isalpha`
- `ft_isdigit`
- `ft_isalnum`
- `ft_isascii`
- `ft_isprint`
- `ft_toupper`
- `ft_tolower`

### String Functions

- `ft_strlen`
- `ft_strchr`
- `ft_strrchr`
- `ft_strncmp`
- `ft_strlcpy`
- `ft_strlcat`
- `ft_strnstr`
- `ft_strdup`

### Memory Functions

- `ft_memset`
- `ft_bzero`
- `ft_memcpy`
- `ft_memmove`
- `ft_memchr`
- `ft_memcmp`
- `ft_calloc`

### Conversion and Utility Functions

- `ft_atoi`
- `ft_substr`
- `ft_strjoin`
- `ft_strtrim`
- `ft_split`
- `ft_itoa`
- `ft_strmapi`
- `ft_striteri`

### File Descriptor Functions

- `ft_putchar_fd`
- `ft_putstr_fd`
- `ft_putendl_fd`
- `ft_putnbr_fd`

### Linked List Functions

- `ft_lstnew`
- `ft_lstadd_front`
- `ft_lstsize`
- `ft_lstlast`
- `ft_lstadd_back`
- `ft_lstdelone`
- `ft_lstclear`
- `ft_lstiter`
- `ft_lstmap`

---

## Compilation

The project includes a Makefile.

To compile the library:

```bash
make
```

This creates:

```text
libft.a
```

Available Makefile commands:

```bash
make
make clean
make fclean
make re
```

### Makefile Rules

- `make` compiles the source files and creates `libft.a`.
- `make clean` removes object files.
- `make fclean` removes object files and `libft.a`.
- `make re` performs a complete rebuild of the library.

---

## Usage

Include the Libft header in your C program:

```c
#include "libft.h"
```

Then compile your program together with the library:

```bash
cc -Wall -Wextra -Werror main.c libft.a -o program
```

Run the program with:

```bash
./program
```

Example:

```c
#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	*str;

	str = ft_strdup("Hello, Libft!");
	if (str == NULL)
		return (1);
	printf("%s\n", str);
	free(str);
	return (0);
}
```

Compile it with:

```bash
cc -Wall -Wextra -Werror main.c libft.a -o program
```

---

## Linked Lists

The project also includes functions for working with singly linked lists.

Each node is represented by:

```c
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;
```

Each node contains:

- `content`: a pointer to the data stored in the node.
- `next`: a pointer to the next node in the list.

The linked list functions allow nodes to be created, added, counted, traversed, deleted, cleared, and transformed.

---

## What I Learned

During this project, I practiced and improved my understanding of:

- Pointers and pointer arithmetic
- Dynamic memory allocation
- `malloc` and `free`
- Memory leaks and memory management
- Strings and character manipulation
- Memory manipulation
- Function pointers
- File descriptors
- The `write` system call
- Static libraries
- Makefiles
- Header files
- Structures
- Linked lists
- Error handling
- Debugging C programs
- Using compiler warnings effectively

The project also helped me understand the importance of handling edge cases and checking the result of memory allocations.

---

## Testing

The project was compiled using:

```bash
cc -Wall -Wextra -Werror
```

The source files were also checked using Norminette.

Example:

```bash
norminette
```

The library was tested with different inputs, edge cases, and external Libft testers.

Memory-related behavior can also be checked using Valgrind when available.

Example:

```bash
valgrind --leak-check=full ./program
```

---

## Resources

The following resources were useful while working on the project:

- 42 Libft subject and project documentation
- C manual pages
- Linux manual pages
- Compiler error and warning messages
- Norminette
- Valgrind
- Libft testing tools
- General C documentation and references

Useful manual commands include:

```bash
man malloc
man free
man write
man strlen
man strchr
man memcpy
```

---

## AI Usage

AI tools were used as a learning and debugging aid during the development of this project.

They were mainly used to:

- Explain C programming concepts
- Clarify pointer behavior
- Understand dynamic memory allocation
- Understand function pointers
- Understand linked lists
- Review implementation logic
- Explain compiler and linker errors
- Help identify possible edge cases
- Explain testing results

AI was used to support the learning process rather than replace it.

The implementations were reviewed, compiled, tested, debugged, and understood during development.

---

## Author

**aalhammo**

42 Common Core

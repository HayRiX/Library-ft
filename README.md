*This project has been created as part of the 42 curriculum by aryahi.*

# Libft (Library-ft)

## Description
**Goal:** The primary goal of this project is to code a C library regrouping usual functions that we'll be allowed to use in all other 42 projects.
**Overview:** Libft is a foundational project at 1337 (42 Network). Since the use of standard C library functions is strictly forbidden in most projects, students must rewrite them from scratch. This library includes equivalents of libc functions, string manipulation utilities, memory management functions, and a linked-list API. Building this library provides a deep understanding of data structures, memory allocation, and pointers in C.

## Instructions
### Prerequisites
* GCC compiler
* Unix-based OS (Linux/macOS)
* `make` utility

### Installation & Compilation
This project uses a `Makefile` to compile the source code into a static library archive (`libft.a`).

- Clone the repository and navigate to the directory:
```bash
git clone <repository_url> library-ft
cd library-ft
```

- Compile the standard mandatory functions:
```bash
make
```

- Compile the bonus functions (linked lists) along with the mandatory ones:
```bash
make bonus
```

- Clean up object files (`.o`):
```bash
make clean
```

- Clean up object files and the `libft.a` binary:
```bash
make fclean
```

- Recompile everything from scratch:
```bash
make re
```

## Project Structure & Functions
The library is divided into three main sections based on the Makefile:

### 1. Libc Functions
Re-implementations of standard C library functions.
* **Memory:** `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc`
* **String:** `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strdup`
* **Character checks:** `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_toupper`, `ft_tolower`
* **Conversion:** `ft_atoi`

### 2. Additional Functions
Utility functions useful for string manipulation and output.
* **Strings:** `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_strmapi`, `ft_striteri`
* **Conversion:** `ft_itoa`
* **File Descriptors (FD):** `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`

### 3. Bonus Functions (Linked Lists)
A complete API to create and manipulate linked lists using the custom `t_list` struct.
* **Functions:** `ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`, `ft_lstlast`, `ft_lstadd_back`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`

## Code Reusability (API Usage)

### How to use the module in your own project:
After compiling `libft.a`, you can include the header in your C files and compile your project with the library.

1. Include the header in your `.c` file:
```c
#include "libft.h"

int main(void)
{
    // Using ft_strdup and ft_putendl_fd from our library
    char *str = ft_strdup("Hello from Libft!");
    
    if (str)
    {
        ft_putendl_fd(str, 1);
        free(str);
    }
    return (0);
}
```

2. Compile your program with the library:
```bash
cc -Wall -Wextra -Werror my_program.c -L. -lft -o my_program
```
*(Note: `-L.` tells the compiler to look for libraries in the current directory, and `-lft` links the `libft.a` file).*

## Specific tools used
* **Git/GitHub** for version control.
* **Makefile** for automated compilation and dependency management, using variables like `$(CC)` and `$(CFLAGS)`.
* **Norminette** for checking the strict 42 coding style (Norme).

## Resources
* *Man pages:* Used extensively to replicate the exact behavior, parameters, and edge cases of standard libc functions (e.g., `man 3 strncmp`).


# Libft

The first major project at Campus 19. Our goal is to create a libary of usefull functions from scratch. These functions will be used in later projects. Most of these functions are based on existing functions in the standard C libary <strings.h>. However,  There are some functions that are unique to this project. This project gives us a deeper understanding of C programming through reverse engeneering.

# How to use

1. Clone the repository, then enter the cloned directory

```bash
git clone git@github.com:FutureSn0/libft.git
cd libft
```

2. Run "make"

```bash
make
```

3. You should now see a file named "libft.a". To use this libary in your own code, create a path to the .h file in your C project.

```bash
#include "libft.h"
```

There are some cases where you may want to manually compile some files. Inlcude a path to the libft.a file in your bash command.

```bash
gcc <source files> libft/libft.a
```
Additional makefile rules

`make` - Compile libft **mandatory** files.

`make bonus` - Compile libft **bonus** files.

`make clean` - Delete all .o (object files) files.

`make fclean` - Delete all .o (object file) and .a (executable) files.

`make re` - Reblilds project by using rules `fclean` + `all`.

# Subject
### Mandatory
This section consists of 2 parts. Part 1 gets us to recreate 23 functions from the C libary. Part 2 consists of 11 functions that are not included in the C libary, but are usefull for checking and manipulating strings, numbers and memory. All functions must be fully functioning and well-tested to obtain passing score (100/100). 

#### Part 1:
| Function | Description |
| :- | :- |
| `ft_isalpha` | Checks if given character is an alphabet. |
| `ft_isdigit` | Checks if given character is a decimal-digit. |
| `ft_isalnum` | Checks if given character is either alpha or numeric. |
| `ft_isascii` | Checks if given character is ASCII. |
| `isprint` | Checks if given character is printable. |
| `ft_toupper` | Converts lower case to upper case. |
| `ft_tolower` | Converts upper case to lower case letter. |
| `ft_strlen`   | Finds the length of the string. |
| `ft_strlcpy`  | Copies string based on amount specified. |
| `ft_strlcat`  | String concatenation based on specified amount. |
| `ft_strchr`   | Locate the character in the string (first occurrence). |
| `ft_strrchr`  | Locate the character in the string (last occurrence). |
| `ft_strncmp`  | Compare strings based on the amount specified. |
| `ft_strnstr`  | Locate a substring in a string (Amount specified) |
| `ft_calloc`  | Memory allocation. |
| `ft_memset`  | Write a byte to a byte string. |
| `ft_bzero`   | Write zeroes to a byte string. |
| `ft_memcpy`  | Copy memory area. |
| `ft_memmove` | Copy byte string. |
| `ft_memchr`  | Locate byte in byte string. |
| `ft_memcmp`  | Compare byte string. |
| `ft_strdup`  | Duplicates string (using malloc). |
| `ft_atoi` | Converts ASCII string to an integer. |

#### Part 2:
| Function | Description |
| :- | :- |
| `ft_substr`   | Extract substring from a string. |
| `ft_strjoin`  | Concatenate two strings into a new string (with malloc). |
| `ft_strtrim`  | Trim the beginning and end of the string with the specified characters. |
| `ft_split`    | Split string, with specified character as delimiter, into an array of strings. |
| `ft_itoa` | Convert integer to ASCII string. |
| `ft_strmapi`  | Create a new string by modifying the string with a specified function. |
| `ft_striteri` | Iterates through a string, enabling character and index manipulation. |
| `ft_putchar_fd` | Output a character to the given file. |
| `ft_putstr_fd`  | Output string to the given file. |
| `ft_putendl_fd` | Output string to given file with newline. |
| `ft_putnbr_fd`  | Output integer to the given file. |

### Bonus

This section contains additional functions that manipulate linked-lists.
. All functions must be fully functioning and well-tested to obtain an additional 25 points to the passing grade (125/100).

| Function | Description |
| :- | :- |
| `ft_lstnew`       | Create new list. |
| `ft_lstadd_front` | Add a new element at the beginning of the list. |
| `ft_lstadd_back`  | Add a new element at the end of the list. |
| `ft_lstsize`      | Count elements of a list. |
| `ft_lstlast`      | Find the last element of the list. |
| `ft_lstdelone`    | Delete element from the list. |
| `ft_lstclear`     | Delete the sequence of elements of the list from a starting point. |
| `ft_lstiter`      | Apply function to the content of all list elements. |
| `ft_lstmap`       | Apply function to the content of all list elements into a new list. |

# Norminette

All projects are written according to a standard implemented by the 42 school known as "Norminette". This standard specifies our files to be formatted in a specific way, limits the amount of functions and varables included in a single file, and also the use of certain statements (for, do.. while, switch.. case, etc).

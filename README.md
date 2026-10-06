*This project has been created as part of the 42 curriculum by emkapcov

# Description

ft_printf is a 42 project where we recreate the printf() function from the C standard library.

The goal is to learn how variadic functions work and how to process a variable number of arguments.

The mandatory implementation supports the following conversions:

- %c - character
- %s - string
- %p - pointer
- %d - decimal number
- %i - integer
- %u - unsigned decimal number
- %x - hexadecimal lowercase
- %X - hexadecimal uppercase
- %% - percent sign

# Instructions

Compile the project with:

make

This creates:

libftprintf.a

To remove object files:

make clean

To remove object files and the library:

make fclean

To recompile everything:

make re

To use the library in another program, include:

#include "ft_printf.h"

and compile the program together with libftprintf.a.

# Algorithm

The main function ft_printf() reads the format string character by character.

When it finds a normal character, it prints it directly.

When it finds '%', it reads the following character and sends it to ft_conversion().

ft_conversion() determines which conversion is being requested and calls the corresponding printing function.

Each conversion has its own function.

Numbers are printed recursively by dividing the number by the base and printing the remainder.

Decimal numbers use base 10.

Hexadecimal numbers use base 16.

# Resources

- C documentation for write()
- C documentation for variadic functions: va_list, va_start, va_arg and va_end
- printf() documentation

AI was used as a learning support tool to review the project structure, explain C concepts, identify possible issues, and help verify the implementation. The code was reviewed and understood before being used.

# Data Structures

The project mainly uses va_list to access the variable arguments passed to ft_printf().

No dynamically allocated data structures are required for the mandatory part.
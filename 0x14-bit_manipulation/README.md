# C- Bit Manipulation
This directory contains files that deal with bit manipulation. The target project is 0x14-bit_manipulation and here we learn how to manipulate the bits of the data in question. This directory conatins the following files with their target functions
In this project, I learned how to manipulate bits and use the
bitwise operators `>>`, `<<`, `&`, `|`, and `^` in C.
## Helper File :raised_hands:

* [_putchar.c](./_putchar.c): C function that writes a character to `stdout`.

## Header File :file_folder:

* [main.h](./main.h): Header file containing prototypes for all
functions written in the project.
## Required Files :page_facing_up:
* [0x14-bit_manipulation](./0-binary_to_uint.c): All the required files are listed below

**FILE**               |   **FUNCTION PROTOTYPE**                  	                        | **ACTION**                                                       |
---------------------- |---------------------------------------------------------------------|------------------------------------------------------------------|
[0-binary_to_uint.c](./0-binary_to_uint.c)   |  'unsigned int binary_to_uint(const char *b)`                       |`It converts a binary to an unsigned integer`                     |
[1-print_binary.c](./1-print_binary.c)     |  `void print_binary(unsigned long int n)`                           |`It prints out a number in base two`                              |
[2-get_bit.c](./2-get_bit.c)          |  `int get_bit(unsigned long int n, unsigned int index)`             |`It returns the bit at the specified index`                       |
[3-set_bit.c](./3-set_bit.c)          |  `int set_bit(unsigned long int *n, unsigned int index)`            |`It sets the bit at the given index to one`                       |
[4-clear_bit.c](./4-clear_bit.c)        |  `int clear_bit(unsigned long int *n, unsigned int index)`          |`It sets the bit at the index to zero`                            |
[5-flip_bit.c](./5-flip_bits.c)         |  `unsigned int flip_bits(unsigned long int n, unsigned long int m)` |`It returns the number of bits needed to flip the number n to m`  |
[6-get_endianness.c](./100-get_endianness.c)   |  `int get_endianness(void)                                          |`It checks the endianness of the local machine`                   |
[101-password](./101-password)         |   `None : there is no function and this is not a C file             |`It contains the password for the file crackme3`                  |
----------------------------------------------------------------------------------------------------------------------------------------------------------------


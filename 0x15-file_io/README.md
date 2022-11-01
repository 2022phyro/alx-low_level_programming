# C- FILE INPUT AND OUTPUT

## Synopsis
This directory contains knowledge and practice work on the topic File Input and Output Here, we see how to create, write and read into a file from a program or outside the file

## Folders :open_file_folder:
* [0x15-file_io](./0x15-file_io): Contains the ALX SE requirements
* [test](./test): Contains practice work and the files I used to gain more understanding of the concept
## Helper Files :raised_hands:
* [putchar](./_putchar.c): Serves to print out our information to standard output

## Header files :scroll:
### [main.h](./main.h)
It contains the function prototypes of all the functions used

## Contents
* ### _Files with a function as a target_ :page_facing_up:
|**FILES**|**FUNCTIONS**|**ACTIONS**|
|:---|:---:|:---|
|[0-read_textfile.c](./0-read_textfile.c)|ssize_t read_textfile(const char *filename, size_t letters);|Reads from a textfile and into the buffer|
|[1-create_file.c](./1-create_file.c)|int create_file(const char *filename, char *text_content);|Creates and writes data into a new file or write the data into the old one and truncate it|
|[2-append_text_to_file.c](./2-append_text_to_file.c)|int append_text_to_file(const char *filename, char *text_content);|Appends text to the file|

* ### _Files with a program as a target_ :page_with_curl:
|**FILE**|*PROGRAM FUNCTION*|
|:---|:---:|
|[3-cp.c](./3-cp.c)|Contains a program that mimicks the cp function|
|[100-elf_header.c](./100-elf_header.c)| Displays the information contained in the elf header at the start of an elf file| 

## See Also
<details>
  <summary></summary>
  
  1. The _putchar file is provided by ALX
  2. Test folder:
     * The test folder contains files that are not ncessarily part of the ALX SE
     * Ignore any .swp files found in this directory
</details>

## Author:
**Ugwuanyi Afam** alias **2022phyro**  </br>
*11th November, 2022.*

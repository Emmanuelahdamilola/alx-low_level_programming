0x15. C - File I/O

Tasks
0. Tread lightly, she is near
- Write a function that reads a text file and prints it to the POSIX standard output.
Prototype: ssize_t read_textfile(const char *filename, size_t letters);

1. Under the snow
- Create a function that creates a file.
Prototype: int create_file(const char *filename, char *text_content);


2. Speak gently, she can hear
- Write a function that appends text at the end of a file.
Prototype: int append_text_to_file(const char *filename, char *text_content);

3. cp
- Write a program that copies the content of a file to another file.
Usage: cp file_from file_to

4. elf
- Write a program that displays the information contained in the ELF header at the start of an ELF file.
Usage: elf_header elf_filename
Displayed information: (no less, no more, do not include trailing whitespace)
Magic
Class
Data
Version
OS/ABI
ABI Version
Type
Entry point address
Format: the same as readelf -h (version 2.26.1)
If the file is not an ELF file, or on error, exit with status code 98 and display a comprehensive error message to stderr

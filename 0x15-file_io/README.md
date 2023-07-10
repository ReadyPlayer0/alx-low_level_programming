File Descriptors and Permissions
This repository contains C programs that demonstrate various file operations and permissions handling. The programs are implemented according to the requirements specified in the project instructions.

Programs
The repository includes the following programs:

read_textfile: Reads a text file and prints its content to the standard output.
create_file: Creates a new file and writes the specified text content to it.
append_text_to_file: Appends the specified text content to an existing file.
cp: Copies the content of one file to another file.
elf_header: Displays the information contained in the ELF header of an ELF file.
Compilation
To compile the programs, use the gcc compiler with the provided Makefile. For example:

go
Copy code
$ make
This will compile all the programs and generate the corresponding executables.

Usage
Each program has its own usage instructions. Here are the usage examples for each program:

read_textfile:

bash
Copy code
Usage: ./read_textfile filename letters
This program reads the specified number of letters from the file and prints them to the standard output.

create_file:

bash
Copy code
Usage: ./create_file filename text_content
This program creates a new file with the specified name and writes the given text content to it.

append_text_to_file:

bash
Copy code
Usage: ./append_text_to_file filename text_content
This program appends the given text content to an existing file with the specified name.

cp:

bash
Copy code
Usage: ./cp file_from file_to
This program copies the content of the file_from to file_to.

elf_header:

bash
Copy code
Usage: ./elf_header elf_filename
This program displays the information contained in the ELF header of the specified ELF file.

Make sure to provide the correct arguments as per the usage instructions for each program.

Contributions
Contributions to this repository are welcome. If you find any issues or have any improvements, feel free to submit a pull request.
# Binary Operations

This project implements various binary operations in C. It includes functions to convert binary numbers to unsigned integers, print binary representations, manipulate bits, and check endianness.

## Getting Started

To use the functions in this project, include the `main.h` header file in your C code. The header file contains the function prototypes for all the binary operations.

## Function Descriptions

1. `unsigned int binary_to_uint(const char *b)`: Converts a binary number to an unsigned int.

2. `void print_binary(unsigned long int n)`: Prints the binary representation of a number.

3. `int get_bit(unsigned long int n, unsigned int index)`: Returns the value of a bit at a given index.

4. `int set_bit(unsigned long int *n, unsigned int index)`: Sets the value of a bit to 1 at a given index.

5. `int clear_bit(unsigned long int *n, unsigned int index)`: Sets the value of a bit to 0 at a given index.

6. `unsigned int flip_bits(unsigned long int n, unsigned long int m)`: Returns the number of bits needed to flip to get from one number to another.

7. `int get_endianness(void)`: Checks the endianness of the system.

## Usage Examples

```c
#include <stdio.h>
#include "main.h"

int main(void) {
    unsigned int n;

    n = binary_to_uint("101");
    printf("%u\n", n);

    print_binary(1024);

    int bit = get_bit(1024, 10);
    printf("%d\n", bit);

    unsigned long int num = 1024;
    set_bit(&num, 5);
    printf("%lu\n", num);

    clear_bit(&num, 5);
    printf("%lu\n", num);

    unsigned int flips = flip_bits(1024, 1);
    printf("%u\n", flips);

    int endianness = get_endianness();
    if (endianness == 0) {
        printf("Big Endian\n");
    } else {
        printf("Little Endian\n");
    }

    return 0;
}

Build and Run
To compile the code, use the following command:

c
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 main.c <other_files.c> -o binary_operations
Replace <other_files.c> with the names of the source files containing the function implementations you want to include.

To run the program, use the following command:

bash
./binary_operations
#ifndef MAIN_H
#define MAIN_H

#include <elf.h>
#include <stddef.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/* 0-read_textfile.c */
ssize_t read_textfile(const char *filename, size_t letters);

/* 1-create_file.c */
int create_file(const char *filename, char *text_content);

/* 2-append_text_to_file.c */
int append_text_to_file(const char *filename, char *text_content);

/* 3-cp.c */
void error_exit(int exit_code, const char *message);

/* 100-elf_header.c */
void error_exit(int exit_code, const char *message);
void print_elf_header_info(Elf64_Ehdr *header);

#endif /* MAIN_H */

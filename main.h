#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stdint.h>
#include <string.h>

void write_buffer(char buffer[], int *count);
void handle_character(const char **ptr, char buffer[], int *count);
void handle_rot13(va_list args, char buffer[], int *count);
void handle_format_specifier(const char **ptr, va_list args, char buffer[], int *count);
void handle_format_string(const char *format, va_list args, char buffer[], int *count);
int _printf(const char *format, ...);

#endif


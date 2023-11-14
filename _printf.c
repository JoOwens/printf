#include "main.h"

/**
 * _printf - prints formatted output to stdout
 * @format: format string
 *
 * Return: number of characters printed (excluding null byte)
 */

int _printf(const char *format, ...) {
    va_list args;
    int count = 0;
    char buffer[1024]; 

    va_start(args, format);
    handle_format_string(format, args, buffer, &count);
    va_end(args);

    return count;
}

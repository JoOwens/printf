#include "main.h"

/**
 * handle_format_specifier - handles format specifier conversion and adds it to the buffer
 * @ptr: pointer to the current character in the format string
 * @args: variadic arguments list
 * @buffer: the buffer to which the converted specifier needs to be added
 * @count: the count of characters in the buffer
 *
 * Return: Nothing
 */

void handle_format_string(const char *format, va_list args, char buffer[], int *count) {
    const char *ptr;
    for (ptr = format; *ptr != '\0'; ptr++) {
        if (*count >= 1024)
            write_buffer(buffer, count);

        if (*ptr == '%') {
            ptr++;
            handle_format_specifier(&ptr, args, buffer, count);
        }
        else {
            buffer[(*count)++] = *ptr;
        }
    }
    write_buffer(buffer, count);
}

/**
 * handle_format_string - handles the entire format string and its conversion
 * @format: the format string
 * @args: variadic arguments list
 * @buffer: the buffer to which the converted string needs to be added
 * @count: the count of characters in the buffer
 *
 * Return: Nothing
 */

void handle_format_specifier(const char **ptr, va_list args, char buffer[], int *count) {
    switch (**ptr) {
    }
}

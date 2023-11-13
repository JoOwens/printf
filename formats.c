#include "printf.h"

/**
 * _printf - Custom printf function supporting %c, %s, and %%
 * @format: Format string containing conversion specifiers
 *         (%c for characters, %s for strings, and %% for percent sign)
 *
 * Return: The number of characters printed (excluding the null byte)
 */

int _printf(const char *format, ...) {
    va_list args;
    va_start(args, format);

    int count = 0; 

    while (*format != '\0') {
        if (*format == '%') {
            format++;  

            switch (*format) {
                case 'c':
                    count += putchar(va_arg(args, int));
                    break;
                case 's':
                    count += printf("%s", va_arg(args, char *));
                    break;
                case '%':
                    count += putchar('%');
		break;
		default:
		break;
            }
        } else {
            count += putchar(*format);
        }

        format++;  /* move to the next character in the format string */
    }

    va_end(args);
    return count;
}

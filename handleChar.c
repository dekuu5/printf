#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * handleChar - Handles the %c format specifier in the format string
 * @args: The va_list of arguments
 *
 * Return: The number of characters written (always 1 for %c)
 */
int handleChar(va_list args){
    char c = va_arg(args, int);
    _putchar(c);
    return 1;
}

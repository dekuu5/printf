#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * handleString - Handles the %s format specifier in the format string
 * @args: The va_list of arguments
 *
 * Return: The number of characters written
 */
int handleString(va_list args){
    unsigned i = 0;
    char * s = va_arg(args, char*);
    while (s[i] != '\0')
    {
        _putchar(s[i++]);
    }
    return i;
}
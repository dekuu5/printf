#include "main.h"
#include <stdarg.h> 
#include <stdio.h>

/**
 * handlePercentage - Handles the conversion specifier in the format string
 * @args: The va_list of arguments
 * @type: The format type to be handled
 *
 * Return: The number of characters written
 */
int handlePercentage(va_list args, char type)
{
    unsigned int i = 0;
    unsigned int CountedChars = 0;

    fMap funcMapList[] = {
        {"c", handleChar},
        {"s", handleString},
        {"i", handleInt},
		{"d", handleDec},
        {"b", handleBinary},
        {NULL, NULL}
    };

    while (funcMapList[i].type)
    {
        if (funcMapList[i].type[0] == type)
        {
            CountedChars = funcMapList[i].func(args);
        }

        i++;
    }

    return (CountedChars);
}

/**
 * _printf - Custom implementation of printf
 * @buffer: The format string
 * @...: Additional arguments to be formatted
 *
 * Return: The number of characters printed (excluding the null byte)
 */
int _printf(const char *buffer, ...)
{
    va_list args;
    int outedBuffer = 0;
    int i = 0;
    char type;

    if (buffer == NULL)
    {
        return (-1);
    }
    va_start(args, buffer);
    while (buffer[i] != '\0')
    {
        if (buffer[i] == '%')
        {
            type = buffer[i + 1];

            if (type == '%')
            {
                _putchar('%');
                outedBuffer++;
            }
            else
            {
                outedBuffer += handlePercentage(args, type);
            }

            i += 2;
        }
        else
        {
            _putchar(buffer[i++]);
            outedBuffer++;
        }
    }

    va_end(args);
    return (outedBuffer);
}
#include "main.h"
#include <stdio.h>
#include <stdarg.h>

int handleString(va_list args){
    unsigned i = 0;
    char * s = va_arg(args, char*);
    while (s[i] != '\0')
    {
        _putchar(s[i++]);
    }
    return i;
}
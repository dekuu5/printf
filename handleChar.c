#include "main.h"
#include <stdio.h>
#include <stdarg.h>

int handleChar(va_list args){
    char c = va_arg(args, int);
    _putchar(c);
    return 1;
}

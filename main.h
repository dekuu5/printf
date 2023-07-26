#ifndef MY_HEADER_H
# define MY_HEADER_H
#include <stdarg.h>

int _printf(const char * buffer, ...);
int _putchar(char c);
int handleString(va_list args); 

typedef struct functionMap
{
	char *type;
	int (*func)(va_list);
} fMap;

#endif
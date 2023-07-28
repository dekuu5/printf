#ifndef MY_HEADER_H
# define MY_HEADER_H
#include <stdarg.h>

int _printf(const char * buffer, ...);
int _putchar(char c);
int handleString(va_list args);
int handleChar(va_list args);
int handleInt(va_list args);
int handleDec(va_list args);
int handleBinary(va_list args);

/**
 * struct fMap - Function mapping structure
 * @type: Format type
 * @func: Corresponding handling function
 */
typedef struct functionMap
{
	char *type;
	int (*func)(va_list);
} fMap;

#endif
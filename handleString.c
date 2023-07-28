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
    char *my_string;
	int  i = 0;

	my_string = va_arg(args, char *);
	if (my_string == NULL)
		my_string = "(null)";
	while (my_string[i])
	{
		_putchar(my_string[i]);
		i++;
	}
	return (i);
}
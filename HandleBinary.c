#include <stdarg.h>
#include <stdio.h>
#include "main.h"
/**
* handleBinary - convert to binary
* @args: number in decimal
* Return: number of chars printed
*/
int handleBinary(va_list args)
{
	unsigned int len, powTen, j, digit, n, num;
	int count = 0;

	n = va_arg(args, unsigned int);
	if (n != 0)
	{
		num = n;
		len = 0;
		while (num != 0)
		{
			num /= 2;
			len++;
		}
		powTen = 1;
		for (j = 1; j <= len - 1; j++)
			powTen *= 2;
		for (j = 1; j <= len; j++)
		{
			digit = n / powTen;
			_putchar(digit + '0');
			count++;
			n -= digit * powTen;
			powTen /= 2;
		}
	}
	else
	{
		_putchar('0');
		return (1);
	}
	return (count);
}

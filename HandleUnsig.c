#include "main.h"
/**
* handleUnsig - function that prints unsigned number
* @u: unsigned number
* Descriptions: prints unsigned number with putchar
* Return: size the output
*/
int handleUnsig(va_list u)
{
	unsigned int len, powTen, j, digit, n, num;
	int count = 0;

	n = va_arg(u, unsigned int);
	if (n != 0)
	{
		num = n;
		len = 0;
		while (num != 0)
		{
			num /= 10;
			len++;
		}
		powTen = 1;
		for (j = 1; j <= len - 1; j++)
			powTen *= 10;
		for (j = 1; j <= len; j++)
		{
			digit = n / powTen;
			_putchar(digit + '0');
			count++;
			n -= digit * powTen;
			powTen /= 10;
		}
	}
	else
	{
		_putchar('0');
		return (1);
	}
	return (count);
}

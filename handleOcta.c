#include "main.h"
/**
* HandleOctal - unsigned int argument is converted to unsigned octal
* @o: unsigned to be converted
* Descriptions: prints unsigned octal
* Return: size the output
*/
int HandleOctal(va_list o)
{
	unsigned int len, powTen, j, digit, n, num;
	int count = 0;

	n = va_arg(o, unsigned int);
	if (n != 0)
	{
		num = n;
		len = 0;
		while (num != 0)
		{
			num /= 8;
			len++;
		}
		powTen = 1;
		for (j = 1; j <= len - 1; j++)
			powTen *= 8;
		for (j = 1; j <= len; j++)
		{
			digit = n / powTen;
			_putchar(digit + '0');
			count++;
			n -= digit * powTen;
			powTen /= 8;
		}
	}
	else
	{
		_putchar('0');
		return (1);
	}
	return (count);
}

#include "main.h"

/**
* handleInt - function that prints an integer
* @args: integer to print
* Descriptions: prints digit with _putchar
* Return: size the output text
*/
int handleInt(va_list args)
{
	int len, powTen, j, digit, n, count = 0, num;

	n = va_arg(args, int);
	if (n != 0)
	{
		if (n < 0)
		{
			_putchar('-');
			count++;
		}
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
			if (n < 0)
				_putchar((digit * -1) + 48);
			else
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


/**
* handleDec - function that prints an decimal
* @args: integer to print
* Descriptions: prints digit with _putchar
* Return: size the output text
*/
int handleDec(va_list args)
{
	int len, powTen, j, digit, n, count = 0, num;

	n = va_arg(args, int);
	if (n != 0)
	{
		if (n < 0)
		{
			_putchar('-');
			count++;
		}
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
			if (n < 0)
				_putchar((digit * -1) + 48);
			else
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

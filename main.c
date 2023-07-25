#include <limits.h>
#include <stdio.h>
#include "main.h"
#include <stdarg.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;

    len = _printf("Let's try to printf a simple sentence.\n", "zbi mnagewfe");
    len2 = printf("Let's try to printf a simple sentence.\n");
    printf("%d %d\n", len2, len);

    len = _printf("Let's try to printf a simple sentence. %s\n", "zbi manga");
    len2 = printf("Let's try to printf a simple sentence. %s\n", "zbi manga");
    printf("%d %d\n", len2, len);

    return 0;

}
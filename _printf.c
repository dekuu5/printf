#include "main.h"
#include <stdarg.h> 
#include <stdio.h>

int handlePercentage(va_list args, char type)
{
    
    unsigned int i = 0;
	fMap find_f[] = {
		{"c", },
		{"s", },
		{"i", },
		{"d", },
		{"r", },
		{"b", },
		{"u", },
		{"o", },
		{"x", },
		{"X", },
		{"R", },
		{  NULL , NULL}
	};
    
    
    return i;
    
}

int _printf(const char * buffer, ...){

    va_list args;
    int outedBuffer = 0;
    int i = 0;
    int addBy = 0;

    va_start(args, buffer);

    while (buffer[i] != '\0')
    {  
        if(buffer[i] == '%')
        {
            outedBuffer += handlePercentage(args, buffer[i+1]);
            i += 2;

        }else
        {
            _putchar(buffer[i++]);
            outedBuffer++;
        }
    }
    va_end(args);
    return outedBuffer;

}
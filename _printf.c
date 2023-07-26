#include "main.h"
#include <stdarg.h> 
#include <stdio.h>


int handlePercentage(va_list args, char type)
{
    
    unsigned int i = 0;
    unsigned int CountedChars = 0;
	fMap funcMapList[12] = {
		{"c", handleChar},
		{"s", handleString},
		{"i", NULL},
		{"r", NULL},
		{"d", NULL},
		{"b", NULL},
		{"u", NULL},
		{"o", NULL},
		{"x", NULL},
		{"X", NULL},
		{"R", NULL},
		{  NULL , NULL}
	};
    while (funcMapList[i].type)
    {
        if (*(funcMapList[i].type) == type){
            CountedChars = funcMapList[i].func(args);
        }
        i++;
    }
    
    
    return CountedChars;
    
}

int _printf(const char * buffer, ...){

    va_list args;
    int outedBuffer = 0;
    int i = 0;

    va_start(args, buffer);
    if (buffer == NULL )
    {
        return (-1);
    }
    

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
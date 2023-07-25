#include "main.h"


char * handlePercentage(char * s)
{
    
}

int _printf(char * buffer, char *str1){
    int outedBuffer = 0;
    int i = 0;

    while (buffer[i] != '\0')
    {
        
        if(buffer[i] == '%')
        {
            handlePercentage(str1);
        }
        _putchar(buffer[i++]);
        outedBuffer++;
    }
    return outedBuffer;

}
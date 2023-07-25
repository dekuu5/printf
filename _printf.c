#include "main.h"


int handlePercentage(char * s, char type)
{
    int i = 0;
    if (type == 's')
    {
        while (s[i] != '\0')
    {
        _putchar(s[i]);
        i++;
    }
    }
    
    
    return i;
    
}

int _printf(char * buffer, char *str1){
    int outedBuffer = 0;
    int i = 0;
    int addBy = 0;

    while (buffer[i] != '\0')
    {  
        if(buffer[i] == '%')
        {
            addBy = handlePercentage(str1, buffer[i+1]);
            i += 2;
            outedBuffer += addBy;

        }else
        {
            _putchar(buffer[i++]);
            outedBuffer++;
        }
    }
    return outedBuffer;

}
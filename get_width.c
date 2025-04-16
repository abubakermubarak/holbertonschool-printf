#include <ctype.h>
#include "main.h"
#include <stdio.h>

int get_width(const char *format)
{
    const char *copy = format;
    int width;
    width = 0;
    /* check after % for the width */
    while (isdigit(*copy))  /* check if it is  number*/
    {
        width = width * 10 + *copy - '0';
        copy++;
    }
    /*
    printf("width after loop: %i\n", width);
    if (*copy == '.') 
    {
        copy++;
        while (isdigit(*copy))
        {
            precision = precision * 10 + *copy - '0';
            copy++;
        }
    }
    */
    return (width);
}
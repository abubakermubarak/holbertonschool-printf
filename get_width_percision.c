#include <ctype.h>
int get_width_percison(char *fromat, int width, int precision)
{
    precision = 0;
    width = 0;
    /* check after % for the width */
    format++;
    while (isdigit(*format))  /* check if it is  number*/
    {
        width = width * 10 + *format - '0';
    }
    if (*format == '.') /* check for .*/
    {
        format++;
        while (isdigit(*format))
        {
            precision = precision * 10 + *format - '0';
        }
    }
}
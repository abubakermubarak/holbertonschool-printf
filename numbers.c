#include "main.h"
#include <stdlib.h>
#include <stdio.h>
extern int n;
int print_int(int long n, int width, char sign)
{
    char *number = (char *) malloc(32 * sizeof(char)); 
    int i = 0;
    char leading;
    leading = ' ';
    int fill = width - number_length(n);
    if (sign == '+')
    {
        add_to_buffer('+');
        fill--;
    }
    else if(sign == '-')
    {
        fill = -fill;
    }
    else if(sign == 'z')
    {
        leading = '0';
        fill--;
    }
    else
    {}
    if (fill >= 0) 
    {
        while(fill--)
        {
            add_to_buffer(leading); 
        }
    }
    
    if (n == 0)
    {
        add_to_buffer('0');
    }
    else
    {
        if (n < 0)
        {
            add_to_buffer('-');
            n = -n;
        }
        while (n) /* n > 0 */
        {
            number[i] = n % 10 + '0';
            n /= 10;
            i++;
        }
        while(i--) /* decrese i untill i = 0*/
        {
            add_to_buffer(number[i]);
        }
    }
    /*
    if (fill < 0)
    {
        fill = (fill * -1) - 1;
        while(fill)
        {
            add_to_buffer('.');
        }
    }
    */
    return (0);
}
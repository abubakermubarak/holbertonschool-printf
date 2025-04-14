#include "main.h"
#include <stdlib.h>

extern int n;
int print_hex_small(unsigned int long n)
{
    if (n == 0)
    {
        add_to_buffer('0');
    }
    char *hex = (char *) malloc(32 * sizeof(char));
    int i; 
    i = 0;
    while(n)
    {
        int reminder = n % 16;
        if (reminder < 10)
        {
            hex[i] = n % 16 + '0';
        }
        else
        {
            hex[i] = reminder - 10 + 'a';
        }
        n  = n / 16;
        i++;
    }
    while(i--)
    {
        add_to_buffer(hex[i]);
    }
    return(0);
}
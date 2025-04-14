#include "main.h"
#include <stdlib.h>

extern int n;
int print_binary(int long n)
{
    char *binary = (char *) malloc(32 * sizeof(char));
    int i; 
    i = 0;
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
        while(n)
        {
            binary[i] = n % 2 + '0';
            n  = n / 2;
            i++;
        }
        while(i--)
        {
            add_to_buffer(binary[i]);
        }
    }
    return(0);
}
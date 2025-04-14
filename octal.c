#include "main.h"
#include <stdlib.h>

extern int n;
int print_octal(unsigned int long n)
{
    char *octal = (char *) malloc(32 * sizeof(char));
    int i; 
    i = 0;
    while(n)
    {
        octal[i] = n % 8 + '0';
        n  = n / 8;
        i++;
    }
    while(i--)
    {
        add_to_buffer(octal[i]);
    }
    return(0);
}
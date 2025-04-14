#include "main.h"
#include <stdlib.h>

extern int n;
int print_unsigned_int(unsigned int long n)
{
    char *unsigned_int = (char *) malloc(32 * sizeof(char));
    int i; 
    i = 0;
    while(n)
    {
        unsigned_int[i] = n % 10 + '0';
        n  = n / 10;
        i++;
    }
    while(i--)
    {
        add_to_buffer(unsigned_int[i]);
    }
    return(0);
}
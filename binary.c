#include "main.h"
#include <stdlib.h>

extern int n;
int print_binary(unsigned int long n)
{
    char *binary = (char *) malloc(32 * sizeof(char));
    int i; 
    i = 0;
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
    return(0);
}
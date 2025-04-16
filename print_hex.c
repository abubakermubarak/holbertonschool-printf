#include "main.h"
#include <stdlib.h>
#include <stdbool.h>
extern int n;
int print_hex(unsigned int long n, char flag)
{
    bool small;
    bool address;
    if (flag == 'x')
    {
        small = true;
    }
    else if( flag == 'p')
    {
        small = true;
        address = true;
    }
    else
    {
        small = false;
        address = false;
    }
    if (n == 0)
    {
        add_to_buffer('0');
    }
    char *hex = (char *) malloc(32 * sizeof(char));
    int i; 
    i = 0;
    while(n)
    {
        if (address)
        {
            add_to_buffer('0');
            add_to_buffer('X');
        }
        int reminder = n % 16;
        if (reminder < 10)
        {
            hex[i] = n % 16 + '0';
        }
        else
        {
            if(small)
            {
                hex[i] = reminder - 10 + 'a';
            }
            else
            {
                hex[i] = reminder - 10 + 'A';
            }
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
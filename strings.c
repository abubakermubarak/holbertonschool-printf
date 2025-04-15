#include "main.h"
#include <string.h>
#include <ctype.h>
extern int n;
char rotate(char c, int n)
{
    if (isupper(c))
    {
        return (c - 'A' + n) % 26 + 'A';
    }
    else if (islower(c))
    {
        return (c - 'a' + n) % 26 + 'a';
    }
}
int print_string(char *string, char flag)
{
    int len = strlen(string);
    if (flag = 'r')
    {
        while (len--)
        {
            print_char(string[len]);
        }
    }
    else
    {
        while(*string)
        {
            char c =  *string;
            if (flag == 'R')
            {
                c = rotate(c, 13);
            }
            print_char(c);
            string++;
        }
    }
    return (0);
}
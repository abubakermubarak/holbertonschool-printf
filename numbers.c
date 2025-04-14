#include "main.h"
#include <stdlib.h>
#include <stdio.h>
extern int n;
int print_int(int long n)
{
    char *number = (char *) malloc(32 * sizeof(char)); /* size 4 bytes*/
    printf("inetrnal buffer made\n");
    int i = 0;
    if (n == 0)
    {
        add_to_buffer('0');
    }
    else
    {
        printf("NUMBER is posative\n");
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
    return (0);
}
#include "main.h"
#include <stdlib.h>
extern int n;
int print_int(int long n)
{
    char *number = (char *) malloc(32 * sizeof(char)); /* size 4 bytes*/
    int i = 0;
    if (n = 0)
    {
        add_to_buffer('0');
    }
    else
    {
        if (n < 0)
        {
            add_to_buffer('-');
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
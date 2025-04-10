#include <stdarg.h>
#include <unistd.h>
#include <string.h>
int print_buffer()
{
    write(1, buffer, i)
    i = 0;
    return (0);
}
int add_to_buffer(char c)
{
    if (i == BUFFER_SIZE)
    {
        print_buffer();
    }
    buffer[i++] = c;
    return (0);
}
int print_char(char c)
{
    /* if character is printable*/
    if (c > 31 || c < 127)
    {
        add_to_buffer(c);
    }
    return (0);
}   
void print_string(va_list ap)
{
}

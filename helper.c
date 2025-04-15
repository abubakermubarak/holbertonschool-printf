#include <unistd.h>
#define BUFFER_SIZE 1024000
extern  char *buffer;
extern int n;
void setBuffer(char *b){
    buffer=b;
}
int print_buffer(int index)
{
    write(1, buffer, index);
    index = 0;
    return (0);
}
int add_to_buffer(char c)
{
    if (n == BUFFER_SIZE)
    {
        int x =print_buffer(n);
    }
    buffer[n] = c;
    n++;
    return (0);
}
int print_char(char c)
{
    if (c > 31 || c < 127) /* if character is printable*/
    {
        add_to_buffer(c);
    }
    else
    {
        add_to_buffer('\\');
        add_to_buffer('x');
        print_hex(c, 'X');
    }
    return (0);
}   
int print_string(char *string)
{
    while (*string)
    {
        add_to_buffer(*string);
        string++;
    }
    return (0);
}

#include <stdarg.h>
#include <unistd.h>
#include <string.h>
#define BUFFER_SIZE 1024000

char *buffer;

void setBuffer(char *b){
    buffer=&b;
}

int print_buffer(int index)
{
    write(1, &buffer, index);
    index = 0;
    return (0);
}
int add_to_buffer(char c, int index)
{
    if (index == BUFFER_SIZE)
    {
        int x =print_buffer(index);
    }
    /*
    buffer[index++] = c;
    */
    char *ptr=&buffer[index];
    *ptr  = c;
    index++;
    return (0);
}
int print_char(char c, int index)
{
    if (c > 31 || c < 127) /* if character is printable*/
    {
        add_to_buffer(c, index);
    }
    return (0);
}   
int print_string(char *string, int index)
{
    while (*string)
    {
        print_char(*string, index);
        string ++;
    }
    return (0);
}

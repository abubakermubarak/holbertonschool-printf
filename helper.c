#include <stdarg.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>
#define BUFFER_SIZE 1024000
extern  char *buffer;
void setBuffer(char *b){
    buffer=b;
}

int print_buffer(int index)
{
    write(1, buffer, index);
    index = 0;
    return (0);
}
int add_to_buffer(char c, int index)
{
    //printf("i: %i\n", index);
    //printf("char: %c\n", c);
    if (index == BUFFER_SIZE)
    {
        int x =print_buffer(index);
    }
    buffer[index] = c;
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
    while (string[index] != '\0')
    {
        add_to_buffer(string[index], index);
        index++;
    }
    return (0);
}

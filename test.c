#include <stdio.h>
#include "main.h"
int main(void)
{
    char *s =  "this is a test";
    char c = 'A';
    // _printf("%s", s);
    // _pri9ntf("%c", c);
    //_printf("Abo Baker is an %c student", c);
    //printf("\n");
    //_printf("my name is %s my grade is:%c", "Abubaker", 'A');
    printf("\n");
    //_printf("%c%s", 'a',"bubaker");
    //printf("\n");
    _printf("my number: %i", -12345);
    //printf("\n");
    _printf("the number %b is  binary ", 65);
    printf("\n");
    _printf("the number %i in octal is : %o", 31, 31);
    printf("\n");
    _printf("unsigned_int: %u", 100);
    printf("\n");
    return (0);
}
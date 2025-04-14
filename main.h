#include <stdarg.h>
#ifndef FORMAT_TYPES_
#define FORMAT_TYPES_
#define BUFFER_SIZE 1024000
int _printf(const char *format, ...);
void setBuffer(char *b);
int print_buffer(int index);
int add_to_buffer(char c);
int print_char(char c);
int print_string(char *string);
int print_int(int long n);
int print_binary(unsigned int long n);
int print_octal(unsigned int long n);
#endif
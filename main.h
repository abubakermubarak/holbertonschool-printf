#include <stdarg.h>
#ifndef FORMAT_TYPES_
#define FORMAT_TYPES_
#define BUFFER_SIZE 1024
int _printf(const char *format, ...);
void setBuffer(char *b);
int print_buffer(int index);
int add_to_buffer(char c);
int print_char(char c);
int print_string(char *string, char flag);
int print_int(int long n, int width);
int print_binary(unsigned int long n);
int print_unsigned_int(unsigned int long n);
int print_octal(unsigned int long n);
int print_hex(unsigned int long n, char flag);
int number_length(int number);
int get_width( const char *format);
#endif
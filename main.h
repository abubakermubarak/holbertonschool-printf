#include <stdarg.h>
#ifndef FORMAT_TYPES_
#define FORMAT_TYPES_
#define BUFFER_SIZE 1024000
int _printf(const char *format, ...);
void print_char(va_list ap);
void print_string(va_list ap);
#endif
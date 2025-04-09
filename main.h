#include <stdarg.h>
#ifndef FORMAT_TYPES_
#define FORMAT_TYPES_


typedef struct format_types
{
	char identifier;
	void (*f)(va_list ap);
}f_dt;
int _printf(const char *format, ...);
void print_char(va_list ap);
void print_string(va_list ap);
#endif
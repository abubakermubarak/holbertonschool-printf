#include <stdarg.h>
#ifndef FORMAT_TYPES_
#define FORMAT_TYPES_
#include <stdarg.h>
typedef struct format_types
{
	char identifier;
	void (*f)(va_list ap);
}f_dt;
int _printf(const char *format, ...);
#endif
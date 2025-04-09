int _printf(const char *format, ...);
#ifndef FORMAT_TYPES_
#define FORMAT_TYPES_
typedef struct format_types
{
	char identifier;
	void (*f)(char *separator,va_list ap);
}f_dt
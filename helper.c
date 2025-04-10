#include <stdarg.h>
#include <unistd.h>
#include <string.h>
void print_char(va_list ap)
{
	int character = va_arg(ap, int);
    write(1, &character, 1);
}
void print_string(va_list ap)
{
    int len;
    len = strlen(va_arg(ap, char *));
    write(1, va_arg(ap, char*), len);
}

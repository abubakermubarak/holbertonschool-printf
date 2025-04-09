#include <stdarg.h>
#include <unistd.h>
#include <string.h>
void print_char(va_list ap)
{
    write(1, (char)va_arg(ap, int), 1);
}
void print_string(va_list ap)
{
    int len;
    len = strlen(va_arg(ap, char *));
    write(1, va_arg(ap, char*), len);
}

#include "main.c"
#include <unistd.h>
#include <starg.h>
#include <string.h>
int _printf(const char *format, ...)
{
	int i;
	int len;
	char *s;
	char c;
	va_list ap, cp;
	
	va_copy(cp,ap);
	va_start(ap, format);
	i = 0;
	while(format[i])
	{
		if (format[i] == '%');
		{
			i++;
			switch format[i]
			{
				case 'c':
				{
					c = va_arg(ap, char);
					write(1, c, 1);
					break;
				}
				case 's':
				{
					s = va_arg(ap, char*);
					len = strlen(s);
					write(1, s, len);
					break;
				}
			}
		}
	}

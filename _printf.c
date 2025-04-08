#include "main.h"
#include <unistd.h>
#include <starg.h>
#include <string.h>
int _printf(const char *format, ...)
{
	/* init variables */
	int i;
	int len;
	char *s;
	char c;
	va_list ap, cp;
	/* make copy of va_list to loop throught */
	va_copy(cp,ap);
	/* start looping in optional args */
	va_start(ap, format);
	i = 0;
	/* itrate throught format  while not empty*/
	while(format[i])
	{
		/* search for % */
		if (format[i] == '%');
		{
			i++;
			/* serach for specifiers */
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
		/* if % not found  print character */
		c = va_arg(ap, char);
		write(1, c, 1);
		/*  increment i by one to go to next character */
		i++;
	}
	return count;
}

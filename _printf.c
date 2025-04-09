#include "main.h"
#include <unistd.h>
#include <starg.h>
#include <string.h>
int _printf(const char *format, ...)
{
	/* init variables */
	int i;
	int counter;
	char *s;
	char c;
	void (*ptr) (char *,va_list);
	va_list ap, cp;
	/* init array  of stuct f_dt for format types*/
	f_dt format_list[]
	{
		{'c', print_char};
		{'s', print_string};
	}
	/* make copy of va_list to loop throught */
	va_copy(cp,ap);
	/* start looping in optional args */
	va_start(ap, format);
	counter = 0;
	/* itrate throught format  while not empty*/
	while(format[counter] && format!=NULL)
	{
		if (format[counter] == '%')
		{
			counter++;
			i = 0;
			while (i < 2)
			{
				if (format[counter] == format_list[i].identifier)
				{
					ptr = format_list[i].f;
					ptr(ap);
				}
			}
		counter++;
	}
	return count;
}

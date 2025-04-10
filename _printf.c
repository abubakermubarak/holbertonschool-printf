#include "main.h"
#include <unistd.h>
#include <stdarg.h>
#include <string.h>
int _printf(const char *format, ...)
{
	/* init variables */
	int counter;
	/*
	char *s;
	char c;
	*/
	char buffer = (char *) malloc(BUFFER_SIZE * sizeof(char));
	va_list ap, cp;
	/* init array  of stuct f_dt for format types*/
	f_dt list[]= {
		{'s', print_string},
		{'c', print_char}
	};
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
			/*
			i = 0;
			while (i < 2)
			{
				if (format[counter] == list[i].identifier)
				{
					ptr = list[i].f;
					ptr(ap);
				}
			
			}
			*/
		}
		switch format[counter]
		{
			case 'c':
			{
				print_char()
			}
		}
		counter++;
	}
	return (counter);
}

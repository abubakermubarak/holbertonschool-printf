#include "main.h"
#include <unistd.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
int counter;
char *buffer;
char character;
char *string;
int n;
int i;
int len;
int _printf(const char *format, ...)
{
	buffer = (char *) malloc(BUFFER_SIZE * sizeof(char));
	setBuffer(buffer);
	counter = 0;
	n = 0;
	va_list ap, cp;
	/* make copy of va_list to loop throught */
	va_copy(cp,ap);
	/* start looping in optional args */
	va_start(ap, format);
	/* itrate throught format  while not empty*/
	while(format[counter] && format!=NULL)
	{
		if (format[counter] != '%')
		{
			add_to_buffer(format[counter], n);
			n++;
		}

		
		else
		{
			counter++;
			printf("format: %c\n", format[counter]);
			switch (format[counter])
			{
				
				case 'c':
				{
					character = va_arg(ap, int);
					add_to_buffer(character, n);
					n++;
					break;
				}
				case 's':
				{
					string = va_arg(ap, char *);
					len = strlen(string);
					for (i = 0; i < len; i++)
					{
						add_to_buffer(string[i], n);
						n++;
					}
				}
			}
			
		}
		counter++;
	}
	print_buffer(n);
	return (counter);
}

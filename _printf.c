#include "main.h"
#include <unistd.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
char *buffer;
char character;
char *string;
int number;
int width;
int n;
int _printf(const char *format, ...)
{
	buffer = (char *) malloc(BUFFER_SIZE * sizeof(char));
	setBuffer(buffer);
	n = 0;
	va_list ap, cp;
	/* make copy of va_list to loop throught */
	va_copy(cp,ap);
	/* start looping in optional args */
	va_start(ap, format);
	/* itrate throught format  while not empty*/
	while(format!=NULL && *format)
	{
		if (*format != '%')
		{
			print_char(*format);
		}
		else
		{
			format++;
			switch (*format)
			{		
				case 'c':
				{		
					character = va_arg(ap, int);
					print_char(character);
					break;
				}
				case 's':
				case 'r'
				{
					string = va_arg(ap, char *);
					print_string(string);
					break;
				}
				case 'i':
				case 'd':
				{
					number = va_arg(ap, int);
					print_int(number);
					break;
				}
				case 'b':
				{
					number = va_arg(ap, int);
					print_binary(number);
					break;
				}
				case 'o':
				{
					number = va_arg(ap, int);
					print_octal(number);
					break;
				}
				case 'u':
				{
					number = va_arg(ap, int);
					print_unsigned_int(number);
					break;
				}
				case 'x':
				case 'X':
				case 'p':
				{
					number = va_arg(ap, int);
					print_hex(number, *format);
					break;
				}
			}
		}
		format++;
	}
	printf("buffer: %s\n", buffer);
	print_buffer(n);
	return (n);
}

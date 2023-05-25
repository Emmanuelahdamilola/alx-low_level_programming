#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - function that prints anything.
 * @format:  list of types of arguments passed to the function
 * Return:Always return 0
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *str, *s = "";

	va_list lst;

	va_start(lst, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", s, va_arg(lst, int));
					break;
				case 'i':
					printf("%s%d", s, va_arg(lst, int));
					break;
				case 'f':
					printf("%s%f", s, va_arg(lst, double));
					break;
				case 's':
					str = va_arg(lst, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", s, str);
					break;
				default:
					i++;
					continue;
			}
			s = ", ";
			i++;
		}
	}

	printf("\n");
	va_end(lst);
}


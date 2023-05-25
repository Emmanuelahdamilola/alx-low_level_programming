#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - function that prints numbers, followed by a new line.
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 * Return: If separator is NULL
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int i;

	va_start(nums, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(nums, int));

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(nums);

	printf("\n");
}


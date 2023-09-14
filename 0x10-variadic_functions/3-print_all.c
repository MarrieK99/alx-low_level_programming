#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - Print anything based on the format string
 * @format: A string containing the format specifier for each argument
 * @...: Variable number of arguments
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char *str, *separator = "";
	int i = 0;

	va_start(args, format);

	while (format && format[i])
	{
		switch (format[i])
		{
		case 'c':
		printf("%s%c", separator, va_arg(args, int));
		break;
		case 'i':
		printf("%s%d", separator, va_arg(args, int));
		break;
		case 'f':
		printf("%s%f", separator, va_arg(args, double));
		break;
		case 's':
		str = va_arg(args, char *);
		if (str == NULL)
			str = "(nil)";
		printf("%s%s", separator, str);
		break;
		default:
		i++;
		continue;
		}
	separator = ", ";
	i++;
	}

	va_end(args);
	printf("\n");
}

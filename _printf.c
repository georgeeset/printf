#include "main.h"

/**
 * _printf - format character string.
 * the format string composed of zero or more
 * directives with % sign just like printf
 *
 * @format: string containing directives and strings)
 * Return: length of string printed
 */
int _printf(const char *format, ...)
{
	int i, count = 0, found = 0;
	va_list data;

	va_start(data, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%' && found == 0)
		{
			count += _putchar(format[i]);
			found = 0;
		}
		else
		{
			if (found == 1)
			{
				switch (format[i])
				{
				case '%':
					count += _putchar(format[i]);
					break;
				case 's':
					count += _print_string(va_arg(data, char *));
					break;
				case 'c':
					count += _putchar(va_arg(data, int));
					break;
				default:
					count += _putchar(format[i]);
				}
				found = 0;
			}
			else
			{
				found = 1;
			}
		}
	}
	va_end(data);
	return (count);
}

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

	if (format == NULL)
		return (-1);
	va_start(data, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%' && found == 0)
		{
			count += _putchar(format[i]), found = 0;
		}
		else
		{
			if (found == 1)
			{
				count += switcher(data, format, i);
				found = 0;
			}
			else
			{
				if (format[i + 1] == '\0')
					return (-1);
				found = 1;
			}
		}
	}
	va_end(data);
	return (count);
}

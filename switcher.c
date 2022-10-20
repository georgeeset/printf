#include "main.h"
/**
 * switcher - uses switch to determine what to print
 * @data: lsit of data to scan
 * @format: string to beprinted
 * @i: index of format which we need to scann
 * Return: length of printed text
 */
int switcher(va_list data, const char *format, int i)
{
	int count = 0;

	switch (*(format + i))
	{
	case '%':
		count += _putchar(*(format + i));
		break;
	case 's':
		count += _print_string(va_arg(data, char *));
		break;
	case 'c':
		count += _putchar(va_arg(data, int));
		break;
	default:
		count += _putchar('%');
		count += _putchar(format[i]);
	}
	return (count);
}

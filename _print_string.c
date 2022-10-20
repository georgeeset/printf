#include "main.h"

/**
 * _print_string - prints string to screen
 * @data: pointer to string to be printed
 * Return: number of characters printed
 * excluding list termination.
 */

int _print_string(char *data)
{
	int i;
	char noVal[6] = "(null)";

	if (data == NULL)
	{
		for (i = 0; i < 6; i++)
			_putchar(noVal[i]);
	}
	else
	{
		for (i = 0; data[i] != '\0'; i++)
			_putchar(data[i]);
	}

	return (i);
}

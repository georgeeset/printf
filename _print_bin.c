#include "main.h"
/**
 * _pb - recursively print binary number
 * of a given integer
 * @num: given number
 * @count: pointer that keeps lenth of binary number printed;
 * Return: void
 */

void _pb(unsigned int num, int *count)
{
	if (num == 0)
	{
		_putchar('0');
		return;
	}

	*count += 1;
	_pb(num / 2, count);
	_putchar((num % 2) + 48);
}

/**
 * _print_bin - print number in binary form
 * @num: unsigned integer to be printed
 * Return: length of string
 */

int _print_bin(unsigned int num)
{
	int count = 0;

	_pb(num, &count);
	if (count == 0)
		return (1);
	return (count);
}

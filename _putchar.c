#include "main.h"

/**
 * _putchar - function to print a character
 * @c: character to be print
 *
 *
 * Return:Always 1 if successfully
 * else return -1 if unsuccessful
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

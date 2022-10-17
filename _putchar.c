#include <unistd.h>

/**
 * _putchar - function to print a character
 * @c: character to be print
 *
 *
 * Return:Always 1 if successfully
 * else return 0 if unsuccessful
 */
int _putchar(char c)
{
	if (c >= 0 && c <= 127)
	{
		return (write(1, &c, 1));
	}
	else
	{
		return (0);
	}
}

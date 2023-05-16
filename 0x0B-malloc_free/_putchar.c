#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: the character c to print
 *
 * Return: 0
 * On error, -1 is returned and errno is set appropriately
 */

_putchar(char c)
{
	return (write(1, &c, 1));
}

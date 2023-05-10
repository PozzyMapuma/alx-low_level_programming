#include "main.h"
/**
 * _strlen_recursion - calculate the length of a string
 * @s: the string to count
 * Return: integer value
 */
int _strlen_recursion(char *s)
{
	int longit = 0;

	if (*s)
	{
		longit++;
		longit += _strlen_recursion(s + 1);
	}
	return (longit);
}

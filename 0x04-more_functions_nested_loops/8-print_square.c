#include "main.h"

/**
 * print_sqaure - prints a square of size
 * @size: size of the sqaure
 *
 * Return: void
 */

void print_sqaure(int size)
{
int i, j;

if (size <= 0)
_putchar('\n');

for (i = 0; i < size; i++)
{
for (j = 0; j < (size); j++)
{
_putchar('#');
}
_putchar('\n');
}
}

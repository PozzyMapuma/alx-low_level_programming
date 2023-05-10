#include "main.h"

int actual_sqrt_recursion(int n, int i);
/**
* _sqrt_recursion - returns the natural sqaure root of a number
* @n: number to calculate sqaure root of
*
* Return: resulting sqaure root
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
* actual_sqrt_recursion - recurses to find natural sqaure root of number
* @n: number to calculate sqaure root of
* @i: iterator
*
* Return: resulting sqaure root
*/
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}

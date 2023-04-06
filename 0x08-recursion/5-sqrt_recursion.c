#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: The number whose square root is to be gotten.
 *
 * Return: Square root.
 */
int real_sqrt_recursion(int n, int i);

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (real_sqrt_recursion(n, 0));
}

int real_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (real_sqrt_recursion(n, i + 1));
}

#include "main.h"
/**
 * is_prime_number - returns 1 if the input integer is a prime number, otherwise return 0.
 * @n: value for assessment.
 * @i: iterator
 * real_prime - calculates if a number is normally a prime.
 * Return: 1 if n is a prime number, else return 0.
 */

int real_prime(int n, int i);

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (real_prime(n, n - 1));
}

int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (real_prime(n, i - 1));
}

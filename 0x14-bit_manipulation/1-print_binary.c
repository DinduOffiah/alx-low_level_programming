#include "main.h"

/**
 * print_binary -  prints the binary representation of a number.
 * @n: number.
 * Return: number representation.
 */
void print_binary(unsigned long int n)
{
	int i;
  num = 0;
	unsigned long int cur;

	for (i = 63; i >= 0; i--)
	{
		cur = n >> i;

		if (cur & 1)
		{
			_putchar('1');
			num++;
		}
		else if (num)
			_putchar('0');
	}
	if (!num)
		_putchar('0');
}

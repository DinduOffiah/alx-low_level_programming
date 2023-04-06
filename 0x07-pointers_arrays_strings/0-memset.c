#include "main.h"
/**
 * _memset - fills byte of a memory.
 * @s: memory allocator.
 * @b: constant byte.
 * @n: memory to be filled.
 * Return: a pointer to the memory area s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}

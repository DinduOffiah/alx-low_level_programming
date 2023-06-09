#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars.
 * @size: unsigned int size.
 * @c: char c.
 * Description: initializes created array of chars with a specific char.
 * Return: pointer to the array, or NULL if it fails.
 *
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	arr = malloc(sizeof(char) * size);
	if (size == 0 || arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;
	return (arr);
}

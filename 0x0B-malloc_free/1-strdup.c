#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: char.
 * Return: NULL.
 */
char *_strdup(char *str)
{
	char *cha;
	int i, j = 0;

	if (str == NULL)
		return (NULL);
  
	i = 0;
	while (str[i] != '\0')
		i++;

	cha = malloc(sizeof(char) * (i + 1));

	if (cha == NULL)
		return (NULL);

	for (j = 0; str[j]; j++)
		cha[j] = str[j];

	return (cha);
}

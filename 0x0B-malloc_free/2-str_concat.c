#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings.
 * @s1: string one.
 * @s2: string two.
 * Return: contents of s1, followed by the contents of s2, and null terminated.
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int f, s;

	if (s1 == NULL)
          {
            s1 = "";
          }

	if (s2 == NULL)
        { 
          s2 = "";
        }

	f = s = 0;
	while (s1[f] != '\0')
		f++;
	while (s2[s] != '\0')
		s++;
	concat = malloc(sizeof(char) * (f + s + 1));

	if (concat == NULL)
		return (NULL);
	f = s = 0;
	while (s1[f] != '\0')
	{
		concat[f] = s1[f];
		f++;
	}

	while (s2[s] != '\0')
	{
		concat[f] = s2[s];
		f++, s++;
	}
	concat[f] = '\0';
	return (concat);
}

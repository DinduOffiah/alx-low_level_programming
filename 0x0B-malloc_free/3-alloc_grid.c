#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: int width.
 * @height: int input.
 * Return: a pointer to a 2 dimensional array of integers and NULL on failure.
 */
int **alloc_grid(int width, int height)
{
	int **rtn;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	rtn = malloc(sizeof(int *) * height);

	if (rtn == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		rtn[x] = malloc(sizeof(int) * width);

		if (rtn[x] == NULL)
		{
			for (; x >= 0; x--)
				free(rtn[x]);

			free(rtn);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			rtn[x][y] = 0;
	}

	return (rtn);
}

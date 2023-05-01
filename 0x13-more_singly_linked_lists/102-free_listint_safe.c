#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - frees a list.
 * @h: pointer.
 * Return: the freed size of the list.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *temp, *loop_node;

	if (!h || !(*h))
		return (count);

	loop_node = *h;

	while (loop_node)
	{
		count++;
		if (loop_node->next >= loop_node)
		{
			free(loop_node);
			break;
		}
		temp = loop_node;
		loop_node = loop_node->next;
		free(temp);
	}

	*h = NULL;
	return (count);
}

#include <string.h>
#include <stddef.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list -  prints all the elements of a list_t list
 *
 * @h; A pointer to the first node of the linked list.
 *
 * Return: The number of nodes in the linked list.
 */

size_t print_list(const list_t *h)
{
	size_t no_of_nodes = 0;

	while (h != NULL)
	{

		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("%s\n", h->str);
		}
	no_of_nodes++;
	h = h->next;
	}
	return (no_of_nodes);
}

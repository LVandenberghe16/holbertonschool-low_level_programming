#include "lists.h"

/**
 * print_list - Prints all elements of a list_t list.
 * @h: Pointer to the first node of the list.
 *
 * Return: The total number of nodes in the list.
 */
size_t print_list(const list_t *h)
{
	size_t node_count = 0;

	for (; h != NULL; h = h->next, node_count++)
	{
		printf("[%u] %s\n", h->str ? h->len : 0, h->str ? h->str : "(nil)");
	}

	return (node_count);
}

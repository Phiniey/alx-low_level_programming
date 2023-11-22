#include "lists.h"
/**
 * print_listint - Function that prints all the elements of a listint_t list
 * @h: pointer to the structure
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *node = h;
	size_t cont = 0;

	while (node)
	{
		printf("%d\n", node->n);
		node = node->next;
		cont++;
	}
	return (cont);
}

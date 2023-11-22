#include "lists.h"
/**
 * listint_len -  Function that returns the number
 * of elements in a linked listint_t list
 * @h: pointer to the structure
 * Return: the number of nodes
 */

size_t list_len(const list_t *h)
{
	int cont = 0;

	while (h != NULL)
	{
		h = h->next;
		cont++;
	}
	return (cont);
}

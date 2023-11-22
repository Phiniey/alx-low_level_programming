#include "lists.h"
/**
 * listint_len - A function that returns the number
 * of elements in a linked listint_t list
 * @h: pointer to the structure
 * Return: the number of nodes
 */

size_t listint_len(const listint_t *h)
{
	int cont = 0;
	
	while (h != NULL)
	{
		h = h->next;
		cont++;
	}
	return (cont);
}

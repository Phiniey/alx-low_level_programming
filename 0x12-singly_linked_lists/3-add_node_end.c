#include "lists.h"
#include <string.h>

/**
 *add_node_end - Function that adds a new node at the end of a list
 *@head: pointer to a pointer to the head of a linked list
 *@str: integer into the nodes
 *Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;
	unsigned int i, count = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
		count++;
	new->len = count;
	new->next = NULL;
	temp = *head;

	if (temp == NULL)
		*head = new;
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
			temp->next = new;
		}
	}
	return (*head);
}

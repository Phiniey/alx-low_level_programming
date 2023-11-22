#include "lists.h"
/**
 * add_node -  Function that adds a new node at
 * the beginning of a listint_t list
 * @head: pointer to the pointer that points to the linked list
 * @str: string to store
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int j, count = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	for (j = 0; str[j] != '\0'; j++)
	{
		count++;
	}
	new->len = count;
	new->next = *head;
	*head = new;

	return (*head);
}

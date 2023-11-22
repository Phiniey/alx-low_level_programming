#include "lists.h"
/**
 *free_list - Function that frees a list
 *@head: pointer to the linked list
 *Return: No return
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}

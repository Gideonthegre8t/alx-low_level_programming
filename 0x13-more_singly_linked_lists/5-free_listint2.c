#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees a listint_t list and sets the head to NULL
 * @head: pointer to pointer to head node of list
 **/
void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
	current = *head;
	*head = (*head)->next;
	free(current);
	}

	*head = NULL;
}

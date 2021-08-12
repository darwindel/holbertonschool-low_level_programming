#include <stdio.h>
#include "lists.h"
/**
* free_listint - will free the listint_t list
* @head: beginning of the list to free
* Return: nothing
*/
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}

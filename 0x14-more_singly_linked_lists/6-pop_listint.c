#include <stdio.h>
#include "lists.h"
/**
* pop_listint - deletes the head node of a list and returns its data
* @head: the head node of the list
* Return: data of head node, or 0 if empty
*/
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int x;

	if (*head == NULL)
		return (0);

	temp = *head;
	x = temp->n;
	*head = temp->next;

	free(temp);
	return (x);
}

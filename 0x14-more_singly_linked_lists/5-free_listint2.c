#include "lists.h"
#include <stdio.h>
/**
* free_listint2 - function that frees listint_t list, sets head to null
*
* @head: the begining of list 
*
* Return: nothing
*/
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head)
	{
		while (*head)
		{
		temp = *head;
		*head = head->next;
		free(temp);
		}
	}
}

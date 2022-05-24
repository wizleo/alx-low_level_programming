#include "lists.h"
#include <stdlib.h>

/**
 *pop_listint - Delete the first element of a singly linked list.
 *@head: Pointer to a list.
 *Return: Integer if success.
 **/

int pop_listint(listint_t **head)
{
	listint_t *tp;

<<<<<<< HEAD
	int my_data
=======
	int my_data;
>>>>>>> a94975332d4878328c41e88c10e4074bb40d2fa5

	if (*head == NULL)
		return (0);

	tp = *head;
	*head = tp->next;
	my_data = tp->n;
	free(tp);
	return (my_data);
}

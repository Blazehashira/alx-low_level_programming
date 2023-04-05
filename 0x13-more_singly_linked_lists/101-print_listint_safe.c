#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list, avoiding loops
 * @head: a pointer to the first node of the list
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *slow, *fast;

	slow = head;
	fast = head;

	while (slow != NULL && fast != NULL && fast->next != NULL)
	{
		printf("[%p] %d\n", (void *) slow, slow->n);
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			printf("-> [%p] %d\n", (void *) slow, slow->n);
			printf("Loop detected, exiting.\n");
			exit(98);
		}

		count++;
	}
	if (slow == NULL || fast == NULL)
	{
		count = 0;
	}
	else
	{
		printf("[%p] %d\n", (void *) slow, slow->n);
		count++;
	}

	return (count);
}

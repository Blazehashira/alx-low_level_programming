#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

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

	slow = fast = head;

	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
		{
			printf("-> [%p] %d\n", (void *)slow, slow->n);
			count++;
			break;
		}
	}

	slow = head;
	while (slow)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		count++;
		if (slow == fast)
			break;
		slow = slow->next;
	}
	return (count);
}

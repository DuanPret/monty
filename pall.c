#include "monty.h"
/**
 * pall - prints the stack
 * @head: head of file
 * Return: nothing
 */
void pall(stack_t **head)
{
	stack_t *h;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}

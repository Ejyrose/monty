#include "monty.h"
/**
 * free_stack - frees a doubly linked list
 * @head: head of the stack
 */
@head: head of the stack
{
	stack_t *aux;

	aux = head;
	while (head)
	{
		aux = head->next;
		free(head);
		head = aux;
	}
}

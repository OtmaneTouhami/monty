#include "monty.h"

/**
 * _pall - pushes an element to the stack.
 * @stack: double pointer to header (top) of the stack.
 * @line_nb: counter for line number of the file.
 *
 * Return: void.
 */
void _pall(stack_t **stack, unsigned int line_nb)
{
	stack_t *current;

	(void) line_nb;
	current = *stack;
	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}

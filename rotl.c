#include "monty.h"

/**
 * _rotl - rotates the stack to the top.
 * @stack: double pointer to header (top) of the stack.
 * @line_nb: counter for line number of the file.
 *
 * Return: void.
 */
void _rotl(stack_t **stack, unsigned int line_nb)
{
	stack_t *tmp, *last;

	(void) line_nb;
	if (*stack == NULL || (*stack)->next == NULL)
		return;

	last = *stack;
	while (last->next != NULL)
		last = last->next;

	tmp = *stack;
	*stack = (*stack)->next;
	(*stack)->prev = NULL;
	tmp->next = NULL;
	tmp->prev = last;
	last->next = tmp;

}

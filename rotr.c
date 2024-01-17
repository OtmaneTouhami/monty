#include "monty.h"

/**
 * _rotr - rotates the stack to the bottom.
 * @stack: double pointer to header (top) of the stack.
 * @line_nb: counter for line number of the file.
 *
 * Return: void.
 */
void _rotr(stack_t **stack, unsigned int line_nb)
{
	stack_t *tmp, *last;

	(void) line_nb;
	if (*stack == NULL || (*stack)->next == NULL)
		return;

	last = *stack;
	while (last->next != NULL)
		last = last->next;

	tmp = *stack;
	*stack = last;
	(*stack)->prev->next = NULL;
	(*stack)->prev = NULL;
	(*stack)->next = tmp;
	tmp->prev = *stack;
}

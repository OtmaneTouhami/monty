#include "monty.h"

/**
 * _swap -  swaps the top two elements of the stack.
 * @stack: double pointer to header (top) of the stack.
 * @line_nb: counter for line number of the file.
 *
 * Return: void.
 */
void _swap(stack_t **stack, unsigned int line_nb)
{
	stack_t *tmp;

	if (!stack || !*stack || !((*stack)->next))
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_nb);
		free_stack_t(*stack);

		exit(EXIT_FAILURE);
	}

	tmp = *stack;
	*stack = (*stack)->next;
	(*stack)->prev = NULL;
	if ((*stack)->next)
		((*stack)->next)->prev = tmp;
	tmp->next = (*stack)->next;
	(*stack)->next = tmp;
	tmp->prev = *stack;
}

#include "monty.h"

/**
 * _pop - removes the top elements of the stack.
 * @stack: double pointer to header (top) of the stack.
 * @line_nb: counter for line number of the file.
 *
 * Return: void.
 */
void _pop(stack_t **stack, unsigned int line_nb)
{
	stack_t *current;

	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_nb);
		free_stack_t(*stack);

		exit(EXIT_FAILURE);
	}

	current = *stack;
	if ((*stack)->next)
		(*stack)->next->prev = NULL;
	*stack = (*stack)->next;
	free(current);
}

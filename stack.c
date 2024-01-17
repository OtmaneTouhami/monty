#include "monty.h"

/**
 * _stack - select stack mode (default).
 * @stack: double pointer to header (top) of the stack.
 * @line_nb: counter for line number of the file.
 *
 * Return: void.
 */
void _stack(stack_t **stack, unsigned int line_nb)
{
	(void) stack;
	(void) line_nb;
	queue_stack = 's';
}

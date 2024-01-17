#include "monty.h"

/**
 * _pstr - prints the string starting at the top of the stack.
 * @stack: double pointer to header (top) of the stack.
 * @line_nb: counter for line number of the file.
 *
 * Return: void.
 */
void _pstr(stack_t **stack, unsigned int line_nb)
{
	int n;
	stack_t *tmp = *stack;

	(void) line_nb;
	if (*stack == NULL)
	{
		printf("\n");
		return;
	}

	while (tmp != NULL)
	{
		n = tmp->n;
		if (!(n >= 1 && n <= 127) || n == 0)
			break;
		printf("%c", n);
		tmp = tmp->next;
	}
	printf("\n");
}

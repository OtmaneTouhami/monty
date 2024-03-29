#include "monty.h"

/**
 * _div -  divides the second top element of the stack by the top element
 * @head: double pointer to header (top) of the stack.
 * @line_nb: counter for line number of the file.
 *
 * Return: void.
 */
void _div(stack_t **head, unsigned int line_nb)
{
	stack_t *current = *head;
	int nnodes = 1; /*number of elements in stack*/

	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't div, stack too short\n", line_nb);
		free_stack_t(*head);

		exit(EXIT_FAILURE);
	}

	while (current->next != NULL)
	{
		current = current->next;
		nnodes++;
	}

	if (nnodes + 1 <= 2)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", line_nb);
		free_stack_t(*head);

		exit(EXIT_FAILURE);
	}

	current = *head; /*current equals to head to make division*/

	if (current->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_nb);
		exit(EXIT_FAILURE);
	}

	current->next->n = current->next->n / current->n; /*do the division*/

	*head = current->next;
	free(current);
	current->prev = NULL;
}

#ifndef _MONTY_H_
#define _MONTY_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <unistd.h>
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_nb);
} instruction_t;

extern char queue_stack;

void _add(stack_t **stack, unsigned int line_nb);
void _div(stack_t **stack, unsigned int line_nb);
void _mod(stack_t **stack, unsigned int line_nb);
void _mul(stack_t **stack, unsigned int line_nb);
void _nop(stack_t **stack, unsigned int line_nb);
void _pall(stack_t **stack, unsigned int line_nb);
void _pint(stack_t **stack, unsigned int line_nb);
void _pop(stack_t **stack, unsigned int line_nb);
void _push(stack_t **stack, unsigned int line_nb);
void _sub(stack_t **stack, unsigned int line_nb);
void _swap(stack_t **stack, unsigned int line_nb);

void _pchar(stack_t **stack, unsigned int line_nb);
void _pstr(stack_t **stack, unsigned int line_nb);
void _rotr(stack_t **stack, unsigned int line_nb);
void _rotl(stack_t **stack, unsigned int line_nb);

void _stack(stack_t **stack, unsigned int line_nb);
void _queue(stack_t **stack, unsigned int line_nb);

/**
 * get_opcode - reads opcode and verifies if is valid.
 * @stack: double pointer to header (top) of the stack.
 * @line_nb: counter for line number of the file.
 * @code: code to operate.
 *
 * Return: void.
 */
void get_opcode(stack_t **stack, unsigned int line_nb, char *code);
void free_stack_t(stack_t *head);
void add_node(stack_t **stack, int argument);
void add_node_queue(stack_t **stack, int argument);

#endif /*_MONTY_H_ */

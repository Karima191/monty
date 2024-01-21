#include "monty.h"

/**
* pop - pops removes the top element of the stack
* @st: stack given by main in main.c
* @amt: line number for print error messages
*/
void pop(stack_t **st, unsigned int amt)
{
	stack_t *tp = NULL;

	if (!st || !*st)
	{
		fprintf(stderr, "L%u: can't pop an empty stack\n", amt);
		exit(EXIT_FAILURE);
	}
	tp = (*st)->next;
	free(*st);
	*st = tp;
	if (!*st)
		return;
	(*st)->prev = NULL;
}

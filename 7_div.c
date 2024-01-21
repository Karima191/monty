#include "monty.h"

/**
 * div_ - divides the second top element of the stack
 * by the top element of the stack.
 * @st: stack given by main
 * @amt: ammount line counter
 */

void div_(stack_t **st, unsigned int amt)
{
	int qt;

	if (!st || !*st || !((*st)->next))
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", amt);
		exit(EXIT_FAILURE);
	}
	if (((*st)->n) == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", amt);
		exit(EXIT_FAILURE);
	}

	qt = ((*st)->next->n) / ((*st)->n);
	pop(st, amt);
	(*st)->n = qt;
}

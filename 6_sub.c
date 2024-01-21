#include "monty.h"

/**
 * sub_ - subtracts the top element of the stack
 * from the second top element of the stack.
 * @st: stack given by main
 * @amt: ammount line counter
 */

void sub_(stack_t **st, unsigned int amt)
{
	int dif;

	if (!st || !*st || !((*st)->next))
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", amt);
		exit(EXIT_FAILURE);
	}

	dif = ((*st)->next->n) - ((*st)->n);
	pop(st, amt);
	(*st)->n = dif;
}

#include "monty.h"

/**
 * mul_ - multiplies the second top element of the stack
 * with the top element of the stack.
 * @st: stack given by main
 * @amt: ammount line counter
 */

void mul_(stack_t **st, unsigned int amt)
{
	int pd;

	if (!st || !*st || !((*st)->next))
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", amt);
		exit(EXIT_FAILURE);
		return;
	}

	pd = ((*st)->next->n) * ((*st)->n);
	pop(st, amt);
	(*st)->n = pd;
}

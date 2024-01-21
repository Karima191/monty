#include "monty.h"

/**
 * mod_ - computes the rest of the division
 * of the second top element of the stack
 * by the top element of the stack.
 * @st: stack given by main
 * @amt: line counter
 */

void mod_(stack_t **st, unsigned int amt)
{
	int modulo;

	if (!st || !*st || !((*st)->next))
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", amt);
		exit(EXIT_FAILURE);
	}
	if (((*st)->n) == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", amt);
		exit(EXIT_FAILURE);
	}
	modulo = ((*st)->next->n) % ((*st)->n);
	pop(st, amt);
	(*st)->n = modulo;
}

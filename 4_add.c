#include "monty.h"

/**
 * add_ - adds the top two elements of the stack
 * @st: stack given by main
 * @amt: ammount line counter
 */
void add_(stack_t **st, unsigned int amt)
{
	int s1;

	if (!st || !*st || !((*st)->next))
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", amt);
		exit(EXIT_FAILURE);
	}
	s1 = ((*st)->next->n) + ((*st)->n);
	pop(st, amt);
	(*st)->n = s1;
}

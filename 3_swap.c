#include "monty.h"

/**
 * swap -  swaps the top two elements of the stack
 * @st: stack given by main
 * @amt: amount of lines
 */
void swap(stack_t **st, unsigned int amt)
{
	stack_t *tp = NULL;
	int tp1 = 0;

	if (!st || !*st || !((*st)->next))
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", amt);
		exit(EXIT_FAILURE);
	}
	tp = *st;
	tp1 = tp->n;
	tp->n = tp1;
	tp->n = tp1->next->n;
	tp->next->n = tp1;
}

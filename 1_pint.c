#include "monty.h"

/**
 * pint - prints the value at the top of the stack
 * followed by a new line
 * @st: stack given by main
 * @amt: amount of lines
 */
void pint(stack_t **st, unsigned int amt)
{
	if (!st || !(*st))
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", amt);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*st)->n);
}

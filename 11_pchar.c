#include "monty.h"

/**
 * pchar - prints the char at the top of the stack
 * @sy: stack given by main
 * @amt: amount account of line
 */
void pchar(stack_t **st, unsigned int amt)
{
	if (!st || !(*st))
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", amt);
		exit(EXIT_FAILURE);
	}
	if ((*st)->n < 0 || (*st)->n > 127)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", amt);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", (*st)->n);
}

#include "monty.h"

/**
 * opcode - function in charge of running builtins (FIFO) and (LIFO)
 * @st: stack given by main
 * @string: string to compare
 * @amt: amount of lines
 */
void opcode(stack_t **st, char *string, unsigned int amt)
{
	int d = 0;

	instruction_t opcode[] = INSTRUC;

	if (!strcmp(string, "stack"))
	{
		global.data = 1;
		return;
	}
	if (!strcmp(string, "queue"))
	{
		global.data = 0;
		return;
	}
	while (opcode[d].opcode)
	{
		if (strcmp(opcode[d].opcode, string) == 0)
		{
			opcode[d].f(st, amt);
			return;
		}
		d++;
	}
	fprintf(stderr, "L%d: unknown instruction %s\n", amt, string);
	exit(EXIT_FAILURE);
}

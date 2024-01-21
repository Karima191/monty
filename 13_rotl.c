#include "monty.h"

/**
* rotl - rotates the stack to the top.
* @st: stack head
* @amt: line count
*/
void rotl(stack_t **st, unsigned int amt)
{
	stack_t *l1;
	stack_t *l2;

	(void) cnt;
	if (!st || !*st || !(*st)->next)
		return;
	l1 = l2 = *st;

	while (l2->next)
		l2 = l2->next;
	l2->next = l1;
	l1->prev = l2;
	*st = l1->next;
	(*st)->prev->next = NULL;
	(*st)->prev = NULL;
}

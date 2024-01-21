#include "monty.h"

/**
* rotr - rotates the stack to the bottom.
* @st: stack head
* @amt: amount of line count
*/

void rotr(stack_t **st, unsigned int amt)
{
	stack_t *bt;
	stack_t *pv;

	(void) amt;
	if (!st || !*st || !(*st)->next)
		return;
	bt = *st;
	while (bt->next)
		bt = bt->next;
	pv = bt->prev;
	bt->next = *st;
	bt->prev = NULL;
	pv->next = NULL;
	(*st)->prev = bt;
	*st = bt;
}

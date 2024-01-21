#include "monty.h"

/**
 * pstr - prints the string starting at the top of the stack,
 * @st: stack given by main
 * @amt: line counter
 */void pstr(stack_t **st, unsigned int amt __attribute__((unused)))
{
        stack_t *cr = *st;

        while (cr)
        {
                if (cr->n <= 0 || cr->n > 127)
                        break;
                putchar((char) cr->n);
                cr = cr->next;
        }
        putchar('\n');
}

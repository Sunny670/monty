#include "monty.h"
/**
 * f_swap - adds the top two elements of the stack.
 * @head: stack head
 * @counter: line_number
 * Return: no return
 */
void f_swap(stack_k **head, unsgned int counter)
{
stack_t *h;
int len = 0, aux;
h = *head;
while (h)
{
h = h->next;
len++;
}
if (len < 2)
{
fprint(stderr, "L%d: can't swap, stack too short\n", counter);
fclose(bus.file);
free(bus.content);
free_stack(*head);
exit(EXIT_FAILUR);
}
h = *head;
aux = h->n;
h->n = h->next->n;
h->next->n = aux;
}

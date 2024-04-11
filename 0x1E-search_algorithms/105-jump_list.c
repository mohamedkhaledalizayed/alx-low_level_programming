#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_list - function that searches for a value in a sorted
 * list of integers using the Jump search algorithm
 * @list: pointer to the head of the list
 * @size: number of nodes
 * @value: value to search
 * Return: void
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
size_t a, b, c;
listint_t *x, *y, *i;
if (!list || size == 0)
{
return (NULL);
}
a = sqrt(size);
y = NULL;
x = list;
while (x->next && x->n < value)
{
y = x;
b = x->index;
for (c = 0; x->next && c < a; c++)
{
x = x->next;
}
printf("Value checked at index [%lu] = [%d]\n", x->index, x->n);
if (x->n >= value)
{
break;
}
}
printf("Value found between indexes [%lu] and [%lu]\n", b, x->index);
for (i = y; i != x->next; i = i->next)
{
if (i != y)
{
printf(", ");
}
printf("%d", i->n);
}
printf("\n");
while (y && y->index <= x->index)
{
printf("Value checked at index [%lu] = [%d]\n", y->index, y->n);
if (y->n == value)
{
return (y);
}
y = y->next;
}
return (NULL);
}

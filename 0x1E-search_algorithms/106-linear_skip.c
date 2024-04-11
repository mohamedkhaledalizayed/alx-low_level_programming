#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "search_algos.h"

/**
 * linear_skip - function that searches for a value in a
 * sorted skip list of integers
 * @list: pointer to the head of the skip list
 * @value: value to search
 * Return: void
 */

skiplist_t *linear_skip(skiplist_t *list, int value)
{
skiplist_t *a, *b;
if (!list)
{
return (NULL);
}
a = list;
while (a && a->express && a->express->n < value)
{
printf("Value checked at index [%lu] = [%d]\n",
		a->express->index, a->express->n);
a = a->express;
}
printf("Value found between indexes [%lu] and [%lu]\n",
		a->index, a->express->index);
b = a;
while (b && b->n < value)
{
printf("Value checked at index [%lu] = [%d]\n", b->index, b->n);
b = c->next;
}
if (!b)
{
printf("Value checked at index [%lu] = [%d]\n", a->index, a->n);
}
while (a && a->n < value)
{
a = a->next;
}
return (a && a->n == value ? a : NULL);
}

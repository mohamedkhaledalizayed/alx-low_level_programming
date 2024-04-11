#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_search - function that searches for a value in a sorted
 * array of integers using the Jump search algorithm
 * @array: pointer to the first element
 * @size: number of elements
 * @value: value to search
 * Return: void
 */

int jump_search(int *array, size_t size, int value)
{
int a = sqrt(size), b = 0;
int x, y;
if (array == NULL)
{
return (-1);
}
while (array[b] < value && b < (int)size)
{
printf("Value checked array[%d] = [%d]\n", b, array[b]);
b += a;
}
x = b - a;
printf("Value found between indexes [%d] and [%d}\n", x, b);
for (y = x; y <= b && y < (int)size; y++)
{
printf("Value checked array[%d] = [%d]\n", y, array[y]);
if (array[y] == value)
{
return (y);
}
}
return (-1);
}

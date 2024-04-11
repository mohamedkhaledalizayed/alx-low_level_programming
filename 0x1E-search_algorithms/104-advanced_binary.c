#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

int advanced_recur(int *array, int low, int high, int value);
/**
 * advanced_binary - function that searches for a value in a
 * sorted array of integers
 * @array: pointer to the first element
 * @size: number of elements
 * @value: value to search
 * Return: void
 */

int advanced_binary(int *array, size_t size, int value)
{
if (array == NULL || size == 0)
{
return (-1);
}
return (advanced_recur(array, 0, size - 1, value));
}
/**
 * advanced_recur - function that searches recursively
 * @array: array of integers
 * @low: integer
 * @high: integer
 * @value: integer
 * Return: void
 */
int advanced_recur(int *array, int low, int high, int value)
{
int a, x;
if (low > high)
{
return (-1);
}
printf("Searching in array: ");
for (x = low; x <= high; x++)
{
if (x != low)
{
printf(", ");
}
printf("%d", array[x]);
}
printf("\n");
a = low + (high - low) / 2;
if (array[a] == value)
{
if (a == low || array[a - 1] != value)
{
return (a);
}
else
{
return (advanced_recur(array, low, a, value));
}
}
if (array[a] < value)
{
return (advanced_recur(array, a + 1, high, value));
}
else
{
return (advanced_recur(array, low, a - 1, value));
}
}

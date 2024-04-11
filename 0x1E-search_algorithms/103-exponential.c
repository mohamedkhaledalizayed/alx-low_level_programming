#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * exponential_search - function that searches for a value in a sorted
 * array of integers using the Exponential search algorithm
 * @array: pointer to the first element
 * @size: number of elements
 * @value: the value to search
 * Return: void
 */

int exponential_search(int *array, size_t size, int value)
{
size_t a = 1;
size_t x, y;
if (array == NULL || size == 0)
{
return (-1);
}
if (array[0] == value)
{
return (0);
}
while (a < size && array[a] <= value)
{
printf("Value checked array[%lu] = [%d]\n", a, array[a]);
a *= 2;
}
x = a / 2;
y = (a < size) ? a : size - 1;
printf("Value found between indexes [%lu] and [%lu]\n", x, y);
return (binary_search(array + x, y - x, value));
}
/**
 * binary_search - function that searches for a value in a sorted
 * array of integers using the Binary search algorithm
 * @array: pointer to the first element of the array
 * @size: number of elements
 * @value: value to search
 * Return: void
 */
int binary_search(int *array, size_t size, int value)
{
size_t a = 0, b = size - 1;
size_t x;
size_t y;
if (array == NULL)
{
return (-1);
}
while (a <= b)
{
x = a + (b - a) / 2;
printf("Searching in array: ");
for (y = a; y <= b; y++)
{
if (y != a)
{
printf(", ");
}
printf("%d", array[y]);
}
printf("\n");
if (array[x] == value)
{
return (x);
}
else if (array[x] < value)
{
a = x + 1;
}
else
{
b = x - 1;
}
}
return (-1);
}

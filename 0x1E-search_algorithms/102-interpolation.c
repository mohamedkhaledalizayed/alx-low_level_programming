#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * interpolation_search - function that searches for a value in a
 * sorted array of integers using the Interpolation search algorithm
 * @array: pointer to the first element
 * @size: number of elements
 * @value: value to search
 * Return: void
 */

int interpolation_search(int *array, size_t size, int value)
{
int low = 0, high = size - 1;
size_t pos;
if (array == NULL || size == 0)
{
return (-1);
}
while (low <= high && value >= array[low] && value <= array[high])
{
pos = low + (((double)(high - low) / (array[high] - array[low]))
		* (value - array[low]));
printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
if (array[pos] == value)
{
return (pos);
}
else if (array[pos] < value)
{
low = pos + 1;
}
else
{
high = pos - 1;
}
}
printf("Value checked array[%d] is out of range\n", high);
return (-1);
}

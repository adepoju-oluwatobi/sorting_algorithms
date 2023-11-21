#include "sort.h"
/**
 * bubble_sort - sorts an array of ints in ascending order with Bubble sort.
 * @array: Array to convert to a doubly linked list.
 * @size: size of Array.
 */
void bubble_sort(int *array, size_t size)
{
	int swtch = 0;
	unsigned int index, first;
	unsigned int last;

	if (array == NULL)
		return;
	last = size - 1;
	for (first = 0; first < last; first++)
	{
		for (index = 0; index < last - first; index++)
		{
			if (array[index] > array[index + 1])
			{
				swtch = array[index];
				array[index] = array[index + 1];
				array[index + 1] = swtch;
				print_array(array, size);
			}
		}
	}
}

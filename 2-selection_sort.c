#include "sort.h"
/**
 *  selection_sort - sorts an array order using the Selection sort.
 *  @array: Array
 *  @size: Size of the array.
 */
void selection_sort(int *array, size_t size)
{
	unsigned int count, my_value, temp, swp;

	for (count = 0; count < size - 1; count++)
	{
		swp = count;
		for (my_value = count + 1; my_value < size; my_value++)
		{
			if (array[my_value] < array[swp])
				swp = my_value;
		}

		if (swp != count)
		{
			temp = array[count];
			array[count] = array[swp];
			array[swp] = temp;
			print_array(array, size);
		}
	}
}

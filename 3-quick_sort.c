#include "sort.h"

/**
 * lomuto_partition - Partitions the array using the Lomuto scheme
 * @array: The array to be sorted
 * @low: The starting index of the partition
 * @high: The ending index of the partition (the pivot)
 * @size: Total size of the array (needed for printing)
 *
 * Return: The final index of the pivot
 */
int lomuto_partition(int *array, int low, int high, size_t size)
{
	int pivot = array[high];
	int i = low;
	int j = low;
	int temp;

	while (j < high)
	{
		if (array[j] < pivot)
		{
			if (array[i] != array[j])
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
				print_array(array, size);
			}
			i++;
		}
		j++;
	}

	if (array[i] != array[high])
	{
		temp = array[i];
		array[i] = array[high];
		array[high] = temp;
		print_array(array, size);
	}

	return (i);
}

/**
 * quick_sort_recursive - Implements the quick sort algorithm recursively
 * @array: The array to be sorted
 * @low: The starting index
 * @high: The ending index
 * @size: Total size of the array
 */
void quick_sort_recursive(int *array, int low, int high, size_t size)
{
	int pivot_idx;

	if (low < high)
	{
		pivot_idx = lomuto_partition(array, low, high, size);

		quick_sort_recursive(array, low, pivot_idx - 1, size);
		quick_sort_recursive(array, pivot_idx + 1, high, size);
	}
}

/**
 * quick_sort - Sorts an array of integers in ascending order using Quick sort
 * @array: The array to be sorted
 * @size: Size of the array
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	quick_sort_recursive(array, 0, size - 1, size);
}

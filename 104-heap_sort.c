#include "sort.h"

/**
 * stupify - Recursive heapSort
 * @array: Array of integers
 * @heap: Size of heap data
 * @i: Index
 * @size: Size of array
 */
void stupify(int *array, int heap, int i, int size)
{
    int lr = i, left = 2 * i + 1, right = 2 * i + 2, t;

    if (left < heap && array[left] > array[lr])
        lr = left;
    if (right < heap && array[right] > array[lr])
        lr = right;
    if (lr != i)
    {
        t = array[i], array[i] = array[lr], array[lr] = t;
        print_array(array, size);
        stupify(array, heap, lr, size);
    }
}
/**
* heap_sort - Sorts array with heap sort algo
* @array: array to sort
* @size: Size of array to sort
*/

void heap_sort(int *array, size_t size)
{
	int i = size / 2 - 1, temp;

	if (array == NULL || size < 2)
		return;
	for (; i >= 0; i--)
		stupify(array, size, i, size);
	for (i = size - 1; i >= 0; i--)
	{
		temp = array[0];
		array[0] = array[i];
		array[i] = temp;
		if (i > 0)
			print_array(array, size);
		stupify(array, i, 0, size);
	}

}

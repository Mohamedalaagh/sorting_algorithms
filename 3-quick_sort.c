#include "sort.h"

/**
 * swap - Swapping two integers
 * @a: Integer
 * @b: Integer
 * Return: (void) Swapped integers
 */
void swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}
/**
 * partition - an array using a pivot
 * @array: Array
 * @low: Low index
 * @high: High index
 * @size: Size of array (size_t)
 * Return: Index of pivot (int)
 */
int partition(int *array, int low, int high, size_t size)
{
    int pivot = array[high];
    int i = low - 1, j;

    for (j = low; j <= high; j++)
    {
        if (array[j] <= pivot)
        {
            i++;
            if (i != j)
            {
                swap(&array[i], &array[j]);
                print_array(array, size);
            }
        }
    }

    return i;
}
/**
 * lomuto_qsort - Sorting an Array
 * @array: Array to be sorted
 * @low: The lowest value of the array
 * @high: Highest value of the array
 * @size: Size of The Array
 * Return: void
 */
void lomuto_qsort(int *array, int low, int high, size_t size)
{
    int k;

    if (low < high)
    {
        k = partition(array, low, high, size);
        lomuto_qsort(array, low, k - 1, size);
        lomuto_qsort(array, k + 1, high, size);
    }
}
/**
 * quick_sort - Quick Sorting Algorithme using lomuto partition
 * @array: Array to sort
 * @size: Size of The Array
 * Return: Sorted Array (void)
 */
void quick_sort(int *array, size_t size)
{
	lomuto_qsort(array, 0, size - 1, size);
}

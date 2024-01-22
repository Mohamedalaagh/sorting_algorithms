#include "sort.h"

/**
 * selection_sort - Function that sort array using the Selection sort algorithm
 * @array: List with numbers
 * @size: Size of the array
 */
void selection_sort(int *array, size_t size)
{
    size_t i, idx;
    int tmp, swap, flg = 0;

    if (array == NULL)
        return;

    for (i = 0; i < size; i++)
    {
        tmp = i;
        flg = 0;

        for (idx = i + 1; idx < size; idx++)
        {
            if (array[tmp] > array[idx])
            {
                tmp = idx;
                flg += 1;
            }
        }

        swap = array[i];
        array[i] = array[tmp];
        array[tmp] = swap;

        if (flg != 0)
            print_array(array, size);
    }
}


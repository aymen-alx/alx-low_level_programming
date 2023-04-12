#include "search_algos.h"
#include <stdio.h>

/**
 * binary_search - binary search implementation
 * @array: list of element
 * @size: list size
 * @value: searched value
 * Return: searched value index or -1
 */
int binary_search(int *array, size_t size, int value)
{

    size_t index, low, high;

    if (array == NULL)
        return (-1);

    for (low = 0, high = size - 1; high >= low;)
    {
        printf("Searching in array: ");
        for (index = low; index < high; index++)
            printf("%d, ", array[index]);
        printf("%d\n", array[index]);

        index = low + (high - low) / 2;
        if (array[index] == value)
            return (index);
        if (array[index] > value)
            high = index - 1;
        else
            low = index + 1;
    }

    return (-1);
}

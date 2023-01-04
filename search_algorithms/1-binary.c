#include "search_algos.h"
/**
 * linear_search - search algorithms
 * @array: list of integer
 * @star: from start
 * @stop: from stop
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i = 0;

	while (i <= size) {
        int m = i + (size - i) / 2;
		printf("Searching in array: ");
        if (array[m] == value)
            return m;
 
        if (array[m] < value)
            i = m + 1;
		printf(", %d", array[i]);
        else
            size = m - 1;
		printf("%d", array[i]);
    }
    return -1;
}

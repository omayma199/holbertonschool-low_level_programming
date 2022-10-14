#include "main.h"
#include <stdio.h>
/**
 * * print_diagsums-function that prints the sum of the two dgnls of matrix.
 * @a: matrice 
 * @size: size
 * Return: Nothing
 */
void print_diagsums(int *a, int size)
{
        int i, sum, sizer;

        i = 0;
        sum = 0;
        sizer = size * size;

        while (i < sizer)
        {
                if (i % (size + 1) == 0)
                        sum += a[i];
                i++;
        }
        printf("%i, ", sum);
        i = 0;
        sum = 0;
        while (i < sizer)
        {
                if (i % (size - 1) == 0 && i != (sizer - 1) && i != 0)
                       sum += a[i];
                i++;
        }
        printf("%i\n", sum);
}

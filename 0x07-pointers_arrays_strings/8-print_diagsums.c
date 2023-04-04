#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a
 * square matrix of integers
 * @a: the array
 * @size: the size of the array
 *
 * Return: Nothing
 */
void print_diagsums(int *a, int size)
{
	int i;
	int lsum = 0;
	int rsum = 0;
	int j = size - 1;

	for (i = 0; i < size; i++)
	{
		lsum += a[i][i];
		rsum += a[j][i];
		j--;
	}
	printf("%d, %d", lsum, rsum);
}

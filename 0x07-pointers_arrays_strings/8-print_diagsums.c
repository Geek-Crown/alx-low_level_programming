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
	int i, j, lsum, rsum;

	lsum = 0;
	rsum = 0;
	for (i = 0; i < size; i++)
	{
		lsum += a[(size + 1) * i];
	}
	for (j = 0; j < size; j++)
	{
		rsum += a[(size - 1) * (j + 1)];
	}
	printf("%d, %d", lsum, rsum);
}

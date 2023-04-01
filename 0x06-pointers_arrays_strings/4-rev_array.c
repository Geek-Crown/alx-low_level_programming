#include <stdio.h>
#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: the array
 * @n: number of elements of the array
 *
 * Return: a void function
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int arr[n];

	while (i < n)
	{
		arr[i] = a[n - i - 1];
		i++
	}
	*a = *arr;
}

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
	int arr[n];

	for (i = 0; i < n; i++)
	{
		arr[i] = a[n-i-1];
	}
	a = arr;
}

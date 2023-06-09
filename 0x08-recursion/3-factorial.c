#include "main.h"

/**
 * factorial - returns the factorial of a number
 * @n: the number
 *
 * Return: If n > 0 - the factorial of n or -1 if n < 0 to indicate an error.
 */
int factorial(int n)
{
	int result = n;

	if (n < 0)
		return (-1);

	else if (n >= 0 && n <= 1)
		return (1);

	result *= factorial(n - 1);

	return (result);
}

#include "main.h"

/**
 * _islower - outputs true if c is lower case and false if otherwise
 * @c: single letter input
 * Return: Return 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

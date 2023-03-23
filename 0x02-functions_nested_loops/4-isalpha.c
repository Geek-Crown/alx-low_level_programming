#include "main.h"

/**
 * _alpha - outputs true if c is either lower case or uppercase and false if otherwise
 * @c: single letter input
 * Return: Return 0
 */

int _isalpha(int c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
		return (1);
	else
		return (0);
}

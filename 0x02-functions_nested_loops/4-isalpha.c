#include "main.h"

/**
 * _isalpha - outputs true if c is a letter and false if otherwise
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

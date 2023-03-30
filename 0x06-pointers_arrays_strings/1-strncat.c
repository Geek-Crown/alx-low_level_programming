#include "main.h"
#include <string.h>

/**
 * _strncat - concatenate two strings using n size
 * @dest: first string
 * @src: second string
 * @n: helps to take the number of bytes in second string to add to first
 *
 * Return: the concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	char *str;

	str = strncat(dest, src, n);
	return (str);
}

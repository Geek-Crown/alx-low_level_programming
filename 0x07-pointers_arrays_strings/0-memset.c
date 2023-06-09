#include "main.h"

/**
 * _memset - a fills the first n bytes of the memory area pointed
 * to by s with the constant byte b
 * @s: a buffer that points to the array
 * @b: the constant character
 * @n: the number of bytes used in editing s
 *
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}

	return (s);
}

#include <string.h>
#include "main.h"

/**
 * _strncpy - copies the src to the dest using n
 * @dest: first string to overwrite
 * @src: second string to copy
 * @n: byte representation for src
 *
 * Return: copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *str;

	str = strncpy(dest, src, n);
	return (str);
}

#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _strcat - helps to concatenate two strings
 * @dest: the first string
 * @src: the second string
 *
 * Return: the two concatenated strings
 */
char *_strcat(char *dest, char *src)
{
	char *str;

	str = strcat(dest, src);
	return (str);
}

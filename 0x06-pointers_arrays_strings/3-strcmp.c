#include "main.h"
#include <string.h>

/**
 * _strcmp - compare s1 and s2
 * @s1: first string
 * @s2: second string
 *
 * Return: integer value of less than 0, 0 or greater than 0
 */
int _strcmp(char *s1, char *s2)
{
	int cmp;

	cmp = strcmp(s1, s2);
	return (cmp);
}

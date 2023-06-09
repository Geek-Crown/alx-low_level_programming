#include "main.h"

/**
 * _strstr - Function that locates a substring
 * @haystack: first character pointer
 * @needle: second character pointer
 *
 * Return: haystack
 */

char *_strstr(char *haystack, char *needle)
{
	int count;

	for (; haystack[0]; haystack++)
	{
		for (count = 0; haystack[count] == needle[count]; count++)
			;
		if (!(needle[count]))
			return (haystack);
	}
	return (0);
}

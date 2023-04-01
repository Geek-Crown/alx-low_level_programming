#include "main.h"
#include <string.h>

/**
 * string_toupper - all strings in uppercase
 * @'': the string
 *
 * Return: string
 */
char *string_toupper(char *)
{
	int len = strlen(str);

	for (int i = 0; i < len; i++)
	{
		if (islower(str[i]))
		{
			str[i] = toupper(str[i]);
		}
	}
	return (str);
}

#include "main.h"
#include <string.h>

/**
 * _strncat -
 */
char *_strncat(char *dest, char *src, int n)
{
	char *str;

	str = strncat(dest, src, n);
	return (str);
}

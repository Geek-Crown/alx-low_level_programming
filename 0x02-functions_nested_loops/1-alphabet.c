#include "main.h"

/**
 * print_alphabet - prints alphabets in lower case
 *
 * Return: Doesn't return. Void return typr
 */

void print_alphabet(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}

	_putchar('\n');
}

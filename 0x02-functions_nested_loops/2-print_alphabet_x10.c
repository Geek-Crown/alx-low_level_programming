include "main.h"

/**
 * print_alphabet_x10 - prints alphabets in lower case 10 times
 *
 * Return: Doesn't return. Void return type
 */

void print_alphabet_x10(void)
{
	char alpha;
	int j;

	for (j = 1; j <= 10; j++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
	}
}

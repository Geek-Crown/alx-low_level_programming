#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - entry point, this is where the code starts
 *
 * Return: it returns the value 0
 */
int main(void)
{
	char x = 'a';
	char X = 'A';

	while (x <= 'z')
	{
		putchar(x);
		x++;
	}
	while (X <= 'Z')
	{
		putchar(X);
		X++;
	}
	putchar('\n');
	return (0);
}

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
	int a = 0;

	while (a <= 10)
	{
		printf("%d", a);
		a++;
	}
	putchar('\n');
	return (0);
}

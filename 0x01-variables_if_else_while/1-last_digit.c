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
	int n;

	scanf("%d", &n);
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n[-1] > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, n[-1]);
	if (n[-1] == 0)
		printf("Last digit of %d is %d and is 0\n", n, n[-1]);
	if (n[-1] < 6 && n[-1] != 0)
		printf("Last digit of %d is %d and is and is less than 6 and not 0\n", n, n[-1]);

	return (0);
}

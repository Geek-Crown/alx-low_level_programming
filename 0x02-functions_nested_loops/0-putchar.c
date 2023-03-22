#include <stdio.h>
#include <unistd.h>
/**
 * program prints putchar using _putchar function
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c);

int main(void)
{
	_putchar();
	return (0);
}

int _putchar(char c)
{
	return (write(1, &c, 1));
}

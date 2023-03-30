#include "main.h"

/**
 * print_bin - prints binary representation of a int
 * Description: prints the binary representation of a positive int
 *
 * @n: unsigned int, decimal number to be printed in binary
 * @count: int pointer, to number of chars printed
 *
 * Return: void
 */
void print_bin(unsigned int n, int *count)
{
	int remainder = n % 2;

	if (n == 2)
	{
		_putchar(((n / 2) + ZERO), count);
		_putchar((remainder + ZERO), count);
		return;
	}
	if (n == 1 || n == 0)
	{
		_putchar((remainder + ZERO), count);
		return;
	}

	n = n / 2;
	print_bin((remainder + ZERO), count);
	_putchar((remainder + ZERO), count);
}

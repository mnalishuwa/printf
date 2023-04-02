#include "main.h"

/**
 * print_string - prints strings to stdout
 * Description: takes a string and prints it to stdout
 *
 * @s: str args
 * @count: pointer to number of chars printed by printf
 *
 * Return: void
 */

void print_string(char *s, int *count)
{
	if (!s)
		_puts("(null)", count);
	else
		_puts(s, count);

}

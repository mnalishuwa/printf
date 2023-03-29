#include "main.h"

/**
 * print_strings - prints strings to stdout
 * Description: takes a list of strings and prints them to stdout
 *
 * @s: str args
 *
 * Return: void
 */

void print_strings(char *s)
{
	if (!s)
		_puts("(null)\0");
	else
		_puts(s);

}

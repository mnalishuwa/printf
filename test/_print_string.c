#include "main.h"

/**
 * print_strings - prints strings to stdout
 * Description: takes a string and prints it to stdout
 *
 * @s: str args
 *
 * Return: void
 */

void print_string(char *s)
{
	if (!s)
		_puts("(null)\0");
	else
		_puts(s);

}

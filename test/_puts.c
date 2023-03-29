#include "main.h"

/**
 * _puts - prints a string to stdout
 * Description: tajes a string argument and writes it to
 * stdout one byte at a time.
 *
 * @str: string input
 *
 * Return: void
 */

void _puts(const char *str)
{
	int char_index;

	for (char_index = 0; *(str + char_index) != '\0'; char_index++)
		_putchar(*(str + char_index));
}

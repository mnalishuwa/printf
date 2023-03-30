#include "main.h"

/**
 * _printf - outputs to stdout according to a format
 * Description: takes a named str argument and 0 or more
 * positional arguments, and outputs the string according
 * to a format.
 *
 * @format: str, input format
 *
 * Return: int, number of characters printed
 */

int _printf(const char *format, ...)
{
	int nbytes = 0;

	va_list args;

	va_start(args, format);

	print_all(format, args, &nbytes);

	va_end(args);

	return (nbytes);
}

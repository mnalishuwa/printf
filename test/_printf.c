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
	unsigned int nbytes;

	va_list args;

	nbytes = 0;

	va_start(args, format);

	print_all(format, args, &nbytes);

	va_end(args);
}

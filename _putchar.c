#include "main.h"

/**
 * _putchar - writes 1 byte to stdout
 * Description: receives a single byte and prints it to stdout
 *
 * @c: byte, arg to write to stdout
 * @count: pointer to number of chars printed by _printf
 *
 * Return: 1 on success, -1 on error & errno is set
 */
int _putchar(char c, int *count)
{
	int result = (write(STDOUT_FILE_DESC, &c, NBYTES));

	if (result == 1)
		*count = *count + 1;
	return (result);
}

#include "main.h"

/**
 * isbackslash - check is a char is a backslash
 * Description: check if character is a backslash
 *
 * @c: char arg
 *
 * Return: 0 if char is backslash, <  0 or > 0 otherwise
 */
int _isbackslash(char c)
{
	return (BACKSLASH - c);
}

/**
 * _is_fspec - check is a char is a format specifier %
 * Description: check if character is a format specifier %
 *
 * @c: char arg
 *
 * Return: 0 if char is %, < 0 or > 0 otherwise
 */
int _is_fspec(char c)
{
	return ('%' - c);
}

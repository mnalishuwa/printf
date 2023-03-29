#include "main.h"
#define BACKSLASH 8
/**
 * isbackslash - check is a char is a backslash
 * Description: check if character is a back slash
 *
 * @c: char arg
 *
 * Return: 0 if char is backslash, a different in otherwise
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
 * Return: 0 if char is format specifier char, a different in otherwise
 */
int _is_fspec(char c)
{
	return ('%' - c);
}

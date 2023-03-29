#include "main.h"

/**
 * _pow_recursion - return x ^ y
 * Description: receives ints x, y and compute x^y
 *
 * @x: int arg 1
 * @y: int arg 2
 *
 * Return: int, x^y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}

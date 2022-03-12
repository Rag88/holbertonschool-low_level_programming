#include "main.h"

/**
 * _pow_recursion - find the value of x raised to the power of y
 * @x: integer
 * @y: power to whicch will be elevated the integer
 * Return:  the value of x raised to the power of y
 * If y is lower than 0, the function should return -1
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (x == 0)
		return (0);

	if (x == 1 || y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}

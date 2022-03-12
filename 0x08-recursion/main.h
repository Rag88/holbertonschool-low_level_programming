#ifndef MAIN_H
#define MAIN_H

/**
 * _putchar - puts character to standard output
 * @c: character to put to standard output
 * Return: 1
 */

int _putchar(char c);

/**
 * _puts_recursion - print string with new line
 * @s: string to print
 */

void _puts_recursion(char *s);

/**
 * _print_rev_recursion - print a string in reverse
 * @s: string to reverse
 */

void _print_rev_recursion(char *s);

/**
 * _strlen_recursion - return string lenght
 * @s: string
 * Return: string lenght
 */

int _strlen_recursion(char *s);

/**
 * factorial - find factorial of n
 * @n: number
 * Return: factorial of number, -1 if negative n
 */

int factorial(int n);

/**
 * _pow_recursion - find the value of x raised to the power of y
 * @x: integer
 * @y: power to whicch will be elevated the integer
 * Return:  the value of x raised to the power of y
 * If y is lower than 0, the function should return -1
 */

int _pow_recursion(int x, int y);

#endif

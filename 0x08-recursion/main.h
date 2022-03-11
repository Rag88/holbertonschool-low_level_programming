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

#endif

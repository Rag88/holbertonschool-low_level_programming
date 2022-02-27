#ifndef MAIN_H
#define MAIN_H

/**
 * _putchar - puts character to standard output
 * @c: character to put to standard output
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c);

/**
 * _isupper - checks for uppercase character
 * @c: character to be checked
 * Return: 1 if true, 0 if false
 */

int _isupper(int c);

/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: character to be checked
 * Return: 1 if c is a digit, otherwise return 0
 */

int _isdigit(int c);

/**
 * mul - multiplies two integers
 * @a: one integer
 * @b: seconde integer
 * Return: product of a and b
 */

int mul(int a, int b);

#endif /* MAIN_H */

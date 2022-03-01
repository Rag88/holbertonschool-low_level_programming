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
 * @b: second integer
 * Return: product of a and b
 */

int mul(int a, int b);

/**
 * print_numbers - print 0 to 9
 */

void print_numbers(void);

/**
 * print_most_numbers - print 0 to 9, skip 2 and 4
 */

void print_most_numbers(void);

/**
 * more_numbers - print 0 to 14 ten times
 */

void more_numbers(void);

/**
 * print_line - print the character "_" n times to draw a line
 * @n: number of characters to draw
 */

void print_line(int n);

#endif /* MAIN_H */

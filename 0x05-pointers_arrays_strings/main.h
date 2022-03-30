#ifndef MAIN_H
#define MAIN_H

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c);

/**
 * reset_to_98 - function that reset the value to 98
 * @n: the pointer to int n
 */

void reset_to_98(int *n);

/**
 * swap_int - fuction that swaps two integers
 * @a: first integer to swap
 * @b: secod integer to swap
 */

void swap_int(int *a, int *b);

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */

int _strlen(char *s);

/**
 * _puts - function that prints a string
 * @str: string to print
 */

void _puts(char *str);

#endif

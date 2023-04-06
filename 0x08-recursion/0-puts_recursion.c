#include "main.h"

/**
 * _puts_recursion - Write a function that prints a string, followed by a new line
 * @x: The string to print
 *
 * Return: Always 0
 */
void _puts_recursion(char *x)
{
	if (*x == '\0')
	{
		_putchar('\n');
	}

	_putchar(*x);
	x++;
	_puts_recursion(x);
}

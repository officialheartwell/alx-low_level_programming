#include <stdio.h>

/**
 * main - a program that prints all arguments it receives
 * @argc: arguments should be printed, including the first one
 * @argv: Only print one argument per line, ending with a new line
 *
 * Return: always 0
 */

int main(int argc, char **argv)
{
	int i;

	for  (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}

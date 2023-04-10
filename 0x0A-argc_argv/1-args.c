#include <stdio.h>

/**
 * main - A program that prints all arguments it receives
 * @argc: argument count
 * @argv: arguments vector
 *
 * Return: always 0
 */

int main(int argc, char **argv)
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}

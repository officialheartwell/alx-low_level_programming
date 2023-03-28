#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: integer is swap
 * @b: integer is swap
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}

#include "main.h"
/**
 * swap_int - swap integers
 * @a - first integers
 * @b - second integers
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	int d = *b;

	*a = b;
	*b = a;
}

#include "main.h"
/**
 * print_alphabet_x10 - a function that prints 10 times the alphabet, in lowercase
 * followed by a new line
 * Return:nothing
 */
void print_alphabet_x10(void)
{
	int low;

	for (low = 'a'; low <= 'z'; low++)
	_putchar(low);
	_putchar(low);
	_putchar(low);
	_putchar(low);
	_putchar(low);
	_putchar(low);
	_putchar(low);
	_putchar(low);
	_putchar(low);
	_putchar(low);
}

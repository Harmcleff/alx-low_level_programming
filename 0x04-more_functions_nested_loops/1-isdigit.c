#include "main.h"
/**
 * _isdigit - function that checks for a digit (0 through 9).
 * @c: An input integer
 * Return: Returns 1 if c is a digit
 */
int _isdigit(int c)
{
	int i;
	int digit = 0;

	for (i = 0; i <= 9 ; i++)
	{
		if (i == c)
			digit = 1;
	}
	return (digit);
}

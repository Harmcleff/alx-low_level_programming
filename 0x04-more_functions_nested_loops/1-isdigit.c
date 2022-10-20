#include "main.h"
/**
 *  _isdigit -  a function that checks for a digit
 * @c: An input integer
 * Return: Returns 1 if c is a digit
 */
int _isdigit(int c)
{
	char i;
	int digit = 0;

	for (i = '0'; i <= '9' ; i++)
	{
		if (i == c)
			digit = 1;
	}
	return (digit);
}

#include "main.h"
/**
 * int _islower - a function that checks for lowercase character.
 *  @c: An input character
 *  Return: 1 if c is lowercase, 0 if  otherwise
 */
int _islower(int c)
{
	char i;
	int lower;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
			lower = 1;
		else
			lower = 0;
	}
	return (lower);
}

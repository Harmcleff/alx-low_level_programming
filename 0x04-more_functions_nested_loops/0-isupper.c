#include "main.h"
/**
 * main - a function that checks for uppercase character.
 *
 * @c character to check
 *
 * Return: Returns 1 if c is uppercase
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}

 

#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc.
<<<<<<< HEAD
 * @b: The number of bytes to be allocated
 *
 * Return - A pointer to the allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	 void *space = malloc(b);

	 if (mem == NULL)
		 exit(98);
=======
 * @b: The number of bytes to be allocated.
 *
 * Return: A pointer to the allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	void *space = malloc(b);

	if (space == NULL)
		exit(98);
>>>>>>> a3c5de8384a873250e29c97bcab93c3c5f0761bf

	return (space);
}

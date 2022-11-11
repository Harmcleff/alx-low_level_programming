#include "Main.h"
#include <stdlib.h>
/*
 * malloc_checked - Allocates memory using malloc.
 * @b: The number of bytes to be allocated
 *
 * Return - A pointer to the allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	 void *space = malloc(b);

	 if (mem == NULL)
		 exit(98);

	return (*space);
}


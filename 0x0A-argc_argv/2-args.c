#include <stdlib.h>
#include <stdio.h>
/**
 * main - print one argument per line, ending with a new line
 * @argc: count the number of argument pass
 * @argv: print the array of strings
 * return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}

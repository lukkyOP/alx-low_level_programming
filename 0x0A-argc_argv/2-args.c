#include <stdio.h>
#include "main.h"

/**
 * main - prints all the arguments it receives
 * @argc: argument counts
 * @argv: arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv);
	return(0);
}

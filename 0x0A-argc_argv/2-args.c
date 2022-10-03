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
	int i = 0;

	if (argc > 0)
	{
	while (i < argc)
		{
	printf("%s\n", argv[i]);
	i++;
		}
	}
	return (0);
}

#include "main.h"

/**
 * main - function that prints a square
 * @size: size of square
 * Return: Always 0.
 */

void print_square(int size);
{

	int i;
	int k;

	if (size <= 0)
		_putchar('\n');
	for (i = 0; i < size; i++)
		{
			for (k = 0; k < size; k++)
			{
				_putchar ('#');
			}
			{
			_putchar ('\n');
			}
		}
}

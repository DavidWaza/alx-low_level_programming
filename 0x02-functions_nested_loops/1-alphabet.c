#include "main.h"

/**
 * main - Entry point
 *
 * Description: Write a function that prints the alphabet, in lowercase, followed by a new line.
 *
 * Return: Always 0 (success)
 *
 */

void print_alphabet(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');
}

#include "main.h"

/**
 * main - Entry point
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
	putchar('\n');
}

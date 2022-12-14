#include "main.h"

/**
 * print_last_digit - print last digit of an integer
 *
 * @n: num to be checked
 *
 * Return: last digit of n
 */

int print_last_digit(int n)
{
	int last;

	last = n % 10;

	if (last < 10)
	{
		last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}

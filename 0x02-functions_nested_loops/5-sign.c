#include "main.h"

/**
* print_sign - checks for lowercase character.
* @n: The characters to be checked.
* Return: 1 if n is an positive, 0  if zero, -1 is less than zero.
*/
int print_sign(int n)
{
	if (n > 0)
	{
	_putchar('+');
	return (1);
	}
	else if (n == 0)
	{
	_putchar(0 + '0');
	return (0);
	}
	else
	_putchar('-');
	return (1);
}

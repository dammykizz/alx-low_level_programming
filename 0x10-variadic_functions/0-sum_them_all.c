#include "variadic_functions.h"

/**
 * sum_them_all - calculates the sum of all its parameters
 * @n: number of arguments passed to the function
 *
 * Return: the resulting sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list x;

	va_start(x, n);
	if (n == 0)
	{
		return (0);
	}

	for (i = 0; i < n; i++)
		sum += va_arg(x, int);

	va_end(x);

	return (sum);
}

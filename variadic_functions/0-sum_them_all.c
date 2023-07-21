#include <stdarg.h>
#include <stdarg.h>

/**
 * sum_them_all - sum them all values in a list
 * @n: number of values
 *
 */
int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
		return 0;

	int sum = 0;
	va_list args;

	va_start(args, n);

	unsigned int i;
	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}

	va_end(args);
	return sum;
}

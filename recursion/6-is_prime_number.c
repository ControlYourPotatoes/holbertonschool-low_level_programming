#include <stdio.h>
#include "main.h"

/**
 * is_prime - checks if prime and reitirate
 * @n: the number being check
 * @divisor: divisor to check
 * Return: the result
 */

int is_prime(int n, int divisor)
{
	if (n <= 1)
		return (0);
	if (n == 2 || n == 3)
		return (1);
	if (n % divisor == 0)
		return (0);
	if (divisor * divisor > n)
		return (1);
	return (is_prime(n, divisor + 2));
}

/**
 * is_prime_number - call checker funtion to evaluate the number
 * @n: number
 * Return: Result
 */

int is_prime_number(int n)
{
	if (n == 2 || n == 3)
		return (1);
	if (n % 2 == 0)
		return (0);
	return (is_prime(n, 3));
}

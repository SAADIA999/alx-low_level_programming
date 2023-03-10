#include"main.h"
/**
 * factorial -Returs the factorial of a number .
 * @n: The number to find the fact of .
 *
 * Return: the fact of n.
 */
int factorial(int n)
{
	int result = n;

	if (n < 0)
		return (-1);
	else if (n >= 0 && n <= 1)
		return (1);
	result *= factorial(n - 1);
	return (result);
}

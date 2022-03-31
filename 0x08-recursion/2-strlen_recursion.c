#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: input integer
 * Return: -1 if n lower than 0, else return factorial
 */

int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
}

#include "main.h"

/**
 * actual_sqrt_recursion - recurses to find the natural
 * square root of a number
 * @number: number to calculate the sqaure root of
 * @root: iterator
 *
 * Return: the resulting square root
 */
int actual_sqrt_recursion(int number, int root)
{
	if ((root * root) > number)
	{
		return (-1);
	}
	else if ((root * root) == number)
	{
		return (root);
	}
	else
	{
		return (actual_sqrt_recursion(number, root + 1));
	}
}
/**
 * _sqrt_recursion - function that returns the natural square root of number
 * @n: input number
 *
 * Return: 0
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (actual_sqrt_recursion(n, 0));
	}
}

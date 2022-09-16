#include "main.h"
/**
 * _abs - function that computes the absolute value of an integer
 * @: taks in integer type input for function
 * Return: Always 0 (Success)
 */
int _abs(int c)
{
	if (c > 0 || c == 0)
	{
		return (c);
	}
	else
		return (c * -1);
}

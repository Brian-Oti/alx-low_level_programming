#include "main.h"

/**
 * _islower - function to check for lowercase character
 * @c: checks input of function
 * Return: returns 1 if 'c' is lowrcase
 *         otherwise always 0 (Success)
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}


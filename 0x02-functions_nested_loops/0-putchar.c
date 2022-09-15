#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: the character to print
 *
 * Return: On success 1.
 *         On error, -1 is rerurned, and error is set appropriately.
 */
  int _putchar(char c)
{
	return (write(1, &c, 1));
}

#include "main.h"
#include <string.h>

/**
 * main - Entry point
 *
 * Description: prints _putchar using putchar prototype
 *
 * Return : Always 0 (success)
 */

int main(void)
{
	char str[] = "_putchar";
	int ch;

	for (ch = 0; ch < 8; ++ch);
	_putchar(str[ch]);
	_putchar('\n');

	return (0);
}

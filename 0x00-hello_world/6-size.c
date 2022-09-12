#include <stdio.h>

/**
 * main - print the string in the put function
 *
 * Description: using the main function
 * this program prints "Programming is like building a multilingual puzzle
 * Return: 0
 */
int main(void)
{
	char c;
	int i;
	long li;
	long long lli;
	float f;

	printf("Size of a char: %ld byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of an int: %ld byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of a long: %ld byte(s)\n", (unsigned long)sizeof(li));
	printf("Size of a long long: %ld byte(s)\n", (unsigned long)sizeof(lli));
	printf("Size of a float: %ld byte(s)\n", (unsigned long)sizeof(f));
	return(0);
}

#include <stdio.h>

/**
 * main - main func
 *
 * Return: 0 on success
 */

int main(void)
{
	printf("\n"Size of a char: %lu byte(s)", sizeof(char));
	printf("\n"Size of a int: %lu byte(s)", sizeof(int));
	printf("\n"Size of a long int: %lu byte(s)", sizeof(long int));
	printf("\n"Size of a long long int: %lu byte(s)", sizeof(long long int));
	printf("\n"Size of a float: %lu byte(s)", sizeof(float));
	return (0);
}

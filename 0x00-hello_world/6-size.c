#include <stdio.h>

/**
 *main - Main function
 *
 *Return: always 0(sucess)
 */

int main(void)
{
	printf("Size of a char: %ld byte(s)\n", sizeof(char));
	printf("size of an int: %ld byte(s)\n", sizeof(int));
	printf("size of a long int: %ld byte(s)\n", sizeof(long int));
	printf("size of a long long int: %ld byte(s)\n", sizeof(long long int));
	printf("size of a float int: %ld byte(s)\n", sizeof(float));
	return (0);
}

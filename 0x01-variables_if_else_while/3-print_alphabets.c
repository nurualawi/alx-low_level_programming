#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: always on success
 */

int main(void)

{
	char lowerCase = 'a';

	char upperCase = 'A';

	while (lowerCase <= 'z')

	{
	putchar(lowerCase);

	lowerCase += 1;
	}
	while (upperCase <= 'A')
	{
	putchar(upperCase);

	upperCase += 1;
	}
	putchar('\n');

	return (0);
}


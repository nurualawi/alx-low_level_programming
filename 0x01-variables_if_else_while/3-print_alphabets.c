#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: always 0 on success
 */

int main(void)

{
	int lowerCase = 'a';

	int upperCase = 'A';

	while (lowerCase <= 'z')

	{
	putchar(lowerCase);

	lowerCase += 1;
	}
	while (upperCase <= 'Z')
	{
	putchar(upperCase);

	upperCase += 1;
	}
	putchar('\n');

	return (0);
}


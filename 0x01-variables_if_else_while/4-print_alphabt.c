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

	lowerCase++;
	}

	{
	putchar(upperCase);

	upperCase++;
	}
	putchar('\n');

	return (0);
}


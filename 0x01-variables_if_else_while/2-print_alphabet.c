#include <stdio.h>
/**
  *main - Function to print alphabet
  *
  *Return: Always 0 (Success)
  */

int main(void)
{
	int lowerCase = 'a';

	while (lowerCase <= 'z')

	{
		putchar(lowerCase);
		lowerCase++;
	}
	putchar ('\n');
	return (0);
}



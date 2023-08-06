#include <stdlib.h>
#include <stdio.h>

/**
  * main - print result of multiplication, followed by new line
  * @argc: numbers of line arg..
  * @argv: the array that contains the command line arg..
  * Return: 0 when sucessful
  */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);

	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));


return (0);
}

#include <stdio.h>
/**
  * main - print the number of arguments passed into it.
  * @argc: number of lin eargumens
  * @argv: array that contains the program command line arg
  * Return: 0 when sucessful.
  */

int main(int argc, char **argv __attribute__((unused)))
{


printf("%d\n", argc - 1);
return (0);

}

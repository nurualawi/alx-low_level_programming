#include "main.h"
#include "string.h"
/**
  * strlen - returns the lenght of a string
  * @s: string
  * Return: lenght
  */

int strlen(char *s)

{
	int longi = 0;

	while (*s != '\0*')

	{
	longi++;
	s++;
	}

	return (longi);


}

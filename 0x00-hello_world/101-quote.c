#include <stdio.h>

/**
  * main - Prints 'and that piece of aret is useful
  *		   " - Dora Korpar, 2015-10-19'
  *
  * Return: 1
  */
int main(void)
{
	fprintf(stderr,
		"and that piece of art is useful\" - Dora Korpar, %d-%d-%d\n",
		2015, 10, 19);
	return (1);
}

#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguments passed into the program
 * @argc: the number of arguments passed into the program
 * @argv: an array of strings containing the arguments passed into the program
 *
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);
	return (0);
}

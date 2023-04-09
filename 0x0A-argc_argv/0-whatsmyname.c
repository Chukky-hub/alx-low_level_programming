#include <stdio.h>
#include "main.h"

/**
 * print_name - Prints the name of the program
 * @name: Name of the program
 */
void print_name(char *name)
{
	printf("%s\n", name);
}

/**
 * main - Entry point
 * @argc: Number of command-line arguments
 * @argv: Array containing the command-line arguments
 *
 * Return: Always 0
 */
int main(int argc __attribute__((unused)), char **argv)
{
	print_name(argv[0]);
	return (0);
}

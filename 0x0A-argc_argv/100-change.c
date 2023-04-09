#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * get_min_coins - determines the minimum number of coins needed to make change
 * for a given amount of money
 * @cents: the amount of money to make change for
 *
 * Return: the minimum number of coins needed
 */
int get_min_coins(int cents)
{
	int coins = 0;

	while (cents > 0)
	{
		if (cents >= 25)
			cents -= 25;
		else if (cents >= 10)
			cents -= 10;
		else if (cents >= 5)
			cents -= 5;
		else if (cents >= 2)
			cents -= 2;
		else
			cents -= 1;
		coins++;
	}

	return (coins);
}

/**
 * main - entry point for the program
 * @argc: the number of arguments passed to the program
 * @argv: an array of strings containing the arguments
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char **argv)
{
	int cents, coins;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	coins = get_min_coins(cents);
	printf("%d\n", coins);

	return (0);
}

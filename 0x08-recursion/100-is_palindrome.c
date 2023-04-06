#include "main.h"
/**
 * is_palindrome - Checks if a given string is a palindrome
 * @s: The string to check
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	if (!s)
		return (0);

	char *end = s;

	while (*end)
		end++;

	while (s < end)
	{
		if (*s != *(--end))
			return (0);

		s++;
	}

	return (1);
}

#include "main.h"
/**
 * wildcmp - Compares two strings and returns 1 if they are identical,
 *           otherwise returns 0.
 * @s1: The first string
 * @s2: The second string (may contain wildcard characters)
 *
 * Return: 1 if the strings are identical, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		if (!*s1 && !wildcmp(s1, s2 + 1))
			return (0);
		else if (*s1 && (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1)))

			return (1);
	}
	else if (*s1 == *s2 && *s1 != '\0')
	{
		return (wildcmp s1 + 1, s2 + 1);
	}

	return (*s1 == '\0' && *s2 == '\0');
}

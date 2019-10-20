/**
 * wildcmp - Compare two strings and the second one
 * can have '*' wildcard
 * @s1: First string. Does not have wildcards
 * @s2: Second string. Can have wildcard.
 *
 * Return: 1 if the strings are the same.
 * 0 if they're not.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == 0 && *s2 == 0)
	{
		return (1);
	}
	if (*s2 == '*')
	{
		if (*(s2 + 1) != 0 && *s1 == 0)
		{
			return (0);
		}
		if (*(s2 + 1) == '*')
		{
			return (wildcmp(s1, s2 + 1));
		}

		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
	}
	if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	return (0);
}

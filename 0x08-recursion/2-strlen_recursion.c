#include"main.h"
/**
 *_strlen_recursion - Returns the length of a string.
 *@s: The String to be used.
 *
 *Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	int cnt = 0;

	if (*s)
	{
		cnt = cnt + 1;
		cnt += _strlen_recursion(s + 1);
	}
	return (cnt);
}

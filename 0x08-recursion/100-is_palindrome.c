#include "main.h"
/**
 * _srlen_recursion - returns the lenght of a string
 * @str: string input
 * Return: the length of a string
 */

int _strlen_recursion(char *s)
{
	if (*str == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(str + 1));
	}
}


/**
 * compare - compares each  character of the input string
 * @str:input string
 * @num1: smallest iterator
 * @num2: largest iterator
 * Return: null
 */

int compare(char *str, int num1, int num2)
{
	if(*(str + num1) == *(str + num2))
	{
		if(num1 == num2 || num1 == num2 + 1)
		{
			return (1);
		}
		return (0 + compare(str, num1 + 1, num2 - 1));
	}
	return (0);
}

/**
 * is_palindrome - detects if a string is a palindrome
 * @str: string to reverse
 * Return: 1 if str is a palindrome, 0 if not
 */

int is_palindrome(char *str)
{
	if(*str == '\0')
	{
		return (1);
	}
	return (compare(str, 0, _strlen_recursion(str) - 1 ));
}

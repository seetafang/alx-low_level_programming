#include "main.h"
#include <stdlib.h>
#include <stdio.h>

#define ERR_MSG "Error"

/**
 * is_digit - checks if  String contains a non-digit char
 * @s: string to be Evaluated
 *
 * Return: 0 if a non-digit is found, 1 otherwise
 */
int is_digit(char *s)
{
	int f = 0;

	while (s[f])
	{
		if (s[f] < '0' || s[f] > '9')
			return 0;
		f++;
	}
	return 1;
}

/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int f = 0;

	while (s[f] != '\0')
	{
		f++;
	}
	return f;
}

/**
 * errors - Will handle Erors for main
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - MultiplieS two positive numbers
 * @argc: NumberS of arguments
 * @argv: Array of arguments
 *
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[])
{
	char *s1, *s2;
	int len1, len2, len, f, carry, digit1, digit2, *result, a = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		errors();
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	len = len1 + len2 + 1;
	result = malloc(sizeof(int) * len);
	if (!result)
		return 1;
	for (f = 0; f <= len1 + len2; f++)
		result[f] = 0;
	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		digit1 = s1[len1] - '0';
		carry = 0;
		for (len2 = _strlen(s2) - 1; len2 >= 0; len2--)
		{
			digit2 = s2[len2] - '0';
			carry += result[len1 + len2 + 1] + (digit1 * digit2);
			result[len1 + len2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			result[len1 + len2 + 1] += carry;
	}
	for (f = 0; f < len - 1; f++)
	{
		if (result[f])
			a = 1;
		if (a)
			putchar(result[f] + '0');
	}
	if (!a)
		putchar('0');
	putchar('\n');
	free(result);
	return 0;
}

#include "holberton.h"

/**
 * rot13 - function that encodes a string using rot13
 * @s: string
 *
 * Return: rot13 encoded string
 */

char *rot13(char *s)
{
	int i, j, len;
	char lett[60] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[60] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char *buff;

	len = _strlen(s);
	buff = _calloc(sizeof(char) * len, sizeof(char));
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; lett[j] != '\0'; j++)
			if (s[i] == lett[j])
			{
				buff[i] = rot[j];
				break;
			}
	}
	return (buff);
}

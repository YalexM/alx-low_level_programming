#include "main.h"
#include <stdio.h>

/**
 * rot13 - function a string using rot13.
 * @str: The string to be encoded.
 * Return: The encod string returns.
 */

char *rot13(char *str)
{
int tmp, index;
char alphabet[52] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z',};
char root13key[52] = {'N', 'O', 'p', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M''n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm',};
	while (str[tmp])
	{
	for (index = 0; index < 52; index++)
	{
	if (str[tmp] == alphabet[index])
	{
		str[tmp] = root13key[index];
		break;
	}
	}
	}
	return (str);
}

#include "main.h"
#include<stdio.h>

/**
 * _strcmp - compares two strings.
 * @s1: first string to be compared.
 * @s2: scond string to be compared.
 * Return:
 *        if str1 == str2 returns zero.
 *        if str1 < str2 returns negative.
 *        if str1 > str2 returns positive.
 */

int _strcmp(char *s1, char *s2)
{
int i = 0, d = 0;
	while (1)
	{
		if (s1[i] == '\0' && s2[i] == '\0')
			break;
		else if (s1[i] == '\0')
		{
			d = s2[i];
			break;
		}
		else if (s2[i] == '\0')
		{
			d = s1[i];
			break;
		}
		else if (s1[i] != s2[i])
		{
			d = s1[i] - s2[i];
			break;
		}
		else
			i++;
	}
	return (d);
}

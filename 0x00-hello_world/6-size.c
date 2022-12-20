#include <stdio.h>

/**
 * main - print out sizes of data types in c
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
print("size of a char: %lu bytes(s)\n", sizeof(char));
print("size of an int: %lu bytes(s)\n", sizeof(int));
print("size of a long int: %lu bytes(s)\n", sizeof(long int));
print("size of a long long int: %lu bytes(s)\n", sizeof(long long int));
print("size of a float: %lu bytes(s)\n", sizeof(float));
return (0);
}

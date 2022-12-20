#include <stdio.h>

/**
 * main - print out sizes of data types in c
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char a;
int b;
long int c;
long long int d;
float f;
print("size of a char: %lu bytes(s)\n", sizeof(a));
print("size of an int: %lu bytes(s)\n", sizeof(b));
print("size of a long int: %lu bytes(s)\n", sizeof(c));
print("size of a long long int: %lu bytes(s)\n", sizeof(d));
print("size of a float: %lu bytes(s)\n", sizeof(f));
return (0);
}

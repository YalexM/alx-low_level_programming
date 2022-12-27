#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
* main - Entry point
* Return: 0 if successful else 1
*/
int main(void)
{
int n, i;
srand(time(0));
n = rand() - RAND_MAX / 2;
i = n % 10;
if (i > 5)
{
	Printf("last digit of %d is %d and is great than 5\n", n, i);
}
else if (i == 0)
{
	Printf("last digit of %d is %d and is 0\n", n, i);
}
else
{
	Printf("last digit of %d is %d and is less than 6 and not 0\n", n, i);
}
/* your code goes there */
return (0);
}


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
printf("last digit of  98 is 8 and is great than 5\n", n, i);
}
else if (i == 0)
{
printf("last digit of -98 is  -8 and is 0\n", n, i);
}
else
{
printf("last digit of 980 is  0 and is less than 6 and not 0\n", n, i);
}
/* your code goes there */
return (0);
}


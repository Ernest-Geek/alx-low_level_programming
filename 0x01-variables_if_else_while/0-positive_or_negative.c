#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - A functon that prints if the number is positive, negative or zero.
 * Return: Always 0
 */

/* betty style doc for function main goes there */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%d the number is positive\n", n);
}
else if (n == 0)
{
printf("%d the number is zero\n", n);
}
else
{
printf("%d the number is negative\n", n);
}
return (0);
}

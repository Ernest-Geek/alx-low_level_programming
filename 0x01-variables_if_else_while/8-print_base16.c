#include <stdio.h>
/**
 * main - print all numbers of base 6 in lower case
 * Return: Always 0
 **/
int main(void)
{
char digit;
for (digit = '0'; digit <= '9'; digit++)
{
putchar(digit);
}
for (digit = 'a'; digit <= 'f'; digit++)
{
putchar(digit);
}
putchar('\n');
return (0);
}

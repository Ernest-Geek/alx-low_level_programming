#include <stdio.h>
/**
 * main - prints lowercase alphabet in reverse order
 * Results: Always 0
 */
int main(void)
{
int num;
for (num = 'z'; num >= 'a'; num--)
putchar(num);
putchar('\n');
return (0);
}

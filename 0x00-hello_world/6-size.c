#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
char a;
int b;
long int c;
long long int d;
float f;

printf("Size of a char: %zu byte(s)\n", (unsigned long)sizeof(char));
printf("Size of an int: %zu byte(s)\n", (unsigned long)sizeof(int));
printf("Size of a long int: %zu byte(s)\n", (unsigned long)sizeof(long int));
printf("Size of long long int: %zu byte(s)\n", (unsigned long)sizeof(long long int));
printf("Size of a float: %zu bytes(s)\n", (unsigned long)sizeof(float));
return (0);
}

#include "main.h"
/**
 * print_binary - Entry point
 * Description: Prints the binary representation of a number
 * @n: Printed in binary format
 */
void print_binary(unsigned long int n)
{
/**checks if n is gretaer than 1**/
if (n > 1)
/**make a recursive call**/
print_binary(n >> 1);
_putchar((n & 1) + '0');
}

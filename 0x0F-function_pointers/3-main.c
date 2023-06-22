#include "3-calc.h"
#include <stdio.h>
/**
 * main - Entry point
 * code description: performs simple operation
 * @argc: argument count
 * @argv: array of argument
 * Return: 0 on success
 **/
int main(int argc, char *argv[])
{
int num1, num2, output;
char *op_func;
/**checking if the number of argument is correct**/
if (argc != 4)
{
printf("Error\n");
exit(98);
}
/**Converting num* string to int**/
num1 = atoi(argv[1]);
num2 = atoi(argv[3]);
/**Get function for the operator**/
op_func = argv[2];
/**checking if the operator is invalid**/
if (get_op_func(op_func) == NULL || op_func[1] != '\0')
{
printf("Error\n");
exit(99);
}
if ((argv[2][0] == '/' || argv[2][0] == '%') && num2 == 0)
{
printf("Error\n");
exit(100);
}
/**Call the function with Num1 and Num2*/
output = get_op_func(op_func)(num1, num2);
printf("%d\n", output);
return (0);
}

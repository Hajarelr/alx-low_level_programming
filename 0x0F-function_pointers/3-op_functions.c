#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - Function that returns the sum of a and b
 * @a: 1st integer
 * @b: 2nd integer
 * Return: The sum of a & b
 */
int op_add(int a, int b)
{
return (a + b);
}
/**
 * op_sub - Function that returns the difference of a and b
 * @a: 1st integer
 * @b: 2nd integer
 * Return: The difference of a & b
 */
int op_sub(int a, int b)
{
return (a - b);
}
/**
 * op_mul - Function that returns the product of a and b
 * @a: 1st integer
 * @b: 2nd integer
 * Return: The product of a & b
 */
int op_mul(int a, int b)
{
return (a * b);
}
/**
 * op_div - Function that returns the result of the division of a by b
 * @a: 1st integer
 * @b: 2nd integer
 * Return: The result of the division
 */
int op_div(int a, int b)
{
if (b == 0)
{
printf("Eroor\n");
exit(100);
}
return (a / b);
}
/**
 * op_mod - Function that returns the remainder of the division of a by b
 * @a: 1st integer
 * @b: 2nd integer
 * Return: The remainder of the division
 */
int op_mod(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a % b);
}

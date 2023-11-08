

#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>


/**
* op_add - Entry point (op_add)
*
* @a: num 1
* @b: num 2
* Return: 0
*/
int op_add(int a, int b)
{
return (a + b);
}


/**
* op_sub - Entry point (op_sub)
*
* @a: num 1
* @b: num 2
* Return: 0
*/
int op_sub(int a, int b)
{
return (a - b);
}


/**
* op_mul - Entry point (op_mul)
*
* @a: num 1
* @b: num 2
* Return: 0
*/
int op_mul(int a, int b)
{
return (a * b);
}


/**
* op_div - Entry point (op_div)
*
* @a: num 1
* @b: num 2
* Return: 0
*/
int op_div(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}


return (a / b);
}


/**
* op_mod - Entry point (op_mod)
*
* @a: num 1
* @b: num 2
* Return: 0
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

/*
 * func_p.c
 *
 *  Created on: Aug 13, 2020
 *      Author: HP
 */

#include<stdio.h>

int add(int a, int b);

int sub(int a , int b);

int mul(int a, int b);

int div(int a ,int b);

int  (*fun)(int a, int b);

int add(int a, int b)

{

return a+b;

}

int sub(int a , int b)

{

return (a-b);

}

int mul(int a, int b)

{

return(a*b);

}

int div(int a ,int b)

{

return (a/b);

}

int main()

{

int i;

int  (*fun)(int a, int b);

fun=add;

i=fun(5,10);

printf(“%d\n”,i);

fun=sub;

i=fun(5,10);

printf(“%d\n”,i);

fun=mul;

i=fun(5,10);

printf(“%d\n”,i);

fun=div;

i=fun(5,10);

printf(“%d\n”,i);

}

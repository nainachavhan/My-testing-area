/*
 * fibonnaci.c
 *
 *  Created on: Aug 6, 2020
 *      Author: HP
 */


#include<stdio.h>
int fib( int n);
void fibnaaci()
{
	  setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	 int num;
	  printf("enter the number\n");
	 scanf("%d",&num);

}
int fib(int n){
	if(n==1 ||n==0){
		return n;
	}
	else
	{
		return (fib(n-1)+ fib(n-2));

	}
}

/*
 * factorial.c
 *
 *  Created on: Aug 6, 2020
 *      Author: HP
 */




#include <stdio.h>
int  factorial(int n);

int main (){
	   setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
    int n;
    printf("enter the number\n");
    scanf("%d",&n);

printf("factorial of no is %d = %d" ,n,factorial(n));
return 0;
}
int factorial(int n)
{
    if(n>=1){
         return n* factorial(n-1);

    }
    else {
          return 1;
}
printf("%d",factorial);
}

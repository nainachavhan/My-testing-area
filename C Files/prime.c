S/*
 * prime.c
 *
 *  Created on: Aug 10, 2020
 *      Author: HP
 */

#include <stdio.h>
 
/*function to check number is Prime or Not*/
int isPrime(int num)
{
    char flag=0;
    int i;
     
    for(i=2; i<=(num/2); i++)
    {
        if(num%i ==0)
        {
            flag=1;
            break;
        }
    }
     
    if(flag==0)
        return 1; /*prime number*/
    else
        return 0; /*not a prime number*/
}
 
int main()
{
    int number;
     
    printf("Enter an integer number : ");
    scanf("%d",&number);
  
 
    if(isPrime(number))
        printf("\n%d is a prime number.",number);
    else
        printf("\n%d is not a prime number.",number);
  
    return 0;
}

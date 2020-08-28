/*
 * palindrome1.c
 *
 *  Created on: Jul 30, 2020
 *      Author: HP
 */

#include<stdio.h>

int main()
{
int reverse=0,num,temp,remainder;
printf("enter the no ");
scanf("%d",&num);
temp=num;
while(num!=0)
{
	remainder=num%10;
	reverse=(reverse*10)+remainder;
	temp/=10;
}

if (temp==num)

	 printf("number is palindrome");

  else

	   printf("number is not palindrome");
return 0;

}

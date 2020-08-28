/*
 * point1.c
 *
 *  Created on: Aug 6, 2020
 *      Author: HP
 */

#include<stdio.h>
 void swap( int *ptr1 , int *ptr2);
int main()
{
	setvbuf(stdout, NULL, _IONBF, 0);
		setvbuf(stderr, NULL, _IONBF, 0);
		int num1=10,num2=20;
       swap(&num1, &num2);
	   printf("%d  %d",num1,num2);
}
 void swap( int *ptr1 , int *ptr2)
{
	 int temp=*ptr1;
	 *ptr1=*ptr2;
	 *ptr2= temp;

}

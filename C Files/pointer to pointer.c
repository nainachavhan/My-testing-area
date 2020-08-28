/*
 * pointer to pointer.c
 *
 *  Created on: Aug 13, 2020
 *      Author: HP
 */
#include<stdio.h>
int* getinteger()
{
	int a=30;
	int *ptr=&a;
	return ptr;

}
int ptr()
{
	int *numptr = getinteger();
	printf("\n the number is =%d",*numptr);
	return 0;
}

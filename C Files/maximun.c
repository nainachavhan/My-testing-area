/*
 * maximun.c
 *
 *  Created on: Aug 5, 2020
 *      Author: HP
 */
#include<stdio.h>
int main()
{
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int arr[100],maximum,size,i;
	printf("please enter the size\n ");
	scanf("%d",&size);
	printf("enter the array\n");
	for(i=0;i<size;i++)
		scanf("%d",&arr[i]);
	maximum=arr[0];
	for(i=1;i<size;i++)
	{
		if(arr[i]> maximum){

			maximum=arr[i];



		}
	}
	printf("maximum num is %d",maximum );

	return 0;

}




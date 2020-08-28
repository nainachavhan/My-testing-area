/*
 * reverse.c
 *
 *  Created on: Aug 5, 2020
 *      Author: HP
 */

#include<stdio.h>
int sum()

{

	int i,num;
	printf("enter the numbers\n");
	scanf("%d",&num);
	for(i=0;i<=num;i++){
		printf("%d",i);
	}
		for(i=num;i>=0;i--){
			printf("%d",i);
		}
		return i;
}




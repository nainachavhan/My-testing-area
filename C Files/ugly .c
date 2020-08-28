/*
 * ugly .c
 *
 *  Created on: Aug 10, 2020
 *      Author: HP
 */
#include<stdio.h>

int  main(){
	setvbuf(stdout, NULL, _IONBF, 0);
			setvbuf(stderr, NULL, _IONBF, 0);
	int num;
	printf("enter the numbers\n ");
	scanf("%d",&num);

	return 0;

	if(num<1){
		return 0;}

	while(num%2==0){
		num/=2;
	}
	while(num%3==0){
		num/=3;
	}

  while(num%5==0){
	num/=5;

}
return (num==1)?0:1;
}



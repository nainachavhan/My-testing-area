S/*
 * prime.c
 *
 *  Created on: Aug 10, 2020
 *      Author: HP
 */

#include<stdio.h>
int main()
{
	 setvbuf(stdout, NULL, _IONBF, 0);
		setvbuf(stderr, NULL, _IONBF, 0);
		int i,flag=0,m,n;
		printf("enter the number\n");
		scanf("%d",&n);
		m=n/2;
		for(i=2;i<m;i++)
		{
            if(n%i==0){

           printf("number is primes");

		    flag=1;
				break;
			}

		}
		if(flag=0){
			printf("number is not primes");
		}


}


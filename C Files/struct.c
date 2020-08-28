/*
 * struct.c
 *
 *  Created on: Aug 18, 2020
 *      Author: HP
 */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

	struct car{
		char company[10];
		char color[10];
		int modelNo;
		int engine;
};
struct car c1;
void str()
{
strcpy(c1.company,"bmw");
strcpy(c1.color,"black");
c1.engine=123;
c1.modelNo=4563;

  printf("%d",c1.engine);
}










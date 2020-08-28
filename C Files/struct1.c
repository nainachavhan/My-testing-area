/*
 * struct1.c
 *
 *  Created on: Aug 18, 2020
 *      Author: HP
 */

#include<stdio.h>
#include<stdlib.h>
#include "structureIntro.h"

int main(){

	CAR c1;

	SYSTEMPTR sonySystem = (SYSTEMPTR)malloc(sizeof(SSYSTEM));
	//struct StereoSystem* ptr = (struct StereoSystem*)malloc(sizeof(struct StereoSystem));
	sonySystem->volume = 10;
	sonySystem->radio = 20;
	sonySystem->usb = 3;


	struct Car* cPtr;
	cPtr = &c1;

	c1.engine = 10;
	c1.model = 5;
	c1.system = sonySystem;

	changeSystemVolume(cPtr);
	//c1.system->volume = changeSystemVolume(c1);

	printf("\nThe model number = %lf", c1.model);
	printf("\nThe volume of system = %d", c1.system->volume);
	return 0;
}

void changeSystemVolume(const struct Car *car1) {
	//car1->system = (struct StereoSystem*)malloc(sizeof(struct StereoSystem));

	car1->system->volume = 20;
}


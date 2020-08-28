/*
 * power3.c
 *
 *  Created on: Aug 21, 2020
 *      Author: HP
 */


#include <stdio.h>
int main() {
    int base, exp;
    int result = 1;
    printf("Enter a base number: ");
    scanf("%d", &base);
    printf("Enter an exponent: ");
    scanf("%d", &exp);

    while (exp != 0) {
        result *= base;
        --exp;
    }
    printf("Answer = %d", result);
    return 0;
}





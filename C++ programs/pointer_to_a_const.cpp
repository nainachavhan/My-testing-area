#include<stdio.h>

int main(void)
{
    int a = 10;
    const int* ptr = &a;


    printf("\n value at ptr is  : [%d]\n", *ptr);
    printf("\n Address pointed by ptr  : [%p]\n", (unsigned int*)ptr);

    *ptr+2;

    return 0;
}
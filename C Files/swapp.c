///*
// * swapp.c
// *
// *  Created on: Jul 30, 2020
// *      Author: HP
// */



}
//#include <stdio.h>
//
//int main()
//{
//	int a=10,b=20;
//	a=a+b;
//	b=a-b;
//	a=a-b;
//	printf("a= %d",a);
//	printf("\n b= %d",b);
//	return 0;
//
//}
//
//
#include <stdio.h>
#include <limits.h>
#include <float.h>

int addn()
{
    printf("Range of signed char %d to %d\n", SCHAR_MIN, SCHAR_MAX);
    printf("Range of unsigned char 0 to %d\n\n", UCHAR_MAX);

    printf("Range of signed short int %d to %d\n", SHRT_MIN, SHRT_MAX);
    printf("Range of unsigned short int 0 to %d\n\n", USHRT_MAX);

    printf("Range of signed int %d to %d\n", INT_MIN, INT_MAX);
    printf("Range of unsigned int 0 to  lu\n\n", UINT_MAX);

    printf("Range of signed long int %ld to %ld\n", LONG_MIN, LONG_MAX);
    printf("Range of unsigned long int 0 to %lu\n\n", ULONG_MAX);

    // In some compilers LLONG_MIN, LLONG_MAX
    printf("Range of signed long long int %lld to %lld\n", LONG_LONG_MIN, LONG_LONG_MAX);
    // In some compilers ULLONG_MAX
    printf("Range of unsigned long long int 0 to %llu\n\n", ULONG_LONG_MAX);

    printf("Range of float %e to %e\n", FLT_MIN, FLT_MAX);
    printf("Range of double %e to %e\n", DBL_MIN, DBL_MAX);
    printf("Range of long double %e to %e\n", LDBL_MIN, LDBL_MAX);

    return 0;
}


//#include<stdio.h>
//int main()
//{
//	int a=20;
//	int b=++a + ++a  + ++a + ++a;
//	printf("\n the value of b=%d",b);
//	return 0;
//}

// palindrome

#include<stdio.h>

int main()
{
int reverse_num,num,temp,remainder;
printf("enter the no");
scanf("%d",&num);
temp=num;
while(temp!=0)
{
	remainder=num%10;
	reverse_num=(reverse_num*10)+remainder;
	temp/=10;
}

if (reverse_num==num)
{
	 printf("number is palindrome");
}

  else
{
	   printf("number is not palindrome");
}
return 0;

//}

//add first and last no

#include<stdio.h>
	   int main()
{
	int num,last,sum,first,digits;
	printf("\n enter the no");
	scanf("%d" , &num);
	last=num%10;

	first=num;
	while(num>=10)
	{
		num=num/10;
	}
	first=(num/ pow(10,digits));

	sum=first+last;

	printf("the result of number is %d" ,sum);
	return 0;
}



#include <stdio.h>

int main()
{
    int unit;
    float amt, total, sur_charge;

    /* Input unit consumed from user */
    printf("Enter total units consumed: ");
    scanf("%d", &unit);


    /* Calculate electricity bill according to given conditions */
    if(unit <= 50)
    {
    	amt=unit*0.50;

    }
    else if(unit<=150)
    {
    	amt=(50*.50)+((unit-50))*0.75;
    }

    else if(unit<=250)
    {
    	amt=(50*.50)+(100*0.75)+((unit-150))*1.20;
    }
    else
    {
    amt=(50*.50)+(100*0.75)+(100*1.2)+((unit-250))*1.5;

    }
sur_charge=amt*0.20;
total= amt+sur_charge;
printf("the electricity bill is=%2f",total)
return 0;
}
    return 0;
}






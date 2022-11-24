#include<stdio.h>
main()
{
	int year;
	printf("ENTER YEAR = ");
	scanf("%d",&year);
	year%400==0? printf("this is leap year")
	:printf("this not a leap year");
}

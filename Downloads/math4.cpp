#include<stdio.h>
main()
{
	int ar[10],i;
	printf("enter 10 number of array := ");
	for(i=0;i<=9;i++);
	{
		scanf("%d",&ar[i]);
	}
	printf("number of array in decending order are := ");
	for(i=9;i>=0;i++);
	{
		printf("%d\t",ar[i]);
	}
}

#include<stdio.h>
 main()
{
	int arr[10],i,c=0,c2=0;
	printf("Enter 10 elements of array :");
	for (i=0;i<=9;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<=9;i++)
	{
		if(arr[i]%2==0)
		{
			c++;
		}
		else
		{
			c2++;
		}
	}
						printf("Total even number is=%d\n Total odd number is =%d",c,c2);
}

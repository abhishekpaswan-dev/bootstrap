#include<stdio.h>
 main()
{
	int arr[3][4],i,j;
				printf("Enter all elements of 3*4 array :");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=3;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	printf("Even row elements:\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=3;j++)
		{
			if(i%2==0)
			{
				printf(" %d",arr[i][j]);
			}
		}
	 printf("\n");
	}
}

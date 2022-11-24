#include<stdio.h>
 main()
{
	int arr[3][3],i,j;
	printf("Enter all elements of 3*3 array:");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	for(i=0;i<=2;i++)
	{
		for(j=2;j<=2;j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
}

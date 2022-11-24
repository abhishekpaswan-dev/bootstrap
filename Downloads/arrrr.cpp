#include<stdio.h>
 main()
{
	int arr[3][3],i,j,transpose[3][3];
	printf("Enter matrix elements :");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
		printf("matrix elements :\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			transpose[j][i]=arr[i][j];
		}
	}
	printf("Transpose matrix:\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("%d ",transpose[i][j]);
		}
		printf("\n");
	}
		}

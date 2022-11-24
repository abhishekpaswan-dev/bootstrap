#include<stdio.h>
void main()
{
	int a[3][3],b[3][3],sum[3][3],i,j;
	printf("Enter elements of matrix a:");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Mtrix of a:\n");
		for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("Enter elements of b matrix:\n");
		for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
		printf("Mtrix of b:\n");
		for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
		printf("sum of mtrix:\n");
		for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			sum[i][j]=a[i][j]+b[i][j];
			printf("%d ",sum[i][j]);
		}
		printf("\n");
	}
}

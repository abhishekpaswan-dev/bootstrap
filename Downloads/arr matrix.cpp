#include<stdio.h>
main()
{
	int arr[3][3],i,j;
	printf("Enter all elements os 3*3 matrix:");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	int c=1;
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			if((i==j && arr[i][j]!=1) || (i!=j && arr[i][j]!=0))
			{
				printf("This matrix is not identity matrix");
				c=0;
				break;
			}
		}
	}
	if(c==1)
	{
		printf("This matrix is identity matrix");
	}
	
}

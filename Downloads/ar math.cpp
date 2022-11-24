#include<stdio.h>
main()
{
	int ar[6],i,sum=0;
	printf("ENTER SUB NMBER = ");
	for(i=0;i<=5;i++)
	{
		scanf("%d",&ar[i]);
		sum=sum+ar[i];
	}
	
	
	printf("SUM = %d",sum);
	printf("AVERAGE = %d",sum/6);
}

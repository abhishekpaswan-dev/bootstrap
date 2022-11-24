#include<stdio.h>
main()
{
	int ar[10],i,n,c;
	printf(" ENTER 10 ELEMENT = ");
	for(i=0;i<=9;i++)
	{
		scanf("%d",&ar[i]);
	}
	printf(" ENTER NUMBER TO CHECK SAME NUMBER = ");
	scanf("&d",&n);
	for(i=0;i<=9;i++)
	{
		if(n==ar[i])
		c++;
		
	}
	printf("YES? %d IS %d IN ARRAY = ",n,c);
	
}

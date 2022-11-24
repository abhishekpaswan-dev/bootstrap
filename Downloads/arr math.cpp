#include<stdio.h>
main()
{
	int ar[10],i,a=0,b=0;
	printf("ENTER NUMBER = ");
	for(i=1;i<=9;i++)
	{
		scanf("%d",&ar[i]);
	}
	for(i=1;i<=9;i++)
	{
		if(ar[i]%2==0)
	
	{
		a++;
	}
	else
	{
		b++;
	}
}
	printf("TOTAL NUMBER OF PRIME = %d\n TOTAL NUMBER OF NOT PRIME NUMBER = %d",a,b);
}

#include<stdio.h>
#include<conio.h>
 main ()
{
	int i,n,r,factn=1,factr=1,factnr=1;
	printf("enter n and r to calculate ncr : ");
	scanf("%d%d",&n,&r);
	for(i=1;i<=n;i++)
	{
		factn=factn*i;
	}
	for(i=1;i<=r;i++)
	{
		factr=factr*i;
	}
	for(i=1;i<=n-r;i++)
	{
		factnr=factnr*i;
	}
	printf("ncr=%d",factn/(factr*factnr));
	
	return(ncr);
	


}

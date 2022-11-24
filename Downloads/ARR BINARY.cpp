#include<stdio.h>
main()
{
	int ar[10],i,j,v,n,first,last,mid;
	printf("ENTER 10 ELEMENT IN ARRAY : =");
    for(i=0;i<=9;i++)
	{
		scanf("%d",&ar[i]);
		}	

for(i=0;i<=9;i++)
{
	for(j=i+1;j<=9;j++)
	{
		if(ar[i]>ar[j])
		{
			v=ar[i];
			ar[i]=ar[j];
			ar[j]=v;
		}
}
}
printf("ENTER NUMBER FOR SEARCH = ");
scanf("%d",&n);
first=0;
last=9;
while(first<=last)
{
	mid=(first+last)/2;
	if(ar[mid]==n)
	{
		printf("SEARCH SUCCESSFULL");
		break;
	}
else if(ar[mid]>n)
{
	
	last=mid-1;
	
}
else if(ar[mid]<n)
{


	mid=first+1;
}
}
if(first>last)
{
	printf("UNSUCCESSFULL");
}

}

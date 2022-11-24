#include<stdio.h>
int prime(int num);
main()
{
	int a,b;
	printf("enter the number");
	scanf("%d",&a);
	b=prime(a);
	if(b==1)
	{
		printf("%d is prime number = ",a);
		
	}
	else
	{
		printf("%d is not aprime nmbr = ",a);
	}
	
}
int prime (int num)
{
	int d,i,count=0;
	for(i=1;i<=num;i++)
	{
		d=num%i;
		if(d==0)
		{
			count++;
		}
		
	}
	

 if(count==2)
{
return 1;	
}
else
{
	return 0;
}
}

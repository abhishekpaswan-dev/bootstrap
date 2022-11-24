#include<stdio.h>
void sum(int a, int b);
void sum(int a, int b)
{
printf("addition = %d",a+b);	
}
int sub(int a, int b)
{
	return a-b;
}
int mul(int a,int b)
{
	return a*b;
}
void div(int a, int b)
{
	printf("division = %d",a/b);
}
   main()
{
	int n1,n2,ch,res;
	printf("enter two number = ");
	scanf("%d%d",&n1,&n2);
	printf("enter 1 to add,2 for sub,3 for mul,4 for div : ");
	scanf("%d",ch);
	switch(ch)
	{
		case 1:
		sum(n1,n2);
		break;
		case 2:
			sub(a-b);
			printf("sub = %d",sub(a-b));
			break;
	}
}

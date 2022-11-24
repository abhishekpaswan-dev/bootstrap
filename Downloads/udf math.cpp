#include<stdio.h>
int mul(int a,int b);
main()
{
	int a,b,c;
	printf("ENTER A NUMBER : ");
	scanf("%d%d",&a,&b);
	printf("1 for circle,2 for rectangle,3 for triangle");
	scanf("%d",&c);
	if(c==1)
	{
int r;
printf("enter radius of circle : ");
scanf("%d",&r);
printf("area of the circle : %f",3.14*mul(r,r));			
	}
	else if(c==2)
	{
		int l,b;
		printf("enter the lenght and breath of rec = ");
		scanf("%d%d",&l,&b);
		printf("area of rec = %d",mul(l,b));
	}
	else if(c==3)
	{
		int b,h;
		printf("enter the base and height = ");
		scanf("%d%d",&b,&h);
		printf("area of triangle = %f",0.5*mul(b,h));
	}
}
int mul(int a,int b)
{
	return a*b;
}



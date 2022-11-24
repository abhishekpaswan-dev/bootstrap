#include<stdio.h>
 int main()
{
	int a,b,c;
add:
	printf("enter num for add = ");
	scanf("%d%d",&a,&b);
	printf("ADDITION = &d",a+b);
	printf("DO YOU WANT TO CONTINUE ? PRESS 1 FOR YES PRESS 2 FOR NO ");
	scanf("%d",&c);
	if(c==1)
    	goto add;
	else
	  goto end;
	end:
		printf("THANK YOU");
	}
	
	
 
 

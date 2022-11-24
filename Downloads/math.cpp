#include<stdio.h>
  main()
{
	int a,b,c,add;
	printf(" enter two nmbr for add = ");
	scanf("%d%d",&a,&b);
	printf(" ADDITION = %d",a+b);
	printf("DO YOU WANT TO CONTINUE? PRESS 1 TO YES AND PRESS 2 TO NO");
	scanf("%d",&c);
	if(c==1)
	{
		goto add;
	}
	else
	
		end:
	
	printf("THANK YOU");
}

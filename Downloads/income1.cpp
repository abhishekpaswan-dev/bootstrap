#include<stdio.h>
main()
{
	float income,tax,gst;
	printf("ENTER INCOME = ");
	scanf("%d",&income);
	gst=15;
	tax=income+(1000*(gst/100));
	income>=500000==0? printf("you pay tax 5%\n"): printf("you pay tax 15%\n");
	//tax=income+(1000*(18/100));
	printf("tax pay = %3f\n",tax);
	
}

#include<stdio.h>
main()
{
	int days,years,month;
	printf("ENTER TOTAL DAYS :");
	scanf("%d",&days);
	years=days/365;
	days=days%365;
	days=days%365;
	month=days/30;
	//month=(days%365)/30;
	printf("YEARS :=%d",years);
	printf("MONTH :=%d",month);
	printf("DAYS :=%d",days);
	
	
	
	
}

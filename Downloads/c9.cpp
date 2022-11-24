#include<stdio.h>
main()
{
	int sec,min,hours;
	printf("ENTER SEC :=");
	scanf("%d",&sec);
	hours=sec/3600;
	//sec=sec%3600;
	min=sec/60;
	sec=sec%60;
	printf("HOURS := %d",hours);
	printf("MIN := %d",min);
	printf("sec :=%d",sec);
	
}

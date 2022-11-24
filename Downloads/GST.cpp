#include<stdio.h>
main()
{
	int fees,tutionfees;
	float total,gst;
	printf("ENTER FEES + TUTION FEES = ");
	scanf("%d%d",&fees,&tutionfees);
	total=fees+tutionfees;
	gst=total+(18/100);
	printf("TOTAL = %f\n",total);
	printf("GST = %2f\n",gst);
}

#include<stdio.h>
#include<conio.h>
main()
{
	int n,dis,pay;
	printf("ENTER NUMBER:");
	scanf("%d",&n);
	dis=(n*20)/100;
	pay=n-dis;
	printf("DISCOUNT:%d\n",dis);
	printf("PAYABLE:%d",pay);
	getch();
	
}

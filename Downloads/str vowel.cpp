#include<stdio.h>
#include<string.h>
main()
{
	char name[100];
	int i,count=0;
	printf("ENTER NAME = ");
	gets(name);
	for(i=0;i<strlen(name);i++);
	{
		if(name[i]=='a' || name[i]=='e' || name[i]=='i' || name[i]=='o' || name[i]=='u')
		count++;
	}
	printf("%d TIME PRESENT IN NAME %s = ",count,name);
	getch(0);
}

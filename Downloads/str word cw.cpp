#include<stdio.h>
#include<string.h>
 main()
{
	char name[100];
	int i,word=0;
	printf("ENTER NAME = ");
	gets(name);
	for(i=0;i<strlen(name);i++)
	{
		if(name[i]==' ')
		{
			word++;
		}
		
	}
	printf("TOTAL WORD %d",word+1);
}

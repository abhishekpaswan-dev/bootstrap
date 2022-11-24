#include<stdio.h>
#include<string.h>
main()
{
	char name[100],sortname[100];
	int i,pos=2,sp;
	printf("ENTER NAME = ");
	gets(name);
	sortname[0]=name[0];
	sortname[1]='.';
	for(i=0;i<strlen(name);i++)
	{
		if(name[i]==' ')
		{
			sortname[pos]=name[i+1];
			sortname[pos+1]='.';
			pos+=2;
		}
	}
	
	pos=pos-2;
	for(i=sp+1;i<strlen(name);i++)
	{
	
	
		sortname[pos]=name[i];
		pos++;
	}
	
	sortname[pos]='\0';
	printf("sortname = %s",sortname);
}

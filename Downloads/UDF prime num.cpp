#include<stdio.h>
int prime(int);
main()
{
	int i;
	printf("prime number within 1 to 1000 are = ");
	for(i=1;i<=1000;i++)
	{
		if (prime(i)==1)
		printf("%d\n",i);
	}
}
int prime(int num)
{
int i,count=0;
for(i=2;i<num;i++)
{
	if(num%i==0)
	count++;
}
if(count==0)
{

return 1;
}
 else
{
	return 0;
}
}
	


#include<stdio.h>
main()
{
	int num;
	printf("ENTER NUM = ");
	scanf("%d",&num);
	num%2==0? (num%3==0?printf("number is divisible by 2and 3 both"):printf("number is divisible by 2 but not 3"))
	:(num%3==0? printf("number is divisible by 3 but not 2")
	:printf("number is not divisible by 2 not 3"));
}

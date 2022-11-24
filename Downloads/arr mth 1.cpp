#include<stdio.h>
main()
{
	int arr[10],l,i;
	printf("Enter 10 elements of array :");
	for(i=0;i<=9;i++)
	{
		scanf("%d",&arr[i]);
	}
	l=arr[0];
	for(i=1;i<=9;i++){
			if(l<arr[i])
	l=arr[i];
	}
	printf("largest number of this array = %d",l);
}

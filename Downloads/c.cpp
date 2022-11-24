#include<stdio.h>
#include<conio.h>
   main()
{
int n1,n2,n3,n4,total,percentage;
printf("There are five subject name\n");
printf("MATH=50\n");
printf("BIOLOGY=60\n");
printf("SOCIAL=55\n");
printf("SCIENCE=65\n");
//scanf("%d%d%d%d",&n1,&n2,&n3,&n4);
n1=50;
n2=60;
n3=55;
n4=65;
total=n1+n2+n3+n4;
percentage=(total*100)/500;
printf("SUM OF TOTAL SUB NUMBER:%d\n",total);
printf("PERCENTAGE:%d",percentage);

	//getch();
}

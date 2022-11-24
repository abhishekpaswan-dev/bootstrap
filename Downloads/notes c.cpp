#include<stdio.h>
#include<conio.h>
main()
{
	int amount,twothousands,fivehundreds,twohundreds,hundreds,fifty,ten,five,one;
	int remainrupees; 
	printf("ENTER AMOUNT :=");
	scanf("%d",&amount);
	twothousands=remainrupees/2000;
	remainrupees=remainrupees%2000;
	fivehundreds=remainrupees/500;
	remainrupees=remainrupees%500;
	twohundreds=remainrupees/200;
	remainrupees=remainrupees%200;
	hundreds=remainrupees/100;
	remainrupees=remainrupees%100;
	fifty=remainrupees/50;
	remainrupees=remainrupees%50;
	ten=remainrupees/10;
	remainrupees=remainrupees%10;
	five=remainrupees/5;
	remainrupees=remainrupees%5;
	one=remainrupees/1;
	remainrupees=remainrupees%1;
	printf("TWO THOUSANDS = %d\n",twothousands);
	printf("FIVE HUNDREDS = %d\n",fivehundreds);
	printf("TWO HUNDREDS = %d\n",twohundreds);
	printf("HUNDREDS = %d\n",hundreds);
	printf("FIFTY = %d\n",fifty);
	printf("TEN = %d\n",ten);
	printf("FIVE = %d\n",five);
	printf("ONE = %d\n",one);
	getch();
}

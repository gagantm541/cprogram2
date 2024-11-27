#include<stdio.h>
void main()
{
	int sum=0,n;
	clrscr();
	for(n=1;n<=10;n++)
	{
		sum=sum+n*n;
		printf("\n sum=sum+n*n");
		printf("\n %d=%d+%d*%d",sum,sum,n,n);
	}
	printf("\n value of sum = %d",sum);
	getch();
}
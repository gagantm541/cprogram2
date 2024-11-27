#include<stdio.h>
#include<ctype.h>
void main()
{
	int a,b,sum,result_a,result_b;
	clrscr();
	printf("\n enter the value of a=");
	scanf("%d",&a);
	result_a=isdigit(a);
	printf("\n value of result_a=%d",result_a);
	if(result_a==0)
		printf("\n the entered value of a is digit");
	else
		printf("\n the entered value of a is not digit");
	printf("\n enter the value of b=");
	scanf("%d",&b);
	result_b=isdigit(b);
	printf("\n value of result_b=%d",result_b);
	if(result_b==0)
		printf("\n the entered value of b is digit");
	else
		printf("\n the entered value of b is not digit");
	sum=a+b;
	printf("\n sum=%d",sum);
	getch();
}
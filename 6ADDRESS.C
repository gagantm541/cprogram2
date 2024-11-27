#include<stdio.h>
void main()
{
	int a=10;
	float c=8.5;
	char b='M';
	clrscr();
	printf("\n value of a=%d address of a=%p",a,&a);
	printf("\n value of c=%f address of c=%p",c,&c);
	printf("\n value of b=%c address of b=%p",b,&b);
	getch();
}
#include <stdio.h>
int main( )
{
	int p,n;
	float r,si;
	clrscr();
	printf("Enter values of p:");
	scanf("%d",&p);
	printf("Enter values of n:");
	scanf("%d",&n);
	printf("Enter values of r:");
	scanf("%f",&r);
	si=p*n*r/100;
	printf("simple interest =%f",si);
	getch();
	return 0 ;
}
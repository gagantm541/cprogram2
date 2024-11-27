#include<stdio.h>
int main()
{
	long int n,d5,d4,d3,d2,d1;
	long int revnum;
	//printf("\nEnter a five digit number (less than 32767):");
	//scanf("%d",&n);
	n=12345;
	clrscr();
	printf("\n value of n=%ld",n);
	d5=n%10;
	n=n/10;
	printf("\nd5=%ld",d5);
	printf("\nafter d5 n=%ld",n);
	n=n*10000;
	revnum=n;
	printf("\n after 10000 n=%d",n);
	printf("\n revnum =%ld",revnum);
	/*revnum=n*10000;
	d4=n%10;
	n=n/10;
	revnum=revnum+n*1000;
	d3=n%10;
	n=n/10;
	revnum=revnum+n*100;
	d2=n%10;
	n=n/10;
	revnum=revnum+n*10;
	d1=n%10;
	revnum=revnum+d1;
	printf("\nreversed number=%d%d%d%d%d",d5,d4,d3,d2,d1);
	printf("\nrevnum =%ld",revnum);*/
	getch();
	return 0;
}
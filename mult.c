#include<stdio.h>
void main()
{
	int i,number;
	scanf("%d%d",&i,&number);
	for(i=1;i<=5;i++)
		printf("%d*%d=%d",i,number,i*number);
}
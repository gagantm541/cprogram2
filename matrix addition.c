//Program for Matrix addition
#include<stdio.h>
void main()
{
	int n,i,j,a[5][5],b[5][5],c[5][5];
	clrscr();
	printf("\n Enter the order of matrix:");
	scanf("%d",&n);
	printf("\nEnter A matrix elements:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nEnter B matrix elements:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("\n Addition of matrix are\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	printf("\n Sum of matrix are\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
	getch();
}

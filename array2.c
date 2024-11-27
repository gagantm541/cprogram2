#include<stdio.h>
void main()
{
    int x[10],i, value, total=0, size ;
    clrscr();
    for( i = 0 ; i < 10 ; i++ )
    {
	scanf("%d", &value) ;
	x[i] = value ;
    }
    for( i = 0 ; i < 10 ; i++ )
	total = total + x[i] * x[i] ;
    printf("\ntotal = %d\n", total) ;
    getch();
}
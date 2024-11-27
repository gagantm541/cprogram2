#include<stdio.h>
void main()
{
    int i, value, total=0, size ;
    printf("\n How many variables to create");
    scanf("%d",&size);
    printf("ENTER N NUMBERS\n") ;
    int x[];
    for( i = 0 ; i < size ; i++ )
    {
	printf("\n Enter value %d for x[%d]=",i+1, i);
	scanf("%d", &value) ;
	x[i] = value ;
    }
    for( i = 0 ; i < size ; i++ )
	total = total + x[i] * x[i] ;
    printf("\n");
    for( i = 0 ; i < 10 ; i++ )
	printf("\n x[%d] = %d\n", i+1, x[i]) ;
    printf("\ntotal = %d\n", total) ;
    getch();
}
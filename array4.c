#include<stdio.h>
void main()
{
    int x[5] , i , total=0;
    for( i = 0 ; i < 5 ; i++ )
    {
    	printf("enter %d value of x[%d]=",i+1,i);
    	scanf("%d", &x[i]) ;
    }
    for( i = 0 ; i < 5 ; i++ )
    {
        int b_total=total;
        printf("\n before total=%d i=%d",total,i);
        printf("\n total+x[i]*x[i]");
	    printf("\n %d+%d*%d",b_total,x[i],x[i]);
	    total = b_total + x[i] * x[i] ;
	    printf("\n after total+x[i]*x[i]");
	    printf("\n %d=%d+%d*%d",total,b_total,x[i],x[i]);
	    printf("\n after total = %d \n",total);
    }
    printf("\n  total = %d \n", total) ;
}
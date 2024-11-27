#include <stdio.h>
void main() 
{
    int a=5,*p=&a,**t=&p;
    printf("\n value of a = %d",a);
    printf("\n address of a=%p",&a);
    printf("\n address of a=%p",p);
    printf("\n value of a=%d",*p);
    *p=6;
    printf("\n value of a = %d",a);
    printf("\n value of p=%p",p);
    printf("\n address of p=%p",&p);

    printf("\n value of t=%p",t);
    **t=3;
    printf("\n value of a=%d",a);
    
}
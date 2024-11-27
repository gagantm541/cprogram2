// Online C compiler to run C program online
#include <stdio.h>
void add(int a, int b)
{
    printf("\n sum=%d",a+b);
}
void sub(int a, int b)
{
    printf("\n sub=%d",a-b);
}
int main()
{
    int x,y,a;    
    printf("\n Enter 0 to quit");
    printf("\n Enter 1 to add");
    printf("\n Enter 2 to sub\n");
    do
    {
        scanf("%d",&a);
		printf("\n enter value of x & y");
		scanf("%d",&x);
		scanf("%d",&y);
        switch(a)
        {
            case 1:
                add(x,y);
                break;
            case 2:
                sub(x,y);
                break;
            default:
                printf("\n not valid input");
        }
        printf("\n enter again\n");
    } while(a!=0); 
    printf("\n came out of do while loop");
}
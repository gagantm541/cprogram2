#include <stdio.h>
void main()
{
    int x = 10, a;
    a = x++;
    printf("\nPre Increment Operation:");
    // Value of a will  change
    printf("\na =%d ", a);
    // Value of x change does not change after execution of a= ++x , because it is already changed;
    printf("\n x = %d",x);
}
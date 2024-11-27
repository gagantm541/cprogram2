#include <stdio.h>
union pack
{
    char a;
    int b;
    double c;
};
void main()
{
union pack p;
printf("\nOccupied size by union pack: %d",sizeof(p));
printf("\nchar= %d",sizeof(char));
printf("\nint =%d",sizeof(int));
printf("\ndouble =%d",sizeof(double));



}

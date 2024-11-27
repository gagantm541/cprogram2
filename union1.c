#include<stdio.h>
union pack
{
    char a;
    int b;
    double c;
};
struct pack1
{
    char a;
    int b;
    double c;
};
void main()
{
   union pack p;
   struct pack1 s;
   char aa;
   int bb;
   double cc;
   printf("\n enter value for aa\n");   
   scanf("%c",&aa);
   printf("\n enter value for bb\n");   
   scanf("%d",&bb);
   printf("\n enter value for cc\n");   
   scanf("%lf",&cc);
   p.a=aa;
   p.b=bb;
   p.c=cc;
   s.a=aa;
   s.b=bb;
   s.c=cc;
   printf("\n p.a=%c",p.a);
   printf("\n p.b=%d",p.b);
   printf("\n p.b=%lf",p.c);
   
   printf("\n s.a=%c",s.a);
   printf("\n s.b=%d",s.b);
   printf("\n s.b=%lf",s.c);
   printf("\nOccupied size by union pack:%d",sizeof(p));
   printf("\nOccupied size by struct pack1:%d",sizeof(s));
   printf("\n char= %d",sizeof(char));
   printf("\n int =%d",sizeof(int));
   printf("\n double =%d",sizeof(double));
}

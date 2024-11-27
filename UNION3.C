#include <stdio.h>
union pack
{
    char a;
    int b;
    double c;
};
struct pack1
{
    char d;
    int e;
    double f;
};
void main()
{
	union pack p;
	struct pack1 s;
	char g;
	int h;
	double i;
	clrscr();
	printf("\n enter tree values g h i\n");
	scanf(" %c %d %lf \n",&g,&h,&i);
	s.d = p.a = g;
	s.e = p.b = h;
	s.f = p.c = i;
	printf("\n value of a in union pack=%c",p.a);
	printf("\n value of b in union pack=%d",p.b);
	printf("\n value of c in union pack=%lf",p.c);
	printf("\n value of d in struct pack1=%c",s.d);
	printf("\n value of e in struct pack1=%d",s.e);
	printf("\n value of f in struct pack1=%lf",s.f);
	printf("\n Occupied size by union pack: %d",sizeof(p));
	printf("\n Occupied size by struct pack1: %d",sizeof(s));
	printf("\nchar= %d",sizeof(char));
	printf("\nint =%d",sizeof(int));
	printf("\ndouble =%d",sizeof(double));
	getch();
}

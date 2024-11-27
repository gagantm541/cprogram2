#include<stdio.h>
float circle_area(float r)
{
	return 3.14*r*r;
}
float circle_perimeter(float r)
{
	return 3.14*2*r;
}
void main()
{
	float radius,length1,length2;
	float circle_a,circle_p;
	clrscr();
	printf("\n enter radius \n");
	scanf("%f",&radius);
	printf("\n enter length1 \n");
	scanf("%f",&length1);
	printf("\n enter length2 \n");
	scanf("%f",&length2);
	circle_a=circle_area(radius);
	printf("\n circle area=%f",circle_a);
	circle_p=circle_perimeter(radius);
	printf("\n circle area=%f",circle_p);
	getch();
}


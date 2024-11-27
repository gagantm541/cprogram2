#include <stdio.h>
#include <math.h>
void main() 
{
    float angle[5]={0,3.14/6,3.14/4,3.14/3,3.14/2};
    int i;
    clrscr();
	printf("\n Angles\t 0 \t 30 \t 45 \t 60 \90 ");
    printf("\n sin\t");
    for(i=0;i<5;i++)
		printf("%.2f \t",sin(angle[i]));
	printf("\n cos\t");
	for(i=0;i<5;i++)
		printf("%.2f \t",cos(angle[i]));
	printf("\n tan\t");
	for(i=0;i<5;i++)
		printf("%.2f \t",tan(angle[i]));
    getch();
}
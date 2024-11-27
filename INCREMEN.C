#include<stdio.h>
void main()
{
	int a=5,pre_a=0;
	clrscr();
	printf("\n a=%d pre_a=%d ",a, pre_a);
	//printf("\n post_a=%d",a, post_a);
	pre_a=++a;
	//post_a=a++;
	printf("\n a=%d ++a=%d",a,pre_a);
	//printf("\n a=%d a++=%d",a,post_a);
	getch();
}
#include<stdio.h>
int addition(int a, int b)
{   
	return a+b;
}
int subtraction(int a, int b)
{   
	return a-b;
}
int multiplication(int a, int b)
{   
	return a*b;
}
int division(int a, int b)
{   
	return a/b;
}
void main()
{
    int x=10,y=5,add,sub,mul,div;
    printf("\n x=%d y=%d",x,y);
	add=addition(x,y);
	printf("\n addition = %d",add);
	sub=subtraction(x,y);
	printf("\n subtraction = %d",sub);
	mul=multiplication(x,y);
	printf("\n multiplication = %d",mul);
	div=division(x,y);
	printf("\n division = %d",div);
}


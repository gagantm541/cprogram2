#include <stdio.h> 
int main()
{
	int i, j,table=2,max=5;
	for (i = 1; i <= table; i++)
	{  
		for (j = 0; j <= max; j++)
		{ 
			printf("%d x %d = %d\n", i, j, i * j);
		}
		printf("\n"); 
	}
}
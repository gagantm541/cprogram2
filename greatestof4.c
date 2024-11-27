#include<stdio.h>

void main()
{
	int i, j, k, l;
	printf("\n Enter any 4 numbers : ");
	scanf("%d%d%d%d", & i, & j, & k, & l);
	if (i > j)
	{
		if (i > k)
		{
			if (i > l)
				printf("\n Max. Number = %d ", i);
			else
				printf("\n Max. Number = %d ", l);
		}
		else
		{
			if (k > l)
				printf("\n Max. Number = %d ", k);
			else
				printf("\n Max. Number = %d ", l);
		}
	}
	else 
	{
		if (j > k) 
		{
			if (j > l)
				printf("\n Max. Number = %d ", j);
			else
				printf("\n Max. Number = %d ", l);
		}
		else 
		{
			if (k > l)
				printf("\n Max. Number = %d ", k);
			else
				printf("\n Max. Number = %d ", l);
		}
	}
}
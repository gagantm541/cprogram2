# include <stdio.h>
int main( )
{
	char name[3];
	float price[3];
	int pages[3],i;
	clrscr();
	printf("Enter names, prices and no. of pages of 3 books\n" ) ;
	for ( i = 0 ; i < 3 ; i++ )
	{
	    printf("%d\n",i+1);
	    scanf("%c",&name[i]);
	    scanf("%f",&price[i]);
	    scanf("%d",&pages[i]);
	}
	printf ( "And this is what you entered\n" ) ;
	for ( i = 0 ; i <3 ; i++ )
	{
		printf("%c\t",name[i]);
		printf("%f\n",price[i]);
		printf("%d\n",pages[i]);

	}
	getch();
	return 0 ;
}

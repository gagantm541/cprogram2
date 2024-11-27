# include <stdio.h>
int main( )
{
	char name;
	float price[3];
	int pages[3],i;
	printf("Enter names, prices and no. of pages of 3 books\n" ) ;
	for ( i = 0 ; i < 3 ; i++ )
		scanf("%c %f %d",&name[i],&price[i],&pages[i]);
	printf ( "And this is what you entered\n" ) ;
	for ( i = 0 ; i < 3 ; i++ )
		printf("%c %f %d\n",name[i],price[i],pages[i]);
	return 0 ;
}

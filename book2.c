# include <stdio.h>
int main( )
{
    struct book
    {
        char name[3];
        float price ;
        int pages ;
    } ;
    struct book b[3];
    int i ; 
    for ( i = 0 ; i < 3 ; i++ )
    {
        printf ( "Enter name, price and pages\n" ) ;
        scanf ( "%s%f%d", &b[ i ].name, &b[ i ].price, &b[ i ].pages ) ;
    }
    for ( i = 0 ; i < 3 ; i++ )
        printf ( "%s %f %d\n", b[ i ].name, b[ i ].price, b[ i ].pages ) ;
    return 0 ;
}
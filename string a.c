#include <stdio.h>
#include <ctype.h>
void main()
{
    int input=5;
    if (isdigit(input)) 
    {
        printf("%d is digit/number.\n", input);
    } 
    else
    {
        printf("%d is not a digit/number.\n",input);
    }
    
}
//C Program to Read and Write a Single Character
//In this program, we are just reading a single character and displaying the same character on the console.
#include <stdio.h>
#include <stdlib.h>
int main( )
{
 char ch;
 printf("Enter a character: ");
 ch=getchar();
 printf("You have entered a character: ");
 putchar(ch);
 return 0;
}

// C program to Read the two integer values using formatted input scanf()
#include <stdio.h>
int main()
{
    int a, b, c;
    c = scanf("%d %d", &a, &b);
    printf("Number of successful "
           "inputs read : %d",
           c);
  
    return 0;
}


//Reading string using gets()
#include<stdio.h>  
void main ()  
{  
    char s[30];  
    printf("Enter the string? ");  
    gets(s);  
    printf("You entered %s",s);  
}  

//C puts() function
#include<stdio.h>  
#include <string.h>    
int main(){    
char name[50];    
printf("Enter your name: ");    
gets(name); //reads string from user    
printf("Your name is: ");    
puts(name);  //displays string    
return 0;    
}    

// Formatted I/O Example:
#include<stdio.h>
#include<conio.h>
void main()
{
 int a;
 clrscr();
 printf(“Enter value of a:”);
 scanf(“%d”, &a);
 printf(“ a = %d”, a);
 getch();
}

// Unformatted I/O Example:
#include<stdio.h>
#include<conio.h>
void main()
{
 char ch ;
 clrscr();
 printf(“Press any character:”);
 ch = getchar();
 printf(“\nYou pressed :”)
 putchar(ch);
getch();
}
//type casting 
#include <stdio.h> 
main()
{
	int sum = 17, count = 5;
	double mean;
	mean = (double) sum / count; 
	printf("Value of mean : %f\n", mean );
}

//Write a program to accept any number, and find out, whether it is negative or positive if it is negative then make it positive and print it.
#include<stdio.h>
void main()
{
	int n;
	printf("\n Enter any number ");
	scanf("%d",&n);
	if(n<0)
	{
		n= -n;
	}
	printf("\n Number = %d",n);
}

/*Write a program to accept names and marks in 5 subjects find out percentage marks and print grades to students according to the following conditions.
 
i)	If a student is failed in one subject, then the grade is FAIL.
ii)	If percentage >=75 Grade = Distinction.
iii)	If percentage <75 and percentage >=60 then Grade = First Class.
iv)	If percentage <60 and percentage >=50 then Grade = Second Class
*/
#include<stdio.h>
void main()
{ int m1,m2,m3,m4,m5,T;
float	per;
char	nm;
printf("Enter the name of a Student \n");
scanf("%s",&nm);
printf("Marks of a 5 subjects \n");
scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
printf("English %d\n Statistics %d \n C Programming %d \n Mathematics %d \n Electronics %d \n",m1,m2,m3,m4,m5); T=m1+m2+m3+m4+m5;
printf("Total marks of student =%d \n",T); per=T/5;
printf("Percentage of a Student =%f \n",per);
if(m1<40 || m2<40 || m3<40 || m4<=40 || m5<=40)
{
printf("Student is fail \n");
}
else if(per>=75)
{
printf("Student get Distinction \n");
}
else if(per>=60 && per<75)
{
printf("Student get first class \n");
}
else if(per>=50 && per<60)
{
printf("Student get second class \n");
}
else if(per>=40 && per<50)
{
printf("Student get third class \n");
}
}

/*Write a program to enter the days of the week and display the error message if it’s
wrong day.*/
#include <stdio.h> int main() {
int day;
printf("Enter a number for a day of the week (1-7): "); scanf("%d", &day);
switch (day) {
case 1: printf("Monday\n"); break;
case 2: printf("Tuesday\n"); break;
case 3: printf("Wednesday\n"); break;
case 4: printf("Thursday\n"); break;
case 5: printf("Friday\n"); break;
case 6:
printf("Saturday\n");
break; case 7:
printf("Sunday\n");
break; default:
printf("Invalid day number.\n");
break;
}
return 0;
}

Example Program to perform all arithmetic operations using switch statement. #include<stdio.h>
#include<conio.h> void main(){
int number1, number2, result ; char operator;
clrscr() ;
printf("Enter any two integer numbers: ") ; scanf("%d%d", &number1, &number2) ; printf("Please enter any arithmetic operator: "); operator = getchar();
switch(operator)
{
case '+': result = number1 + number2 ; printf("Addition = %d", result) ;

case '-': result = number1 - number2 ; printf("Subtraction = %d", result) ; break;
case '*': result = number1 * number2 ; printf("Multiplication = %d", result) ; break;
case '/': result = number1 / number2 ; printf("Division = %d", result) ; break;
case '%': result = number1 % number2 ;
 
Example Program for break statement.
#include<stdio.h> #include<conio.h>

void main(){ char ch ; clrscr() ; do
{
printf("Enter Y / N : ") ; scanf("%c", &ch) ;
if(ch == 'Y')
{
printf("Okay!!! Repeat again !!!\n") ;
}
else
{
printf("Okay !!! Breaking the loop !!!") ; break ;
}
} while( 1 ) ;
getch() ;
}

//Example Program to illustrate continue statement.
#include<stdio.h> 
#include<conio.h>
void main(){ int number ; clrscr() ; while( 1 )
{
printf("Enter any integer number: ") ; scanf("%d", &number) ;
if(number%2 == 0)
{
printf("Entered number is EVEN!!! Try another number!!!\n")
;
continue ;
}
else
{
printf("You have entered ODD number!!! Bye!!!") ; exit(0) ;
}
}
getch() ;
}
#include<conio.h>


void main(){ clrscr() ;
printf("We are at first printf statement!!!\n") ; goto last ;
printf("We are at second printf statement!!!\n") ; printf("We are at third printf statement!!!\n") ; last: printf("We are at last printf statement!!!\n") ; getch() ;
}

#include<stdio.h>

//program to find multiplication table upto 2
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

//program to find size of datatypes
#include<stdio.h>
void main()
{
	clrscr();
	printf("\nsize of short int =%d",sizeof(short int));
	printf("\nsize of int =%d",sizeof(int));
	printf("\nsize of long int =%d",sizeof(long int));
	printf("\nsize of unsigned int =%d",sizeof(unsigned int));
	printf("\nsize of double =%d",sizeof(double));
	getch();
}


// program to calculate simple interest
#include<stdio.h>
#include<limits.h>
int main( )
{
	int p,n;
	float r,si;
	clrscr();
	printf("Enter values of p:");
	scanf("%d",&p);
	printf("Enter values of n:");
	scanf("%d",&n);
	printf("Enter values of r:");
	scanf("%f",&r);
	si=p*n*r/100;
	printf("simple interest =%f",si);
	printf("\n%d",INT_MAX);
	printf("\n%d",INT_MIN);
	getch();
	return 0 ;
}

//Program for arithithamic operation of two integers.
#include<stdio.h>
void main()
{
	int a=26,b=5;
	int addition,multiplication,subtraction,division;
	int modulus;
	clrscr();
	printf("\n value of a=%d \t value of b=%d",a,b);
	addition=a+b;
	printf("\n sum(%d+%d)=%d",a,b,addition);
	subtraction=a-b;
	printf("\n difference(%d-%d)=%d",a,b,subtraction);
	multiplication=a*b;
	printf("\n multiplication(%d*%d)=%d",a,b, multiplication);
	division=a/b;
	printf("\n division(%d / %d)=%d",a,b,division);
	modulus=a%b;
	printf("\n modulus(%d %% %d)=%d",a,b,modulus);
	getch();
}

//program for size of datatype
#include<stdio.h>
int main()
{
	int size_of_int = sizeof(int);
	int size_of_char = sizeof(char);
	int size_of_float = sizeof(float);
	int size_of_double = sizeof(double);
	clrscr();
	printf("The size of int data type : %d\n", size_of_int);
	printf("The size of char data type : %d\n",size_of_char);
	printf("The size of float data type : %d\n",size_of_float);
	printf("The size of double data type : %d",size_of_double);
	getch();
	return 0;
}

//program for print statement
#include <stdio.h>
int main()
{
	int testInteger = 5;
	printf("Number = %d", testInteger);
	getch();
	return 0;
}

//program for different types of integers
#include <stdio.h>
#include <limits.h>
int main() 
{
	clrscr();
	printf("Maximum Integer Value: %d\n", INT_MAX);
	printf("Minimum Integer Value: %d\n", INT_MIN);
	printf("Maximum Long Value: %ld\n", LONG_MAX);
	printf("Minimum Float Value: %ld\n", LONG_MIN);
	getch();
	return 0;
}

//program to print address of variables
#include<stdio.h>
void main()
{
	int a=10;
	float c=8.5;
	char b='M';
	clrscr();
	printf("\n value of a=%d address of a=%p",a,&a);
	printf("\n value of c=%f address of c=%p",c,&c);
	printf("\n value of b=%c address of b=%p",b,&b);
	getch();
}


//program for puts statement
#include<stdio.h>
void main()
{
	char ch;
	clrscr();
	printf("Enter a character: ");
	ch=getchar();
	puts("you entered: ");
	putchar(ch);
	getch();
}

//program for gets statement
#include<stdio.h>
void main()
{
	char s[30];
	clrscr();
	printf("Enter the string= ");
	gets(s);
	printf("\n You entered :%s",s);
	getch();
}
//program to find area of triangle
# include <stdio.h>
# include <math.h> 
int main( )
{
	float a,b,c,sp,area;
	printf("\nEnter sides of a triangle: ");
	scanf("%f%f%f",&a,&b,&c);
	sp=(a+b+c)/2;
	area=sqrt(sp*(sp-a)*(sp-b)*(sp-c));
	printf("Area of triangle = %f\n",area );
	return 0;
}

//program for AND logic
#include<stdio.h>
void main()
{
	int a,b,c;
	clrscr();
	scanf("%d%d%d",&a,&b,&c);
	printf("c<a && c<b,res= %d",c<a&&c<b);
	getch();
}

//program for bitwise AND / OR logic
#include<stdio.h>
void main()
{
	int a=7,b=2,c,d;
	clrscr();
	c=a&b;
	d=a|b;
	printf("\n min c=a&d:%d",c);
	printf("\n max d=a|b:%d",d);
	getch();
}

//program to convert kilometer into other units
/* Conversion of distance */
# include <stdio.h>
int main( )
{
	float km, m , cm, ft, inch ;
	printf ( "\nEnter the distance in Kilometers: " ) ;
	scanf ( "%f", &km ) ;
	m = km * 1000 ;
	cm = m * 100 ;
	inch = cm / 2.54 ;
	ft = inch / 12 ;
	printf ( "Distance in meters = %f\n", m ) ;
	printf ( "Distance in centimeter = %f\n", cm ) ;
	printf ( "Distance in feet = %f\n", ft ) ;
	printf ( "Distance in inches = %f\n", inch ) ;
	return 0 ;
}

//program for loop

#include <stdio.h>
void main()
{
	int i;
	clrscr();
	for (i = 0; i <= 5; i++)
	{
		printf("\n %d \n", i);
	}
	getch();
}

//program for sum of first 10 numbers using for loop
#include<stdio.h>
void main()
{
	int sum=0,n;
	clrscr();
	for(n=1;n<=10;n++)
	{
		sum=sum+n*n;
		printf("\n sum=sum+n*n");
		printf("\n %d=%d+%d*%d",sum,sum,n,n);
	}
	printf("\n value of sum = %d",sum);
	getch();
}

//program for goto statement
#include <stdio.h>
int main()
{
   int maxInput = 100;
   int i;
   double number, average, sum = 0.0;
   for (i = 1; i <= maxInput; ++i) 
   {
      printf("%d. Enter a number: ", i);
      scanf("%lf", &number);
      if (number < 0.0) 
	  {
         goto jump;
      }
      sum += number;
   }
   jump:
   average = sum / (i - 1);
   printf("Sum = %.2f\n", sum);
   printf("Average = %.2f", average);

   return 0;
}

//program to find greatest of 4 numbers
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

//multiplication table
#include<stdio.h>
void main()
{
	int i,number;
	scanf("%d%d",&i,&number);
	for(i=1;i<=5;i++)
		printf("%d*%d=%d",i,number,i*number);
}

//nested for loop
void main()
{
	int i,j;
	for(i=1;i<=2;i++)
	{
		for(j=1;j<=2;j++)
		{
			printf("%d%d",i,j);
		}
	}
	getch();
}

//program to find odd or even number
void main()
{
	int n;
	clrscr();
	printf("\n Enter any number : ");
	scanf("%d",&n); 
	if(n%2==0)
		printf("\n The %d is Even ",n);
	else
		printf("\n The %d is Odd ",n);
	getch();
}

//program for operators
#include<stdio.>
void main()
{
	int a=7, b=3, c;
	printf("\n Arithmetic Operations");
	printf("\n a+b=%d",c=a+b);
	/*printf("\n a+b=%d",c=a+b);
	printf("\n a+b=%d",c=a+b);
	printf("\n a+b=%d",c=a+b);
	printf("\n a+b=%d",c=a+b);*/
	getch();
}
	
//program for operators
#include<stdio.h>
void main()
{
	int a=5,b=3;
	int addition,subtraction;
	int division, multiplication;
	int modulus,increment,decrement;
	clrscr();
	addition=a+b;
	subtraction=a-b;
	division=a/b;
	multiplication=a*b;
	modulus=a%b;
	increment=a++;
	decrement=a--;
	printf("\n a%%b=%d,a%b);
	getch();
	
}

// program for pattern triangle
#include <stdio.h>
int main()
{
   int i, j, rows=5;
   for (i = 1; i <= rows; ++i)
   {
      for (j = 1; j <= i; ++j)
	  {
         printf("* ");
      }
      printf("\n");
   }
   return 0;
}

//program for tilt ~ operator
#include<stdio.h>
void main()
{
	int a=0,result,double_compliment;
	result=(~a);
	double_compliment=~(result);
	printf("\n ~a:%d",result);
	printf("\n ~(~a):%d",double_compliment);
}

//program to write reverse of given integers
#include<stdio.h>
int main()
{
	long int n,d5,d4,d3,d2,d1;
	long int revnum;
	//printf("\nEnter a five digit number (less than 32767):");
	//scanf("%d",&n);
	n=12345;
	clrscr();
	printf("\n value of n=%ld",n);
	d5=n%10;
	n=n/10;
	printf("\nd5=%ld",d5);
	printf("\nafter d5 n=%ld",n);
	n=n*10000;
	revnum=n;
	printf("\n after 10000 n=%d",n);
	printf("\n revnum =%ld",revnum);
	/*revnum=n*10000;
	d4=n%10;
	n=n/10;
	revnum=revnum+n*1000;
	d3=n%10;
	n=n/10;
	revnum=revnum+n*100;
	d2=n%10;
	n=n/10;
	revnum=revnum+n*10;
	d1=n%10;
	revnum=revnum+d1;
	printf("\nreversed number=%d%d%d%d%d",d5,d4,d3,d2,d1);
	printf("\nrevnum =%ld",revnum);*/
	getch();
	return 0;
}

/* Reverse digits of a 5-digit number */
# include <stdio.h>
int main( )
{
long int n, d5, d4, d3, d2, d1 ;
long int revnum ; /* offers a bigger range of integers */
clrscr();
printf ( "\nEnter a five digit number (less than 32767): " ) ;
scanf ( "%ld", &n ) ;
d5 = n % 10 ; /* 5th digit */
n = n / 10 ; /* remaining digits */
d4 = n % 10 ; /* 4th digit */
n = n / 10 ; /* remaining digits */
d3 = n % 10 ; /* 3rd digit */
n = n / 10 ; /* remaining digits */
d2 = n % 10 ; /* 2nd digit */
n = n / 10 ; /* remaining digits */
d1 = n % 10 ; /* 1st digit */
revnum = d5 * 10000 + d4 * 1000 + d3 * 100 + d2 * 10 + d1 ;
/* specifier %ld is used for printing a long integer */
printf ( "The reversed number is %ld\n", revnum ) ;
getch();
return 0 ;
}
write a program to get 5 subject marks from student, calculate total and percentage. identify if a student is eligible to get rank or not.  (Note: Pass mark >=40. Maximum mark=100.Minimum mark=0.)


int m1=41,m2=43,m3=45,m4=46,m5=39;
float total,percentage;
total=m1+m2+m3+m4+m5;
percentage=total/5;
if(m1>=40 && m2>=40 && m3>=40 && m4>=40 && m5>=40)
	printf("student eligible for rank");
else
	printf("Not eligible for rank");
if(m1==100||m2==100||m3==100||m4==100||m5==100)
	printf("got centum in atleast 1 subject");
else
	printf("Not secured centum in any subject");
	




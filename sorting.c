#include<stdio.h>
void main()
{
    int i , j ,n=5,temp,a[5]={5,8,3,12,2};
    printf("\n given array \n");
    for(i=0;i<n;i++)
    {
        printf("\t a[%d]=%d",i,a[i]);
    }
    for(i=0;i<n-1;i++)
    {
    	for(j=i+1;j<n;j++)
    	{	
    		if(a[i]>a[j])
    		{
    			temp=a[i];
    			a[i]=a[j];
    			a[j]=temp;
    		}
    	}
    }
    printf("\n after sorting \n");
    for(i=0;i<n;i++)
    {
	printf("\t a[%d]=%d",i,a[i]);
    }
}

//write a program to print fibonacci series using for loop
#include<stdio.h>
main()
{
	int sum,n=0,m=1,i;
	printf("\n %d",n);
	printf("\n %d",m);
	for(i=0;i<=20;i++)
	{
		sum=n+m;
	    printf("\n %d",sum);
	n=m;
	m=sum;
	}
	
}

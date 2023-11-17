// Program to find the factorial of a number using while loop

#include<stdio.h>
main ()
{
	int i=1 , n , sum=0, fac=1;
	printf("Enter any number =");
	scanf("%d", &n);
	while(i<=n)
	{
		fac=fac*i;
		i++ ;
	}
	printf("the factorial is %d", fac);
}


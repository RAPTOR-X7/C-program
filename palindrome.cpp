#include<stdio.h>
main()
{
	int n, re , rev ;
	printf("Enter the Number : ");
	scanf("%d", &n);
	while(n!=0)
	{
		re=n%10;
		rev=rev*10+re ;
		n/=10;
	}
	printf("Reversed Number : %d",rev);	
	
	
}

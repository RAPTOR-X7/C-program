#include<stdio.h>
main()
{
	int i,n;
	printf("Enter the number:");
	scanf("%d", &n);
	for(i=1;1<=n;i++)
	{
		if(i>10)
		   break;
		printf("%d\n",i);
	}
}

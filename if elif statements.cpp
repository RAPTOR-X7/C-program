#include<stdio.h>
main()
{
	int marks ;
	printf("Enter your marks : ");
	scanf("%d", &marks);
	
	if (marks>= 90)
	printf("Your grade is A");
	else if (marks>=80 && marks<90)
	printf("Your grade is B");
	else
	printf("you are a weak student");
}

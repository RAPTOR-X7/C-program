#include<stdio.h>
main ()
{
	char x ;
	printf("Enter the choice of character :");
	scanf("%c", &x);
	
	switch(x)
	{
		case 'a' :
			printf("Avengers");
			break;
		case 'b' :
			printf("Blade Runner");
			break;
		case 'x' :
			printf("Interstellar");
			break;
		default :
			printf("Arrival");
	}
}

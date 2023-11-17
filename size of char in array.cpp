#include<stdio.h>
main()
{
	char a[3]={'a','b','c'};
	printf("size of index 0 = %d", &a[0]);
	printf("\nsize of index 1 = %d", &a[1]);
}

//differnce of the two address is 1 
// so each char values occupies 1 byte of memory

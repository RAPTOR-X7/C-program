// void pointers is also called as Generic pointers

#include<stdio.h>
main()
{
	int x=10;
	char ch='A';
	void *ptr;        // creation of void pointer
	ptr=&x;
	
	
	//printf("The value at ptr is %d", *ptr);
	// here compiler will show error , because pointer is of void i.e. no datatype and value of x i.e. passed is of integer type
   	// so we should do typecassting	
	printf("The value at ptr is %d \n", *(int*)ptr);
	
	ptr=&ch;
	printf("The value at ptr is %c", *(char*)ptr);
}

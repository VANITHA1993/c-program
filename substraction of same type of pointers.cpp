#include<stdio.h>
main()
{
	int x=10,y=20,z=30;
	int *ptr=&x;
	int *ptr1=&z;
	printf("%d",ptr1-ptr);
}

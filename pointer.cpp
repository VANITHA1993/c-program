#include<stdio.h>
main()
{
	int x=10;
	float y=3.45;
	char a='A';
	int *ptr=&x;
	float *ptr1;
	ptr1=&y;
	char *ptr2=&a;
	printf("%u\t%d\n",ptr,*ptr);
	printf("%u\t%f\n",ptr1,*ptr1);
	printf("%u\t%c\n",ptr2,*ptr2);
}

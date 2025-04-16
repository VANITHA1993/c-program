#include<stdio.h>
void swap(int,int);
main()
{
	int a=5,b=4;
	printf("before swaping a=%d b=%d\n",a,b);
	swap(a,b);
	printf("a=%d b=%d\n",a,b);
}
void swap(int a,int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
	printf("after swaping a=%d\tb=%d\n",a,b);
	
}


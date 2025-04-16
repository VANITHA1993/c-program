#include<stdio.h>
main()
{
	int a=5,b=4,temp;
	printf("before swaping a=%d b=%d\n",a,b);
	temp=a;
	a=b;
	b=temp;
	printf("after swaping a=%d b=%d",a,b);
}


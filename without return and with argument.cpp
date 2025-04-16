#include<stdio.h>
void  arthimetic(int a,int b);
main()
{
	int a,b;
	printf("enter a,b");
	scanf("%d%d",&a,&b);
	arthimetic(a,b);
}
void arthimetic(int a,int b);
{
	printf("%d\n",a+b);
	printf("%d\n",a-b);
	printf("%d\n",a/b);
	printf("%d\n",a*b);
	printf("%d\n",a%b);
}




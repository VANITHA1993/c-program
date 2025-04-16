#include<stdio.h>
int arthimetic_fun(int,int);
main()
{
 int x,y,a,b,c,d,e;
 printf("enter the two numbers");
 scanf("%d%d",&x,&y);
 arthimetic_fun(x,y);	
}
int arthimetic_fun(int x,int y)
{
	printf("a=%d\n",x+y);
	printf("b=%d\n",x-y);
	printf("c=%d\n",x/y);
	printf("d=%d\n",x*y);
	printf("e=%d\n",x%y);
	
}

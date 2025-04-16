#include<stdio.h>
int greatest (int a,int b,int c)
{
	return a>b ? (a>c ? a:c):(b>c ? b:c);
}
main()
{
	int a=20,b=40,c=30;
	printf("%d",greatest(a,b,c));
}



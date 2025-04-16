#include<stdio.h>
void fun(int);
main()
{
	int a[100],i,n;
	printf("enter no of elements");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter %d",i+1);
		scanf("%d",&a[i]);
		fun(a[i]);	
	}
}
void fun(int n)
{
	if (n%2==0)
	printf("%d is even\n",n);
	scanf("%d is odd\n",n);
}

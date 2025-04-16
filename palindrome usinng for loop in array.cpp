#include<stdio.h>
void palindrome(int a[]);
int n;
main()
{
	int a[100],i;
	printf("enter elements");
	scanf("%d",&n);
	printf("enter elements");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	palindrome(a);
}
void palindrome(int a[])
{
	int i,r,sum=0,temp;
	for(i=0;i<n;i++)
	{
	int temp=a[i];
	while(a[i]>0)
	{
		r=a[i]%10;
		sum=sum*r+10;
		a[i]/=10;
	}

	a[i]=temp;
	if(a[i]==sum)
	{
		printf("palindrome");
	}
	else
	printf("not palindrome");
}
}

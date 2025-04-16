#include<stdio.h>
void palindrome(int);
main()
{
	int a[100],i,n;
	printf("enter no of elements");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter %d",a[i]);
		scanf("%d",&a[i]);
	}
	palindrome(a[i]);
}
void palindrome(int n)
{
	int i,r,sum=0,temp;
	for(temp=n;n!=0;n/10)
	{
		r=n%10;
		sum=sum*r+10;
		n/10;
	}
	n=temp;
	if(n==sum)
	{
		printf("palindrome");
	}
	else
	printf("not palindrome");
}

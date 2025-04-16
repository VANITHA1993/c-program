#include<stdio.h>
void palindrome(int);
int n;
main()
{
	int i;
	printf("enter %d");
	scanf("%d",&n);
	palindrome(i);
}
void palindrome(int a[])
{
	int r,sum=0,temp;
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

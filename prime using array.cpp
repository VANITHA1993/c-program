#include<stdio.h>
int prime(int);
main()
{
	int a[100],i,n;
	printf("enter no of elements"); 
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter integers %d",i+1);
		scanf("%d",&a[i]);
		prime(a[i]);
		
	}
	
}
int prime(int n)
{
	int count=0,i;
	for(i=1;i<=n;i++)
	{
	
	if(n%i==0)
	count++;
   }
   if(count==2)
	{
		printf("prime\n");
	}
		else
    	printf("not prime\n");
    	
	    return n;
}

#include<stdio.h>
void descending(int a[]);
int n;
main()
{
   int a[100],i;
   printf("enter no of elements");
   scanf("%d",&n);
   printf("enter element");
   for(i=0;i<n;i++)
   scanf("%d",&a[i]);
   descending(a);	
}
void descending(int a[])
{
	int i,j,temp;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]<a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	printf("%d",a[i]);
}

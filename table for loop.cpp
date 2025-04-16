#include<stdio.h>
main()
{
	int n,i,t;
	printf("enter n");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		t=n*i;
		printf("%d*%d=%d\n",n,i,t);
	}
}

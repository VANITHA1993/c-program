#include<stdio.h>
main()
{
	int n,i=2,fact=1;
	printf("enter i");
	scanf("%d",&i);
	printf("select 1 even or odd\n");
	printf("select 2 factorial\n");
	printf("select 3 positive or negative\n");
	printf("select 4 prime or not\n");
	printf("enter choice");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
			if(i%2==0)
			printf("even");
			else
			printf("odd");
			break;
		case 2:
			for(i=1;i<=5;i++)
			fact=fact*i;
			printf("%d",fact);
			break;
		case 3:
			if(i<0)
			printf("positive");
			else
			printf("negative");
			break;
		case 4:
			if(i%2==1)
			printf("prime");
			else
			printf("not prime");
			break;
		default:
			printf("wrong choice");
			
			
	}
}

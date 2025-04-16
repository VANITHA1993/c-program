#include<stdio.h>
main()
{
	int i=2,fact=1;
	printf("enter i");
	scanf("%d",&i);
	printf("select 1 even or odd\n");
	printf("select 2 factorial\n");
	printf("select 3 positive or negative\n");
	printf("select 4 prime or not\n");
	printf("enter choice");
	scanf("%d",&i);
	switch(i)
	{
		case 1:
			if(i%2==0)
			printf("even");
			else
			printf("odd");
			break;
		case 2:
			if(fact=fact*1)
			printf("factorial");
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

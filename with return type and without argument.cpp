#include<stdio.h>
float sum();
int sub();
float multi();
main()
{
	printf("%f\n",sum());
	printf("%d\n",sub());
	printf("%f\n",multi());
}
float sum()
{
	int x;
	float y;
	printf("enter int&float");
	scanf("%d%f",&x,&y);
	return x+y;
}
int sub()
{
	int x,y;
	printf("enter integers");
	scanf("%d%d",&x,&y);
	return x-y;
}
float multi()
{
	int x;
	float y;
	printf("enter int&float");
	scanf("%d%f",&x,&y);
	return x*y;
}


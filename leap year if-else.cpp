#include<stdio.h>
main()
{
	int n;
	printf("enter the year");
	scanf("%d",&n);
	if((n%400==0)||(n%4==0 && n%100!=0))
	
		printf("this is leap year");
	
	else

		printf("this is not leap year");
	
}

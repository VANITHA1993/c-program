#include<stdio.h>
main()
{
	int marks;
	printf("enter your marks");
	scanf("%d",&marks);
	if(marks<300)
	{
		printf("gradeF");
	}
	else
		if(marks>500)
		{
			printf("gradeA");
		}
		else
			if(marks>=500&&marks>=400)
			{
				printf("gradeB");
			}
		else
			if(marks>=400&&marks>=300)
			{
				printf("gradeC");
			}
}
		
